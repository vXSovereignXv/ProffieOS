#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
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
#include "../props/saber_nd_buttons.h"
#endif

#ifdef CONFIG_PRESETS

#define chassisOff Black
#define unstableStyle Layers<StyleFire<BrownNoiseFlicker<RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<25,0,0>>,RotateColorsX<Variation,Rgb<60,0,0>>>,300>,RotateColorsX<Variation,Rgb<80,7,0>>,0,6,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrDelay<30000>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<Orange,Bump<Int<0>,Scale<TwistAngle<>,Int<2000>,Int<10000>>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>
#define unstableStyleKr Layers<StyleFire<BrownNoiseFlicker<RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<25,0,0>>,RotateColorsX<Variation,Rgb<60,0,0>>>,300>,RotateColorsX<Variation,Rgb<80,7,0>>,0,12,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrDelay<30000>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<Orange,Bump<Int<0>,Scale<TwistAngle<>,Int<2000>,Int<10000>>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>
#define senateMajority Layers<Mix<SwingSpeed<100>,AudioFlicker<Gradient<Gradient<BrownNoiseFlicker<Black,Orange,400>,Red>,Red,Red,Red,Red,Red,Red,Red>,Rgb<120,0,0>>,Gradient<BrownNoiseFlicker<Black,DarkOrange,400>,BrownNoiseFlicker<Black,Rgb<128,0,0>,400>,BrownNoiseFlicker<Black,Rgb<128,0,0>,400>,BrownNoiseFlicker<Black,Rgb<128,0,0>,400>>>,TransitionEffectL<TrConcat<TrJoinR<TrWipe<200>,TrWipeIn<200>>,Gradient<White,DeepSkyBlue,LightPink,DeepSkyBlue,White>,TrSmoothFade<300>>,EFFECT_LOCKUP_END>,TransitionEffectL<TrConcat<TrBoing<300,2>,White,TrFade<100>>,EFFECT_LOCKUP_BEGIN>,LockupL<Pulsing<Gradient<Strobe<Black,BrownNoiseFlicker<SteelBlue,LightPink,400>,40,90>,RandomFlicker<Red,Rgb<150,20,40>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Red,Red>,Gradient<Strobe<Black,BrownNoiseFlicker<SteelBlue,LightPink,400>,40,90>,RandomFlicker<Red,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Magenta,Red>,RandomFlicker<Red,Black>,RandomFlicker<Red,DarkOrange>>,3500>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<BrownNoiseFlicker<White,DarkOrange,400>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<BrownNoiseFlicker<White,DarkOrange,400>,TrInstant,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,Int<20000>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,TransitionEffectL<TrConcat<TrSmoothFade<50>,Gradient<Orange,Orange,White>,TrWipeIn<50>>,EFFECT_DRAG_BEGIN>,TransitionEffectL<TrConcat<TrWipeIn<50>,White,TrSmoothFade<50>>,EFFECT_DRAG_END>,ResponsiveDragL<RandomPerLEDFlicker<Red,White>,TrWipeIn<50>,TrSmoothFade<50>>,ResponsiveMeltL<Mix<TwistAngle<>,RandomPerLEDFlicker<OrangeRed,DarkOrange>,RandomPerLEDFlicker<Orange,Rgb<255,160,0>>>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrConcat<TrColorCycle<80,-400,-1000>,White,TrWipeIn<50>,Black,TrDelay<450>,Strobe<Black,White,45,60>,TrJoinR<TrSmoothFade<190>,TrWipe<200>>>,TrConcat<TrInstant,White,TrJoin<TrJoin<TrJoin<TrColorCycle<2050,-1500,-1>,TrBoing<2050,15>>,TrBoing<2050,18>>,TrSmoothFade<2050>>>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>
#define sithDefault Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrDelay<30000>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<Orange,Bump<Int<0>,Scale<BladeAngle<>,Int<2000>,Int<10000>>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Rgb<255,160,0>>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>
#define reyDefault Layers<Mix<SwingSpeed<400>,AudioFlicker<RotateColorsX<Variation,Rgb<255,160,0>>,RotateColorsX<Variation,Rgb<84,60,0>>>,Mix<SwingSpeed<600>,RotateColorsX<Variation,Rgb<255,160,0>>,RotateColorsX<Variation,BlanchedAlmond>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<AudioFlicker<Blue,SteelBlue>,Bump<Int<0>,Int<15000>>>,TrFade<600>>,EFFECT_IGNITION>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Blinking<Green,Blue,80,500>,Bump<Int<0>,Int<8000>>>,TrDelay<500>>,EFFECT_PREON>>
#define fulcrumDefault Layers<ColorChange<TrFade<1000>,AudioFlicker<Red,Rgb<128,0,0>>,AudioFlicker<Rgb<100,100,150>,Rgb<50,50,75>>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<White,SwingSpeed<600>>,TrDelay<30000>,AlphaL<White,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<White,Bump<Int<0>,Scale<TwistAngle<>,Int<2000>,Int<10000>>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>
#define colorRun Layers<Stripes<5000,-1500,Mix<BladeAngle<>,RotateColorsX<Variation,Rgb<125,0,130>>,RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<125,130,0>>,RotateColorsX<Variation,Red>>,Mix<BladeAngle<>,RotateColorsX<Variation,Rgb<31,0,32>>,RotateColorsX<Variation,Rgb<0,0,60>>,RotateColorsX<Variation,Rgb<0,60,0>>,RotateColorsX<Variation,Rgb<31,32,0>>,RotateColorsX<Variation,Rgb<60,0,0>>>,Mix<BladeAngle<>,RotateColorsX<Variation,Rgb<250,50,255>>,RotateColorsX<Variation,Rgb<50,50,255>>,RotateColorsX<Variation,Rgb<50,255,50>>,RotateColorsX<Variation,Rgb<250,255,50>>,RotateColorsX<Variation,Rgb<255,50,50>>>,Mix<BladeAngle<>,RotateColorsX<Variation,Rgb<62,0,65>>,RotateColorsX<Variation,Rgb<0,0,128>>,RotateColorsX<Variation,Rgb<0,128,0>>,RotateColorsX<Variation,Rgb<62,65,0>>,RotateColorsX<Variation,Rgb<128,0,0>>>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<RotateColorsX<Variation,White>,SwingSpeed<500>>,TrDelay<30000>,AlphaL<RotateColorsX<Variation,White>,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<AudioFlicker<Blue,SteelBlue>,Bump<Int<0>,Int<8000>>>,TrFade<600>>,EFFECT_IGNITION>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Green,Bump<Int<0>,Int<4000>>>,TrFade<300>,AlphaL<DodgerBlue,Bump<Int<0>,Int<4000>>>,TrFade<300>,AlphaL<DeepSkyBlue,Bump<Int<0>,Int<4000>>>,TrDelay<7350>>,EFFECT_PREON>>
#define sithUnstableSwing Layers<Mix<SwingSpeed<100>,AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,StyleFire<BrownNoiseFlicker<RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<25,0,0>>,RotateColorsX<Variation,Rgb<60,0,0>>>,300>,RotateColorsX<Variation,Rgb<80,0,0>>,0,6,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrDelay<30000>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<Orange,Bump<Int<0>,Scale<TwistAngle<>,Int<2000>,Int<10000>>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>
#define sithUnstableSwingKr Layers<Mix<SwingSpeed<100>,AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,StyleFire<BrownNoiseFlicker<RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<25,0,0>>,RotateColorsX<Variation,Rgb<60,0,0>>>,300>,RotateColorsX<Variation,Rgb<80,0,0>>,0,12,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrDelay<30000>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<Orange,Bump<Int<0>,Scale<TwistAngle<>,Int<2000>,Int<10000>>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>

