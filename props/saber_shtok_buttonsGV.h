// 1 Button:
// Activate Muted - fast double click while OFF
// Activate blade - short click while OFF or stab gesture while OFF
// Play/Stop Music - hold 1 second and release while ON
// Turn the blade off - hold and wait till blade is off while ON (like in Plecter boards) or twist gesture while ON
// Next Preset - hold 1 second and release while OFF
// Previous Preset - hold and wait while OFF
// Lockup - hold + hit clash while ON
// Drag - hold + hit clash while ON pointing the blade tip down
// Blaster Blocks - short click while ON
// Force Effects - twist the hilt + press and hold the button while ON (while pointing up)
// Enter Color Change mode - twist the hilt + press and hold the button while ON (pointing down)
// Confirm selected color in Color Change mode - hold the button until confirmation sound
// Volume UP - single click button while OFF and in VOLUME MENU
// Volume Down - hold button 1 second and release while OFF and in VOLUME MENU
// Volume Menu - Twist while off to enter menu and twist again to exit (can also hold button to exit)
//
// 2 Buttons:
// Activate Muted - fast double click Activation button while OFF
// Activate blade - short click Activation button while OFF or stab gesture while OFF
// Play/Stop Music - hold 1 second and release Activation button while OFF or ON
// Turn the blade off - hold and wait till blade is off while ON (like in Plecter boards) or twist gesture while ON
// Next Preset - short click AUX button while OFF
// Previous Preset - hold AUX and click Activation button while OFF
// Lockup - hold AUX button while ON (like in Plecter boards)
// Drag - hold AUX button while ON pointing the blade tip down
// Blaster Blocks - short click AUX button while ON
// Force Effects - short click Activation button while ON
// Enter Color Change mode - hold AUX and click Activation button while ON
// Confirm selected color in Color Change mode - hold the button until confirmation sound

#ifndef PROPS_SABER_SHTOK_BUTTONS_H
#define PROPS_SABER_SHTOK_BUTTONS_H

#include "prop_base.h"

#undef PROP_TYPE
#define PROP_TYPE SaberShtokButtons

// The Saber class implements the basic states and actions
// for the saber.
class SaberShtokButtons : public PropBase {
public:
  SaberShtokButtons() : PropBase() {}
  const char* name() override { return "SaberShtokButtons"; }

  void ChangeVolume(bool up) {
    if (up) {
      STDOUT.println("Volume up");
      if (dynamic_mixer.get_volume() < VOLUME) {
        dynamic_mixer.set_volume(std::min<int>(VOLUME + VOLUME * 0.1,
          dynamic_mixer.get_volume() + VOLUME * 0.10));
        if (!hybrid_font.PlayPolyphonic(&SFX_mselect)) {
          beeper.Beep(0.2, 2000.0);
        }
        STDOUT.print("Current Volume: ");
        STDOUT.println(dynamic_mixer.get_volume());
      }
      else {
        beeper.Beep(0.2, 3000.0);
      }
    } else {
      STDOUT.println("Volume Down");
      if (dynamic_mixer.get_volume() > (0.10 * VOLUME)) {
        dynamic_mixer.set_volume(std::max<int>(VOLUME * 0.1,
          dynamic_mixer.get_volume() - VOLUME * 0.10));
        if (!hybrid_font.PlayPolyphonic(&SFX_mselect)) {
          beeper.Beep(0.2, 2000.0);
        }
        STDOUT.print("Current Volume: ");
        STDOUT.println(dynamic_mixer.get_volume());
      }
      else{
        beeper.Beep(0.2, 1000);
      }
    }
  }

  void ToggleVolumeMenu() {
    if (mode_volume_) {
      mode_volume_ = false;
      if (!hybrid_font.PlayPolyphonic(&SFX_menter)) {
        beeper.Beep(0.20, 2000.0);
        beeper.Beep(0.20, 1414.2);
        beeper.Beep(0.20, 1000.0);
        STDOUT.println("Exit Volume Menu");
      }
    }
    else {
      mode_volume_ = true;
      if (!hybrid_font.PlayPolyphonic(&SFX_mexit)) {
        beeper.Beep(0.20, 1000.0);
        beeper.Beep(0.20, 1414.2);
        beeper.Beep(0.20, 2000.0);
        STDOUT.println("Enter Volume Menu");
      }
    }
  }

