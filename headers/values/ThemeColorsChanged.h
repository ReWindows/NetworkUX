#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace ApplicationTheme::AppThemeAPI {
class ThemeColorsChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add@ThemeColorsChanged@AppThemeAPI@ApplicationTheme@@SA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$EventHandler@PE$AAVObject@Platform@@@56@@Z
    static WindissectOpaque add(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@ThemeColorsChanged@AppThemeAPI@ApplicationTheme@@SAXVEventRegistrationToken@Foundation@Windows@@@Z
    static void remove(WindissectOpaque);
};
} // namespace ApplicationTheme::AppThemeAPI