#define mainColors ColorChange<TrWipe<500>,Rgb<100,100,150>,GreenYellow,Chartreuse,Green,SpringGreen,Cyan,DeepSkyBlue,DodgerBlue,Blue,Rgb<138,20,226>,Rgb<120,20,235>,Magenta,HotPink,Red,OrangeRed,DarkOrange,Orange,Rgb<255,160,0>,Yellow>
#define flickerColors ColorChange<TrWipe<500>,Rgb<50,50,75>,Rgb<54,128,3>,Rgb<28,128,0>,Rgb<0,128,0>,Rgb<0,128,28>,DeepSkyBlue,Rgb<0,68,128>,Rgb<0,36,128>,Rgb<0,0,128>,Rgb<68,10,113>,Rgb<60,10,170>,Rgb<139,0,139>,Rgb<128,18,59>,Rgb<128,0,0>,Rgb<128,14,0>,Rgb<128,34,0>,Rgb<128,48,0>,Rgb<84,60,0>,Rgb<128,128,0>>
#define clashAccent ColorChange<TrWipe<500>,Red,Red,Red,Red,Red,Red,Red,Red,Red,Red,Red,Red,Red,Orange,Orange,Red,Red,Red,Red>
#define meltAccent ColorChange<TrWipe<500>,Orange,Orange,Orange,Orange,Orange,Orange,Orange,Orange,Orange,Orange,Orange,Orange,Orange,Rgb<84,60,0>,Rgb<84,60,0>,Rgb<84,60,0>,Orange,Orange,Orange>
#define colorsBright ColorChange<TrWipe<500>,Rgb<170,170,220>,Rgb<200,255,150>,Rgb<155,255,100>,Rgb<150,255,150>,Rgb<100,255,155>,LightCyan,Rgb<100,235,255>,Rgb<102,200,255>,Rgb<100,100,255>,Rgb<203,90,255>,Rgb<200,100,255>,Rgb<255,100,255>,LightPink,Rgb<255,150,150>,Rgb<255,168,100>,Rgb<255,114,50>,Rgb<255,197,100>,Rgb<255,255,150>,Rgb<255,255,150>>
#define flareColors ColorChange<TrWipe<500>,White,Yellow,Yellow,Yellow,Chartreuse,LightCyan,LightCyan,Cyan,Cyan,Magenta,Magenta,Rgb<120,20,235>,Magenta,Orange,Orange,Rgb<255,160,0>,Yellow,GreenYellow,GreenYellow>
#define mainBladeStyle Layers<AudioFlicker<mainColors,flickerColors>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<colorsBright,SwingSpeed<500>>,TrDelay<30000>,AlphaL<colorsBright,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<50000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<flareColors,Bump<Int<0>,Scale<TwistAngle<>,Int<2000>,Int<10000>>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<20000>>,ResponsiveStabL<clashAccent,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,clashAccent,meltAccent>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<OrangeRed,Bump<Int<0>,Int<6000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<4000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>

