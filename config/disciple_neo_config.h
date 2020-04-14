#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 1
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 193;
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
#endif

#ifdef CONFIG_PROP
#include "../props/saber_nd_buttons.h"
#endif

#ifdef CONFIG_PRESETS

#define buttonPulse InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>
#define chassisOff Black
#define mainColors ColorChange<TrFade<500>, White, GreenYellow, Chartreuse, Green, SpringGreen, Cyan, DeepSkyBlue, DodgerBlue, Blue, Violet, Indigo, Magenta, HotPink, Red, Orange, Yellow>
#define flickerColors ColorChange<TrFade<500>, Rgb<128, 128, 128>, Rgb<54, 128, 3>, Rgb<28, 128, 0>, Rgb<0, 128, 0>, SpringGreenDark, DeepSkyBlue, DeepSkyBlueDark, DodgerBlueDark, Rgb<0, 0, 128>, VioletDark, IndigoDark, MagentaDark, Pink, Rgb<128, 0, 0>, Rgb<128, 48, 0>, Rgb<128, 128, 0>>
#define clashColors ColorChange<TrFade<500>, Cyan, White, White, White, White, White, White, White, White, White, White, White, White, White, White, White>
#define mainBladeStyle InOutHelper<InOutSparkTip<LocalizedClash<TransitionEffect<TransitionEffect<Lockup<Blast<AudioFlicker<mainColors,flickerColors>, clashColors>, RandomFlicker<mainColors,clashColors>>, RandomFlicker<mainColors,clashColors>, TrFade<50>, TrFade<50>, EFFECT_LOCKUP_BEGIN>, RandomFlicker<mainColors,clashColors>, TrFade<100>, TrFade<100>, EFFECT_LOCKUP_END>, clashColors, 40>, 500, 800>, 500, 800, Black>
#define unstableStyle InOutHelper<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Mix<SwingSpeed<300>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,Mix<SwingSpeed<500>,BrownNoiseFlicker<OrangeRed,Rgb<80,40,40>,300>,StyleFire<BrownNoiseFlicker<OrangeRed,RandomPerLEDFlicker<Rgb<25,5,5>,Rgb<60,20,20>>,200>,Rgb<80,40,40>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>>,StyleFire<White,Red,0,6>,TrInstant,TrSmoothFade<1600>,EFFECT_IGNITION>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<OrangeRed,White>>,TrConcat<TrWipeIn<600>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<Orange,White>>,TrWipe<600>>,TrInstant,EFFECT_STAB>,White,TrInstant,TrSmoothFade<200>,EFFECT_LOCKUP_BEGIN>,StyleFire<Red,White,0,6>,TrInstant,TrSmoothFade<500>,EFFECT_LOCKUP_END>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<200>,EFFECT_DRAG_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<300>,EFFECT_DRAG_END>,Black,TrConcat<TrInstant,HumpFlicker<White,Red,40>,TrColorCycle<600>>,TrInstant,EFFECT_RETRACTION>,Pulsing<Gradient<Red,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>>,Gradient<BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,Red>,3500>,RandomPerLEDFlicker<Red,White>,Bump<Int<16000>,Int<20000>>,Bump<Int<32768>,Int<10000>>>,White>,White>,300,500,Black>
#define fettAudioFlicker InOutHelper<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Mix<SwingSpeed<400>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<Blue,Rgb<0,128,0>>>,StyleFire<White,DeepSkyBlue,0,6>,TrInstant,TrSmoothFade<1600>,EFFECT_IGNITION>,Mix<Bump<Int<32768>,Int<16000>>,AudioFlicker<DeepSkyBlue,SteelBlue>,RandomPerLEDFlicker<OrangeRed,White>>,TrConcat<TrWipeIn<600>,Mix<Bump<Int<32768>,Int<16000>>,AudioFlicker<DeepSkyBlue,SteelBlue>,RandomPerLEDFlicker<Orange,White>>,TrWipe<600>>,TrInstant,EFFECT_STAB>,White,TrInstant,TrSmoothFade<200>,EFFECT_LOCKUP_BEGIN>,StyleFire<DeepSkyBlue,White,0,6>,TrInstant,TrSmoothFade<500>,EFFECT_LOCKUP_END>,Mix<Bump<Int<32768>,Int<10000>>,AudioFlicker<DeepSkyBlue,SteelBlue>,White>,TrInstant,TrFade<200>,EFFECT_DRAG_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,AudioFlicker<DeepSkyBlue,SteelBlue>,White>,TrInstant,TrFade<300>,EFFECT_DRAG_END>,Black,TrConcat<TrInstant,HumpFlicker<White,DeepSkyBlue,40>,TrColorCycle<600>>,TrInstant,EFFECT_RETRACTION>,Pulsing<Gradient<DeepSkyBlue,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>>,Gradient<BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,DeepSkyBlue>,3500>,RandomPerLEDFlicker<DeepSkyBlue,White>,Bump<Int<16000>,Int<20000>>,Bump<Int<32768>,Int<10000>>>,White>,White>,300,500,Black>
#define senateMajority InOutTr<Blast<BlastFadeout<LocalizedClash<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Lockup<Mix<SwingSpeed<500>,AudioFlicker<Gradient<Gradient<BrownNoiseFlicker<Black,Orange,400>,Red>,Red,Red,Red,Red,Red,Red,Red>,Rgb<120,0,0>>,Gradient<BrownNoiseFlicker<Black,DarkOrange,400>,BrownNoiseFlicker<Black,Rgb<128,0,0>,400>,BrownNoiseFlicker<Black,Rgb<128,0,0>,400>,BrownNoiseFlicker<Black,Rgb<128,0,0>,400>>>,Pulsing<Gradient<Strobe<Black,BrownNoiseFlicker<SteelBlue,LightPink,400>,40,90>,RandomFlicker<Red,Rgb<150,20,40>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Red,Red>,Gradient<Strobe<Black,BrownNoiseFlicker<SteelBlue,LightPink,400>,40,90>,RandomFlicker<Red,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Magenta,Red>,RandomFlicker<Red,Black>,RandomFlicker<Red,DarkOrange>>,3500>,RandomPerLEDFlicker<Red,White>>,White,TrWipeIn<50>,TrSmoothFade<50>,EFFECT_DRAG_END>,Gradient<Orange,Orange,White>,TrSmoothFade<50>,TrWipeIn<50>,EFFECT_DRAG_BEGIN>,Gradient<White,DeepSkyBlue,LightPink,DeepSkyBlue,White>,TrJoinR<TrWipe<200>,TrWipeIn<200>>,TrSmoothFade<300>,EFFECT_LOCKUP_END>,White,TrBoing<300,2>,TrFade<100>,EFFECT_LOCKUP_BEGIN>,BrownNoiseFlicker<White,DarkOrange,400>,100,75>,Rgb<120,0,0>>,White,200,200>,TrConcat<TrColorCycle<80,-400,-1000>,White,TrWipeIn<50>,Black,TrDelay<450>,Strobe<Black,White,45,60>,TrJoinR<TrSmoothFade<190>,TrWipe<200>>>,TrConcat<TrInstant,White,TrJoin<TrJoin<TrJoin<TrColorCycle<2050,-1500,-1>,TrBoing<2050,15>>,TrBoing<2050,18>>,TrSmoothFade<2050>>>>