  bool Event2(enum BUTTON button, EVENT event, uint32_t modifiers) override {
    switch (EVENTID(button, event, modifiers)) {
      case EVENTID(BUTTON_POWER, EVENT_PRESSED, MODE_ON):
      case EVENTID(BUTTON_AUX, EVENT_PRESSED, MODE_ON):
        if (accel_.x < -0.15) {
          pointing_down_ = true;
        } else {
          pointing_down_ = false;
        }
      return true;

// 1-button code

#if NUM_BUTTONS == 1

// Turn Blade ON
      case EVENTID(BUTTON_POWER, EVENT_LATCH_ON, MODE_OFF):
      case EVENTID(BUTTON_NONE, EVENT_STAB, MODE_OFF):
      case EVENTID(BUTTON_AUX, EVENT_LATCH_ON, MODE_OFF):
      case EVENTID(BUTTON_AUX2, EVENT_LATCH_ON, MODE_OFF):
      case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_OFF):
        if (!mode_volume_) {
          aux_on_ = false;
          mode_volume_ = false;
          On();
        }
        else {
          ChangeVolume(true);
        }
	return true;

// Next Preset
      case EVENTID(BUTTON_POWER, EVENT_CLICK_LONG, MODE_OFF):
#ifdef DUAL_POWER_BUTTONS
        aux_on_ = true;
        On();
#else
        if (mode_volume_) {
          ChangeVolume(false);
        }
        else {
          next_preset();
        }
#endif
	return true;

// Previous Preset
      case EVENTID(BUTTON_POWER, EVENT_HELD_LONG, MODE_OFF):
#ifdef DUAL_POWER_BUTTONS
        aux_on_ = true;
        On();
#else
        if (!mode_volume_) {
          previous_preset();
        }
        else {
          ToggleVolumeMenu();
        }
#endif
	return true;

// Enter Volume Menu
      case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_OFF):
        ToggleVolumeMenu();
	return true;

// Activate Muted
      case EVENTID(BUTTON_POWER, EVENT_DOUBLE_CLICK, MODE_ON):
	if (millis() - activated_ < 500) {
	  if (SetMute(true)) {
	    unmute_on_deactivation_ = true;
	  }
	}
	return true;

// Turn Blade OFF	
      case EVENTID(BUTTON_POWER, EVENT_HELD_LONG, MODE_ON):
      case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON):
    if (!SaberBase::Lockup()) {
#ifndef DISABLE_COLOR_CHANGE
          if (SaberBase::GetColorChangeMode() != SaberBase::COLOR_CHANGE_MODE_NONE) {
            // Just exit color change mode.
            // Don't turn saber off.
            ToggleColorChangeMode();
            return true;
          }
#endif
      Off();
    }
        return true;

// Force and Color Change mode
      case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON | BUTTON_POWER):
#ifndef DISABLE_COLOR_CHANGE
        if (accel_.x < -0.15) {
          ToggleColorChangeMode();
        } else {
          SaberBase::DoForce();
        }
#else
        SaberBase::DoForce();
#endif
	return true;

// Blaster Deflection
      case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_ON):
        SaberBase::DoBlast();
	return true;

// Lockup
      case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON | BUTTON_POWER):
      case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON | BUTTON_AUX):
        if (!SaberBase::Lockup()) {
          if (pointing_down_) {
            SaberBase::SetLockup(SaberBase::LOCKUP_DRAG);
          } else {
            SaberBase::SetLockup(SaberBase::LOCKUP_NORMAL);
          }
          SaberBase::DoBeginLockup();
	  return true;
        }
        break;

// Start or Stop Track
      case EVENTID(BUTTON_POWER, EVENT_CLICK_LONG, MODE_ON):
        StartOrStopTrack();
	return true;

      case EVENTID(BUTTON_POWER, EVENT_PRESSED, MODE_OFF):
        SaberBase::RequestMotion();
	return true;

// 2-button code

#elif NUM_BUTTONS == 2