Preset blade[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_RoTJ"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<chassisOff>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<chassisOff>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<chassisOff>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(), "EtaanCrystal"
  }
};

Preset krBlade[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Luke_RoTJ"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyleKr>(),
    StylePtr<chassisOff>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyleKr>(),
    StylePtr<chassisOff>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwingKr>(),
    StylePtr<chassisOff>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<chassisOff>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<chassisOff>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<chassisOff>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<chassisOff>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<chassisOff>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<chassisOff>(), "EtaanCrystal"
  }
};

Preset chassis[] = {
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "Luke_RoTJ"
  },
  { "ReFLEX_BEN", "ReFLEX_BEN/tracks/Ben_vs_Knights.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "ReFLEX_BEN"
  },
  { "ReFLEX_REY", "ReFLEX_REY/tracks/Training_Course_Music.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "ReFLEX_REY"
  },
  { "Unstable", "tracks/KyloTheme.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(), "Unstable"
  },
  { "Unstable_v2", "Unstable_v2/tracks/track3.wav",
    StylePtr<unstableStyle>(),
    StylePtr<unstableStyle>(), "Unstable_v2"
  },
  { "FOSister", "tracks/JFO12.wav",
    StylePtr<sithUnstableSwing>(),
    StylePtr<sithUnstableSwing>(), "FOSister"
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<fulcrumDefault>(),
    StylePtr<fulcrumDefault>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "Hero_Obi"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<reyDefault>(),
    StylePtr<reyDefault>(), "Scavengers_Destiny"
  },
  { "Senate Majority V2", "Senate Majority V2/tracks/Palpatheme.wav",
    StylePtr<senateMajority>(),
    StylePtr<senateMajority>(), "Senate Majority V2"
  },
  { "FOBlue", "tracks/JFO1.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOBlue"
  },
  { "FOCyan", "tracks/JFO2.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOCyan"
  },
  { "FOGreen", "tracks/JFO6.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOGreen"
  },
  { "FOIndigo", "tracks/JFO8.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOIndigo"
  },
  { "FOMagenta", "tracks/JFO4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOMagenta"
  },
  { "FOOrange", "tracks/JFO3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOOrange"
  },
  { "FOPurple", "tracks/JFO14.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOPurple"
  },
  { "FORed", "tracks/JFO19.wav",
    StylePtr<sithDefault>(),
    StylePtr<sithDefault>(), "FORed"
  },
  { "FOYellow", "tracks/JFO7.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<mainBladeStyle>(), "FOYellow"
  },
  { "EtaanCrystal", "tracks/JF011.wav",
    StylePtr<colorRun>(),
    StylePtr<colorRun>(), "EtaanCrystal"
  }
};

BladeConfig blades[] = {
  { 28.0, WS281XBladePtr<123, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) },
  { 37.0, WS281XBladePtr<21, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) }, //Short Blade
  { 47.0, WS281XBladePtr<5, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) }, //Blade Plug
  { 85.0, WS281XBladePtr<131, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(blade) }, //36" 
  { 115.0, WS281XBladePtr<264, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(krBlade) }, //34.5" KR Blade
  { NO_BLADE, WS281XBladePtr<123, bladePin, Color8::GRBw, PowerPINS<bladePowerPin2, bladePowerPin3>>(), 
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()
  , CONFIGARRAY(chassis) }, //Chassis
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
