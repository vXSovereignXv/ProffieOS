#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 1
#define VOLUME 1500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_nd_buttons.h"
#endif

#ifdef CONFIG_PRESETS

#define buttonPulse InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>
#define mainColors ColorChange<TrFade<500>, White, Green, SpringGreen, Cyan, DeepSkyBlue, DodgerBlue, Blue, Violet, Indigo, Magenta, Red, Orange, Yellow>
#define flickerColors ColorChange<TrFade<500>, Rgb<128, 128, 128>, Rgb<0, 128, 0>, SpringGreenDark, DeepSkyBlue, DeepSkyBlueDark, DodgerBlueDark, Rgb<0, 0, 128>, VioletDark, IndigoDark, MagentaDark, Rgb<128, 0, 0>, Tomato, Rgb<128, 128, 0>>
#define clashColors ColorChange<TrFade<500>, Cyan, White, White, White, White, White, White, White, White, White, White, White, White>
#define unstableFlickerColors ColorChange<TrFade<500>, Rgb<50, 50, 50>, Rgb<0, 50, 0>, Rgb<0, 64, 14>, Rgb<0, 64, 14>, Rgb<0, 34, 64>, Rgb<0, 18, 64>, Rgb<0, 0, 128>, Rgb<34, 5, 56>, Rgb<30,5,85>, Rgb<50, 0, 50>, Rgb<50, 0, 0>, Rgb<50, 19, 0>, Rgb<50, 50, 0>>
#define mainBladeStyle InOutHelper<OnSpark<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, clashColors>, RandomFlicker<mainColors,clashColors>>, clashColors, 40>, clashColors, 500>, 300, 800, Black>

Preset presets[] = {
  { "KWBLUE", "tracks/GESW.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "KWBLUE"
  },
  { "KWGREEN", "tracks/GESW.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "KWGREEN"
  },
  { "KWPURPLE", "tracks/GESW.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "KWPURPLE"
  },
  { "KWRED", "tracks/GESW.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "KWRED"
  },
  { "KWWHITE", "tracks/GESW.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "KWWHITE"
  },
  { "KWYELLOW", "tracks/GESW.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "KWYELLOW"
  }
};

BladeConfig blades[] = {
 { 0, SimpleBladePtr<CreeXPE2RedTemplate<2000>, CreeXPE2GreenTemplate<100>, CreeXPE2BlueTemplate<200>, NoLED, bladePowerPin1, bladePowerPin2, bladePowerPin3, -1>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
