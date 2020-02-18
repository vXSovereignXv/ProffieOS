#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 1
#define VOLUME 1500
const unsigned int maxLedsPerStrip = 193;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_shtok_buttonsGV.h"
#endif

#ifdef CONFIG_PRESETS

#define buttonPulse InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>
#define mainColors ColorChange<TrFade<500>, Green, SpringGreen, Cyan, DeepSkyBlue, DodgerBlue, Blue, Violet, Indigo, Magenta, Red, Orange, Yellow, Rgb<200, 200, 200>>
#define flickerColors ColorChange<TrFade<500>, Rgb<0, 128, 0>, SpringGreenDark, DeepSkyBlue, DeepSkyBlueDark, DodgerBlueDark, Rgb<0, 0, 128>, VioletDark, IndigoDark, MagentaDark, Rgb<128, 0, 0>, Tomato, Rgb<128, 128, 0>, Rgb<128, 128, 128>>
#define unstableFlickerColors ColorChange<TrFade<500>, Rgb<0, 50, 0>, Rgb<0, 64, 14>, Rgb<0, 64, 14>, Rgb<0, 34, 64>, Rgb<0, 18, 64>, Rgb<0, 0, 128>, Rgb<34, 5, 56>, Rgb<30,5,85>, Rgb<50, 0, 50>, Rgb<50, 0, 0>, Rgb<50, 19, 0>, Rgb<50, 50, 0>, Rgb<50, 50, 50>>
#define mainBladeStyle InOutHelper<OnSpark<LocalizedClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, White>, RandomFlicker<mainColors,White>>, White, 40>, White, 500>, 300, 800, Black>
#define unstableStyle InOutHelper<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Mix<SwingSpeed<600>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,300>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<0,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<BrownNoiseFlicker<Red,Rgb<25,0,0>,300>,Rgb<128,0,0>,0,8,FireConfig<10,1200,1>,FireConfig<0,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,StyleFire<Red,Rgb<150,150,150>,0,6>,TrInstant,TrSmoothFade<800>,EFFECT_IGNITION>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<OrangeRed,White>>,TrConcat<TrWipeIn<600>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<Orange,White>>,TrWipe<600>>,TrInstant,EFFECT_STAB>,BrownNoiseFlicker<White,Red,400>,TrInstant,TrSmoothFade<200>,EFFECT_LOCKUP_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<200>,EFFECT_DRAG_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<300>,EFFECT_DRAG_END>,Black,TrConcat<TrInstant,HumpFlicker<White,BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,40>,TrColorCycle<600>>,TrInstant,EFFECT_RETRACTION>,Mix<Bump<Int<0>,Int<44000>>,Mix<Bump<Int<32768>,Int<44000>>,TransitionEffect<Red,White,TrInstant,TrFade<300>,EFFECT_LOCKUP_END>,Stripes<1000,-1500,Red,BrownNoiseFlicker<White,Red,300>>>,Stripes<1000,1500,Red,BrownNoiseFlicker<White,Red,300>>>,TrInstant,TrSmoothFade<800>,EFFECT_LOCKUP_END>,Pulsing<Gradient<BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>>,Gradient<BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,BrownNoiseFlicker<Red,Rgb<25,0,0>,400>>,3500>,RandomPerLEDFlicker<BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,White>,Bump<Int<16000>,Int<16000>>,Bump<Int<32768>,Int<10000>>>,White>,White>,150,300,Black>

Preset presets[] = {
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOYellow"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "FOSister"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<buttonPulse>(), "Unstable"
  }
};

BladeConfig blades[] = {
 { 0, WS281XBladePtr<144, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
