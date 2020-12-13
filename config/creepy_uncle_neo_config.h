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
#define ENABLE_POWER_FOR_ID PowerPINS<bladePowerPin2,bladePowerPin3>
#define ENABLE_SSD1306
#define ORIENTATION ORIENTATION_USB_TOWARDS_BLADE
#define IDLE_OFF_TIME 60 * 5 * 1000 //5 minutes
#define KEEP_SAVEFILES_WHEN_PROGRAMMING
//#define DISABLE_DIAGNOSTIC_COMMANDS
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
    StylePtr<accentBlink>(), "the return"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentBlink>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "esb graflex"
  },
  { "Royalty", "Royalty/tracks/track1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "royalty"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "reflex ben"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "reflex rey"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "unstable2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "2nd sister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fulcrum"
  },
  { "Commander_Tano", "Commander_Tano/tracks/track2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "commander tano"
  },
  { "The_JEDI", "The_JEDI/tracks/track1.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "the jedi"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "hero obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "vader"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "destiny"
  },
  { "Blind_Cowboy", "Blind_Cowboy/tracks/track2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "blind cowboy"
  },
  { "Staple_Sword", "Staple_Sword/tracks/track1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "staple sword"
  },
  { "Dyad_Kylo", "Dyad_Kylo/tracks/track2.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "dyad kylo"
  },
  { "Dyad_Rey", "Dyad_Rey/tracks/track4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "dyad rey"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo blue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo cyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo green"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo indigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo magenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo orange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo purple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo red"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<calBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "fo yellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "etaan"
  },
  { "Ghost_Sucker", "Ghost_Sucker/tracks/track5.wav",
    StylePtr<ghostSucker>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "ghost sucker"
  },
  { "XMAS", "XMAS/tracks/track1.wav",
    StylePtr<xmas>(),
    StylePtr<chassisOff>(),
    StylePtr<accentAlternate>(), "x-mas"
  }
};

Preset chassis[] = {
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<accentBlink>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "the return"
  },
  { "Grumpy_Uncle", "Grumpy_Uncle/tracks/track3.wav",
    StylePtr<accentBlink>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "grumpy uncle"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "esb graflex"
  },
  { "Royalty", "Royalty/tracks/track1.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "royalty"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "reflex ben"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "reflex rey"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<accentAlternate>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(), "unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<accentAlternate>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(), "unstable2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<accentAlternate>(),
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(), "2nd sister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<accentAlternate>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(), "fulcrum"
  },
  { "Commander_Tano", "Commander_Tano/tracks/track2.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "commander tano"
  },
  { "The_JEDI", "The_JEDI/tracks/track1.wav",
    StylePtr<accentAlternate>(),
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(), "the jedi"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "hero obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<accentAlternate>(),
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(), "vader"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<accentAlternate>(),
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(), "destiny"
  },
  { "Blind_Cowboy", "Blind_Cowboy/tracks/track2.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "blind cowboy"
  },
  { "Staple_Sword", "Staple_Sword/tracks/track1.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "staple sword"
  },
  { "Dyad_Kylo", "Dyad_Kylo/tracks/track2.wav",
    StylePtr<accentAlternate>(),
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(), "dyad kylo"
  },
  { "Dyad_Rey", "Dyad_Rey/tracks/track4.wav",
    StylePtr<accentAlternate>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "dyad rey"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo blue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo cyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo green"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo indigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo magenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo orange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo purple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo red"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<accentAlternate>(),
    StylePtr<calBladeStyle>(),
    StylePtr<calBladeStyle>(), "fo yellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<accentAlternate>(),
    StylePtr<colorRun>(),
    StylePtr<colorRun>(), "etaan"
  },
  { "Ghost_Sucker", "Ghost_Sucker/tracks/track5.wav",
    StylePtr<accentAlternate>(),
    StylePtr<ghostSucker>(),
    StylePtr<ghostSucker>(), "ghost sucker"
  },
  { "XMAS", "XMAS/tracks/track1.wav",
    StylePtr<accentAlternate>(),
    StylePtr<xmas>(),
    StylePtr<xmas>(), "x-mas"
  }
};

BladeConfig blades[] = {
  { 28.0, WS281XBladePtr<123, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) },
  { 37.0, WS281XBladePtr<21, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) }, //Short Blade
  { 47.0, WS281XBladePtr<5, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) }, //Blade Plug
  { 85.0, WS281XBladePtr<131, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  , CONFIGARRAY(blade) }, //36" 
  // { 115.0, SubBladeWithStride(0, 262, 2, WS281XBladePtr<264, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()),
  //   SubBladeWithStride(1, 263, 2, NULL),
  //   WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
  //   SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>()
  // , CONFIGARRAY(krBlade) }, //34.5" KR Blade
  { 453.0, SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>(),
    WS281XBladePtr<124, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<6, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(chassis) }, //Chassis
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
