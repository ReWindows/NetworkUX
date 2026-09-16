#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 3 member(s).
namespace SharedUtilities {
class ThemeManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcrylicBrush@ThemeManager@SharedUtilities@@SAPE$AAVAcrylicBrush@Media@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static ::Windows::UI::Xaml::Media::AcrylicBrush & * GetAcrylicBrush(::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@ThemeManager@SharedUtilities@@SAPE$AAVSolidColorBrush@Media@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static ::Windows::UI::Xaml::Media::SolidColorBrush & * GetBrush(::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@ThemeManager@SharedUtilities@@SAPE$AAVSolidColorBrush@Media@Xaml@UI@Windows@@W4FlyoutBrush@2@@Z
    static ::Windows::UI::Xaml::Media::SolidColorBrush & * GetBrush(int);
};
} // namespace SharedUtilities
