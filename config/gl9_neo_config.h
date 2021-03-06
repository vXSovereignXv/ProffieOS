#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 3
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
#define ENABLE_POWER_FOR_ID PowerPINS<bladePowerPin2, bladePowerPin3>
#define BLADE_DETECT_PIN 8
#define IDLE_OFF_TIME 60 * 5 * 1000 //5 minutes
#define KEEP_SAVEFILES_WHEN_PROGRAMMING
//#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons_custom.h"
#endif

#ifdef CONFIG_PRESETS

#include "nd_blade_config.h"

Preset blade[] = {
  { "Royalty", "Royalty/tracks/track1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "royalty"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Luke_RoTJ"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Luke_ESB"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(), "EtaanCrystal"
  }
};

Preset krBlade[] = {
  { "Royalty", "Royalty/tracks/track1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "royalty"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_RoTJ"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_ESB"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(),
    StylePtr<chassisOff>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(), "EtaanCrystal"
  }
};

Preset chassis[] = {
  { "Royalty", "Royalty/tracks/track1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "royalty"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "Luke_RoTJ"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "Luke_ESB"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<sithDefault>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<colorRun>(), "EtaanCrystal"
  }
};

BladeConfig blades[] = {
  { 28.0, SubBlade(0, 122, WS281XBladePtr<124, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(123, 123, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) },
  { 37.0, SubBlade(0, 20, WS281XBladePtr<22, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(21, 21, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) }, //Short Blade
  { 47.0, SubBlade(0, 4, WS281XBladePtr<6, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(5, 5, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) }, //Blade Plug
  { 85.0, SubBlade(0, 130, WS281XBladePtr<132, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(131, 131, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) }, //36" 
  { 115.0, SubBladeWithStride(0, 262, 2, WS281XBladePtr<264, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()),
    SubBladeWithStride(1, 263, 2, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(krBlade) }, //34.5" KR Blade
  { NO_BLADE, WS281XBladePtr<124, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SubBlade(0, 4, WS281XBladePtr<6, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()), 
    SubBlade(5, 5, NULL)
  , CONFIGARRAY(chassis) }, //Chassis
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
