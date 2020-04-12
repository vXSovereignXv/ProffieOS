#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 3
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 193;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_STATE
#define SHARED_POWER_PINS
//#define ENABLE_POWER_FOR_ID PowerPINS<bladePowerPin2, bladePowerPin3>
//#define BLADE_DETECT_PIN 8
#endif

#ifdef CONFIG_PROP
#include "../props/saber_nd_buttons.h"
#endif

#ifdef CONFIG_PRESETS

#define chassisOff Black
#define mainColors ColorChange<TrFade<500>, White, GreenYellow, Chartreuse, Green, SpringGreen, Cyan, DeepSkyBlue, DodgerBlue, Blue, Violet, Indigo, Magenta, HotPink, Red, Orange, Yellow>
#define flickerColors ColorChange<TrFade<500>, Rgb<128, 128, 128>, Rgb<54, 128, 3>, Rgb<28, 128, 0>, Rgb<0, 128, 0>, SpringGreenDark, DeepSkyBlue, DeepSkyBlueDark, DodgerBlueDark, Rgb<0, 0, 128>, VioletDark, IndigoDark, MagentaDark, Pink, Rgb<128, 0, 0>, Rgb<128, 48, 0>, Rgb<128, 128, 0>>
#define clashColors ColorChange<TrFade<500>, Cyan, White, White, White, White, White, White, White, White, White, White, White, White, White, White, White>
#define mainBladeStyle InOutHelper<OnSpark<LocalizedClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, clashColors>, RandomFlicker<mainColors,clashColors>>, clashColors, 40>, clashColors, 500>, 300, 800, Black>
#define unstableStyle InOutHelper<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Mix<SwingSpeed<600>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,300>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<0,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<BrownNoiseFlicker<Red,Rgb<25,0,0>,300>,Rgb<128,0,0>,0,8,FireConfig<10,1200,1>,FireConfig<0,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,StyleFire<Red,Rgb<150,150,150>,0,6>,TrInstant,TrSmoothFade<800>,EFFECT_IGNITION>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<OrangeRed,White>>,TrConcat<TrWipeIn<600>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<Orange,White>>,TrWipe<600>>,TrInstant,EFFECT_STAB>,BrownNoiseFlicker<White,Red,400>,TrInstant,TrSmoothFade<200>,EFFECT_LOCKUP_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<200>,EFFECT_DRAG_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<300>,EFFECT_DRAG_END>,Black,TrConcat<TrInstant,HumpFlicker<White,BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,40>,TrColorCycle<600>>,TrInstant,EFFECT_RETRACTION>,Mix<Bump<Int<0>,Int<44000>>,Mix<Bump<Int<32768>,Int<44000>>,TransitionEffect<Red,White,TrInstant,TrFade<300>,EFFECT_LOCKUP_END>,Stripes<1000,-1500,Red,BrownNoiseFlicker<White,Red,300>>>,Stripes<1000,1500,Red,BrownNoiseFlicker<White,Red,300>>>,TrInstant,TrSmoothFade<800>,EFFECT_LOCKUP_END>,Pulsing<Gradient<BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>>,Gradient<BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,BrownNoiseFlicker<Red,Rgb<25,0,0>,400>>,3500>,RandomPerLEDFlicker<BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,White>,Bump<Int<16000>,Int<16000>>,Bump<Int<32768>,Int<10000>>>,White>,White>,150,300,Black>

Preset blade[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_ESB"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(), "Unstable"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Hero_Obi"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_RoTJ"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Scavengers_Destiny"
  }
};

Preset chassis[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    &style_charging,
    StylePtr<mainBladeStyle>(), "Luke_ESB"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    &style_charging,
    StylePtr<unstableStyle>(), "Unstable"
  },
  { "FOSister", "tracks/JFO12.wav",
    &style_charging,
    StylePtr<mainBladeStyle>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    &style_charging,
    StylePtr<mainBladeStyle>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    &style_charging,
    StylePtr<mainBladeStyle>(), "Hero_Obi"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    &style_charging,
    StylePtr<mainBladeStyle>(), "Luke_RoTJ"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    &style_charging,
    StylePtr<mainBladeStyle>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    &style_charging,
    StylePtr<mainBladeStyle>(), "Scavengers_Destiny"
  }
};

BladeConfig blades[] = {
 { 0, WS281XBladePtr<123, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) },
  // { TBD, WS281XBladePtr<21, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
  //   WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  // , CONFIGARRAY(blade) }, //Short Blade
  // { TBD, WS281XBladePtr<5, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
  //   WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  // , CONFIGARRAY(blade) }, //Blade Plug

  //TODO: No Blade settings
  //{ NO_BLADE, WS281XBladePtr<123, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(), 
  //   WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  // , CONFIGARRAY(chassis) }, //Blade Plug
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
Button Aux2Button(BUTTON_AUX2, aux2Pin, "aux2");
#endif
