#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 1
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_shtok_buttonsG.h"
#endif

#ifdef CONFIG_PRESETS

#define mainColors ColorChange<TrFade<500>, Rgb<200, 200, 200>, Green, SpringGreen, Cyan, DeepSkyBlue, DodgerBlue, Blue, Violet, Indigo, Magenta, Red, Orange, Yellow>
#define flickerColors ColorChange<TrFade<500>, Rgb<128, 128, 128>, Rgb<0, 128, 0>, SpringGreenDark, DeepSkyBlue, DeepSkyBlueDark, DodgerBlueDark, Rgb<0, 0, 128>, VioletDark, IndigoDark, MagentaDark, Rgb<128, 0, 0>, Tomato, Rgb<128, 128, 0>>

Preset presets[] = {
   { "TeensySF", "tracks/venus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, White>, RandomFlicker<mainColors,White>>, White, 40>, 300, 800, Black>>(),
    StylePtr<InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>>(), "teensy"},
   { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, White>, RandomFlicker<mainColors,White>>, White, 40>, 300, 800, Black>>(),
    StylePtr<InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>>(), "jedi"},
   { "SmthGrey", "tracks/mercury.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, White>, RandomFlicker<mainColors,White>>, White, 40>, 300, 800, Black>>(),
    StylePtr<InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>>(), "grey"},
   { "TthCrstl", "tracks/venus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, White>, RandomFlicker<mainColors,White>>, White, 40>, 300, 800, Black>>(),
    StylePtr<InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>>(), "luke"},
   { "SmthFuzz", "tracks/uranus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, White>, RandomFlicker<mainColors,White>>, White, 40>, 300, 800, Black>>(),
    StylePtr<InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>>(), "sith1"},
   { "RgueCmdr", "tracks/venus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, White>, RandomFlicker<mainColors,White>>, White, 40>, 300, 800, Black>>(),
    StylePtr<InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>>(), "sith2"}
};

struct MyCreeXPE2Blue {
  static constexpr float MaxAmps = 1.0;
  static constexpr float MaxVolts = 3.5;
  static constexpr float P2Amps = 0.35;
  static constexpr float P2Volts = 3.2;
  static constexpr float R = 0.2;
  static const int Red = 0;
  static const int Green = 0;
  static const int Blue = 255;
};

struct MyCreeXPE2Green {
  static constexpr float MaxAmps = 1.0;
  static constexpr float MaxVolts = 3.8;
  static constexpr float P2Amps = 0.35;
  static constexpr float P2Volts = 3.4;
  static constexpr float R = 0.1;
  static const int Red = 0;
  static const int Green = 255;
  static const int Blue = 0;
};

struct MyCreeXPE2Red {
  static constexpr float MaxAmps = 0.7;
  static constexpr float MaxVolts = 2.3;
  static constexpr float P2Amps = 0.35;
  static constexpr float P2Volts = 2.5;
  static constexpr float R = 2.0;
  static const int Red = 255;
  static const int Green = 0;
  static const int Blue = 0;
};

BladeConfig blades[] = {
 { 0, SimpleBladePtr<MyCreeXPE2Red, MyCreeXPE2Green, MyCreeXPE2Blue, NoLED, bladePowerPin1, bladePowerPin2, bladePowerPin3, -1>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
