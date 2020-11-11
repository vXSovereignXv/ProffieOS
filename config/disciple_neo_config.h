#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 4
#define NUM_BUTTONS 2
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 396;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_STATE
#define SHARED_POWER_PINS
#define ENABLE_POWER_FOR_ID PowerPINS<bladePowerPin2,bladePowerPin3>
#define BLADE_DETECT_PIN 8
#define IDLE_OFF_TIME 60 * 5 * 1000 //5 minutes
#define KEEP_SAVEFILES_WHEN_PROGRAMMING
//#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons_custom.h"
#endif

#ifdef CONFIG_PRESETS

#define buttonPulse Layers<Blue,InOutTrL<TrFade<300>,TrFade<300>,Pulsing<Blue, Black, 3000>>>
#include "nd_blade_config.h"

Preset blade[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Luke_RoTJ"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "EtaanCrystal"
  }
};

Preset krBlade[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Luke_RoTJ"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "EtaanCrystal"
  }
};

Preset chassis[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Luke_RoTJ"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<buttonPulse>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<buttonPulse>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<buttonPulse>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<buttonPulse>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<buttonPulse>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<buttonPulse>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(),
    StylePtr<buttonPulse>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<buttonPulse>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<buttonPulse>(), "EtaanCrystal"
  }
};

BladeConfig blades[] = {
  { 28.0, SubBlade(0, 122, WS281XBladePtr<124, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(123, 123, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(blade) },
  { 37.0, SubBlade(0, 20, WS281XBladePtr<22, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(21, 21, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(blade) }, //Short Blade
  { 47.0, SubBlade(0, 4, WS281XBladePtr<6, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(5, 5, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(blade) }, //Blade Plug
  { 85.0, SubBlade(0, 130, WS281XBladePtr<132, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(131, 131, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(blade) }, //36" 
  { 115.0, SubBladeWithStride(0, 262, 2, WS281XBladePtr<264, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()),
    SubBladeWithStride(1, 263, 2, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(krBlade) }, //34.5" KR Blade
  { NO_BLADE, WS281XBladePtr<124, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SubBlade(0, 4, WS281XBladePtr<6, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()), 
    SubBlade(5, 5, NULL),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(chassis) }, //Chassis
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