// Turn Blade ON
      case EVENTID(BUTTON_POWER, EVENT_LATCH_ON, MODE_OFF):
      case EVENTID(BUTTON_NONE, EVENT_STAB, MODE_OFF):
      case EVENTID(BUTTON_AUX, EVENT_LATCH_ON, MODE_OFF):
      case EVENTID(BUTTON_AUX2, EVENT_LATCH_ON, MODE_OFF):
      case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_OFF):
        aux_on_ = false;
        On();
	return true;

// Next Preset
      case EVENTID(BUTTON_AUX, EVENT_CLICK_SHORT, MODE_OFF):
#ifdef DUAL_POWER_BUTTONS
        aux_on_ = true;
        On();
#else
        next_preset();
#endif
	return true;

// Activate Muted
      case EVENTID(BUTTON_POWER, EVENT_DOUBLE_CLICK, MODE_ON):
	if (millis() - activated_ < 500) {
	  if (SetMute(true)) {
	    unmute_on_deactivation_ = true;
	  }
	}
	return true;

// Turn Blade OFF	
      case EVENTID(BUTTON_POWER, EVENT_HELD_LONG, MODE_ON):
      case EVENTID(BUTTON_AUX, EVENT_LATCH_OFF, MODE_ON):
      case EVENTID(BUTTON_AUX2, EVENT_LATCH_OFF, MODE_ON):
      case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON):
    if (!SaberBase::Lockup()) {
#ifndef DISABLE_COLOR_CHANGE
          if (SaberBase::GetColorChangeMode() != SaberBase::COLOR_CHANGE_MODE_NONE) {
            // Just exit color change mode.
            // Don't turn saber off.
            ToggleColorChangeMode();
            return true;
          }
#endif
      Off();
    }
        return true;

// Force
      case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_ON):
        SaberBase::DoForce();
	return true;

// Color Change mode
#ifndef DISABLE_COLOR_CHANGE
      case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_ON | BUTTON_AUX):
	ToggleColorChangeMode();
	break;
#endif

// Blaster Deflection
      case EVENTID(BUTTON_AUX, EVENT_CLICK_SHORT, MODE_ON):
        SaberBase::DoBlast();
	return true;

// Lockup
      case EVENTID(BUTTON_AUX, EVENT_HELD, MODE_ON):
      case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON | BUTTON_AUX):
        if (!SaberBase::Lockup()) {
          if (pointing_down_) {
            SaberBase::SetLockup(SaberBase::LOCKUP_DRAG);
          } else {
            SaberBase::SetLockup(SaberBase::LOCKUP_NORMAL);
          }
          SaberBase::DoBeginLockup();
	  return true;
        }
        break;

// Start or Stop Track
      case EVENTID(BUTTON_POWER, EVENT_CLICK_LONG, MODE_OFF):
      case EVENTID(BUTTON_POWER, EVENT_CLICK_LONG, MODE_ON):
        StartOrStopTrack();
	return true;

      case EVENTID(BUTTON_POWER, EVENT_PRESSED, MODE_OFF):
        SaberBase::RequestMotion();
	return true;

      case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_OFF | BUTTON_POWER):
        next_preset();
	return true;


// Previous Preset
      case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_OFF | BUTTON_AUX):
        previous_preset();
	return true;

#else
#error only 1 and 2 buttons are supported by this mod
#endif

      case EVENTID(BUTTON_AUX2, EVENT_CLICK_SHORT, MODE_OFF):
#ifdef DUAL_POWER_BUTTONS
        next_preset();
#else
        previous_preset();
#endif
	return true;

// Events that needs to be handled regardless of what other buttons are pressed.
      case EVENTID(BUTTON_POWER, EVENT_RELEASED, MODE_ANY_BUTTON | MODE_ON):
      case EVENTID(BUTTON_AUX, EVENT_RELEASED, MODE_ANY_BUTTON | MODE_ON):
	if (SaberBase::Lockup()) {
	  SaberBase::DoEndLockup();
	  SaberBase::SetLockup(SaberBase::LOCKUP_NONE);
	  return true;
	}
    }
    return false;
  }
private:
  bool aux_on_ = true;
  bool pointing_down_ = false;
  bool mode_volume_ = false;
};

#endif