#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 1
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "TeensySF", "tracks/venus.wav",
    StyleNormalPtr<AudioFlicker<CYAN, DeepSkyBlue>, WHITE, 300, 800>(),
    StyleNormalPtr<BLUE, BLUE, 300, 800>(), "cyan"},
   { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(),
    StyleNormalPtr<BLUE, BLUE, 300, 800>(), "blue"},
   { "SmthGrey", "tracks/mercury.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(),
    StyleNormalPtr<BLUE, BLUE, 300, 800>(), "red"},
   { "SmthFuzz", "tracks/uranus.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(),
    StyleNormalPtr<WHITE, WHITE, 300, 800>(), "green"},
   { "RgueCmdr", "tracks/venus.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(),
    StyleNormalPtr<BLUE, BLUE, 300, 800>(), "white"},
   { "TthCrstl", "tracks/mars.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(),
    StyleNormalPtr<BLUE, BLUE, 300, 800>(), "yellow"},
   { "TeensySF", "tracks/mercury.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(),
    StyleNormalPtr<BLUE, BLUE, 300, 800>(), "magenta"},
   { "SmthJedi", "tracks/uranus.wav",
    StyleStrobePtr<WHITE, Rainbow, 15, 300, 800>(),
    StyleNormalPtr<BLUE, BLUE, 300, 800>(), "strobe"}
};
BladeConfig blades[] = {
 { 0, SimpleBladePtr<CreeXPE2RedTemplate<2000>, CreeXPE2GreenTemplate<0>, CreeXPE2BlueTemplate<200>, NoLED, bladePowerPin1, bladePowerPin2, bladePowerPin3, -1>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<82000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
