#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 1
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_STATE
#define IDLE_OFF_TIME 60 * 5 * 1000 //5 minutes
#endif

#ifdef CONFIG_PROP
#include "../props/saber_shtok_buttonsGV.h"
#endif

#ifdef CONFIG_PRESETS

#define buttonPulse InOutHelper<Blue, 300, 300, Pulsing<Blue, Black, 3000>>
#define mainColors ColorChange<TrFade<500>, White, GreenYellow, Chartreuse, Green, SpringGreen, Cyan, DeepSkyBlue, DodgerBlue, Blue, Violet, Indigo, Magenta, HotPink, Red, Orange, Yellow>
#define flickerColors ColorChange<TrFade<500>, Rgb<128, 128, 128>, Rgb<54, 128, 3>, Rgb<28, 128, 0>, Rgb<0, 128, 0>, SpringGreenDark, DeepSkyBlue, DeepSkyBlueDark, DodgerBlueDark, Rgb<0, 0, 128>, VioletDark, IndigoDark, MagentaDark, Pink, Rgb<128, 0, 0>, Rgb<128, 48, 0>, Rgb<128, 128, 0>>
#define clashColors ColorChange<TrFade<500>, Cyan, White, White, White, White, White, White, White, White, White, White, White, White, White, White, White>
#define unstableFlickerColors ColorChange<TrFade<500>, Rgb<50, 50, 50>, Rgb<27, 64, 0>, Rgb<14, 64, 0>, Rgb<0, 50, 0>, Rgb<0, 64, 14>, Rgb<0, 64, 14>, Rgb<0, 34, 64>, Rgb<0, 18, 64>, Rgb<0, 0, 128>, Rgb<34, 5, 56>, Rgb<30,5,85>, Rgb<50, 0, 50>, Rgb<64, 9, 29>, Rgb<50, 0, 0>, Rgb<50, 19, 0>, Rgb<50, 50, 0>>
#define mainBladeStyle InOutHelper<OnSpark<SimpleClash<Lockup<BlastFadeout<AudioFlicker<mainColors,flickerColors>, clashColors>, RandomFlicker<mainColors,clashColors>>, clashColors, 40>, clashColors, 500>, 300, 800, Black>
#define unstableStyle InOutHelper<OnSpark<SimpleClash<Lockup<BlastFadeout<BrownNoiseFlicker<mainColors, unstableFlickerColors, 50>, clashColors>, RandomFlicker<mainColors, clashColors>>, clashColors>, clashColors, 300>, 300, 800, Black>

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
  },
  { "Fulcrum", "fulcrum/tracks/track3.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Fulcrum"
  },
  { "Hero_Obi", "Hero_Obi/tracks/BattleOfHeros.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Hero_Obi"
  },
  { "Luke_ESB", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Luke_ESB"
  },
  { "Luke_RoTJ", "Luke_RoTJ/tracks/Final_Duel.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Luke_RoTJ"
  },
  { "ClassicVillian", "Luke_ESB/tracks/LvsV.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "ClassicVillian"
  },
  { "Scavengers_Destiny", "Scavengers_Destiny/tracks/track4.wav",
    StylePtr<mainBladeStyle>(),
    StylePtr<buttonPulse>(), "Scavengers_Destiny"
  }
};

BladeConfig blades[] = {
 { 0, SimpleBladePtr<CreeXPE2RedTemplate<1200>, CreeXPE2GreenTemplate<100>, CreeXPE2BlueTemplate<200>, NoLED, bladePowerPin1, bladePowerPin2, bladePowerPin3, -1>(),
    SimpleBladePtr<CreeXPE2BlueTemplate<18000>, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
