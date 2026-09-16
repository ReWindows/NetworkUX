#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 1 member(s).
namespace ApplicationTheme {
class AppThemeAPI {
public:
    class ThemeColorsChanged;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeColor@AppThemeAPI@ApplicationTheme@@SA?AVColor@UI@Windows@@W4ThemeAccentColorVariant@2@@Z
    static ::Windows::UI::Color GetThemeColor(int);
};
} // namespace ApplicationTheme