Preset blade[] = {
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Unstable"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Hero_Obi"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Luke_RoTJ"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Scavengers_Destiny"
  },
  { "Senate Majority", "Senate Majority/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<chassisOff>(),
    StylePtr<buttonPulse>(), "Senate Majority"
  }
};

Preset chassis[] = {
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(),
    StylePtr<buttonPulse>(), "Unstable"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<fettAudioFlicker>(),
    StylePtr<buttonPulse>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<fettAudioFlicker>(),
    StylePtr<buttonPulse>(), "Hero_Obi"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<fettAudioFlicker>(),
    StylePtr<buttonPulse>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<fettAudioFlicker>(),
    StylePtr<buttonPulse>(), "Luke_RoTJ"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<fettAudioFlicker>(),
    StylePtr<buttonPulse>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<fettAudioFlicker>(),
    StylePtr<fettAudioFlicker>(),
    StylePtr<buttonPulse>(), "Scavengers_Destiny"
  },
  { "Senate Majority", "Senate Majority/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(),
    StylePtr<buttonPulse>(), "Senate Majority"
  }
};

BladeConfig blades[] = {
  { 28.0, WS281XBladePtr<123, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(blade) },
  { 37.0, WS281XBladePtr<21, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(blade) }, //Short Blade
  { 100.0, WS281XBladePtr<5, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(blade) }, //Blade Plug
  { NO_BLADE, WS281XBladePtr<123, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(), 
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(chassis) } //Chassis
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
