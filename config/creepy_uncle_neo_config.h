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
#define ENABLE_SSD1306
#define ORIENTATION ORIENTATION_USB_TOWARDS_BLADE
#define IDLE_OFF_TIME 60 * 5 * 1000 //5 minutes
#define KEEP_SAVEFILES_WHEN_PROGRAMMING
#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons_custom.h"
#endif

#ifdef CONFIG_PRESETS

#define accentAlternate Layers<Pulsing<Mix<IsLessThan<BatteryLevel,Int<2300>>,Green,Red>,Black,1200>,LockupL<Blinking<Red,Black,250,500>,Blinking<Red,Black,250,500>,Int<32768>,Int<32768>,Int<32768>>,TransitionEffectL<TrConcat<TrInstant,Blinking<Green,Black,250,500>,TrDelay<5000>>,EFFECT_FORCE>,InOutTrL<TrFade<300>,TrFade<300>,TransitionLoop<Black,TrConcat<TrInstant,Green,TrDelay<500>,Red,TrDelay<500>>>>>
#define accentBlink Layers<Pulsing<Mix<IsLessThan<BatteryLevel,Int<2300>>,Green,Red>,Black,1200>,LockupL<Blinking<Red,Black,250,500>,Blinking<Red,Black,250,500>,Int<32768>,Int<32768>,Int<32768>>,TransitionEffectL<TrConcat<TrInstant,Blinking<Green,Black,250,500>,TrDelay<5000>>,EFFECT_FORCE>,InOutTrL<TrFade<300>,TrFade<300>,TransitionLoop<Black,TrConcat<TrInstant,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Green,TrDelay<200>,Black,TrDelay<150>,Red,TrDelay<200>,Black,TrDelay<150>,Red,TrDelay<200>,Black,TrDelay<150>,Red,TrDelay<200>,Black,TrDelay<150>,Red,TrDelay<200>,Black,TrDelay<150>,Red,TrDelay<200>,Black,TrDelay<150>,Red,TrDelay<200>,Black,TrDelay<150>>>>>
#include "nd_blade_config.h"

Preset blade[] = {
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentBlink>(), "the return"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentBlink>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "esb graflex"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "reflex ben"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "reflex rey"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "unstable2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "2nd sister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "hero obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "vader"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "destiny"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo blue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo cyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo green"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo indigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo magenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo orange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo purple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo red"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo yellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "etaan"
  }
};

Preset krBlade[] = {
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentBlink>(), "the return"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentBlink>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "esb graflex"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "reflex ben"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "reflex rey"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "unstable2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "2nd sister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "hero obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "vader"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "destiny"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo blue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo cyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo green"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo indigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo magenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo orange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo purple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo red"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo yellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "etaan"
  }
};

Preset chassis[] = {
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentBlink>(), "the return"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentBlink>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "esb graflex"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "reflex ben"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "reflex rey"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<accentAlternate>(), "unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<accentAlternate>(), "unstable2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<accentAlternate>(), "2nd sister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<accentAlternate>(), "fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "hero obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<accentAlternate>(), "vader"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(),
    StylePtr<accentAlternate>(), "destiny"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo blue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo cyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo green"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo indigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo magenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo orange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo purple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(),
    StylePtr<accentAlternate>(), "fo red"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<accentAlternate>(), "fo yellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<colorRun>(),
    StylePtr<accentAlternate>(), "etaan"
  }
};

BladeConfig blades[] = {
  { 28.0, SubBlade(0, 122, WS281XBladePtr<124, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(123, 123, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) },
  { 37.0, SubBlade(0, 20, WS281XBladePtr<22, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(21, 21, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) }, //Short Blade
  { 47.0, SubBlade(0, 4, WS281XBladePtr<6, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(5, 5, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) }, //Blade Plug
  { 85.0, SubBlade(0, 130, WS281XBladePtr<132, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
    SubBlade(131, 131, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) }, //36" 
  { 115.0, SubBladeWithStride(0, 262, 2, WS281XBladePtr<264, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()),
    SubBladeWithStride(1, 263, 2, NULL),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(krBlade) }, //34.5" KR Blade
  { NO_BLADE, WS281XBladePtr<124, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SubBlade(0, 4, WS281XBladePtr<6, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()), 
    SubBlade(5, 5, NULL),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(chassis) }, //Chassis
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
