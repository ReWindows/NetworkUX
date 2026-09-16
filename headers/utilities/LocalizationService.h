#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 5 member(s).
namespace SharedUtilities {
class LocalizationService {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontSize@LocalizationService@SharedUtilities@@SANPE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static double GetFontSize(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontType@LocalizationService@SharedUtilities@@SA?AW4LanguageFontType@2@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static int GetFontType(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@LocalizationService@SharedUtilities@@SAPE$AAV12@XZ
    static WindissectOpaque & * GetInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontSize@LocalizationService@SharedUtilities@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@N@Z
    static void SetFontSize(::Windows::UI::Xaml::DependencyObject & *, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontType@LocalizationService@SharedUtilities@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@W4LanguageFontType@2@@Z
    static void SetFontType(::Windows::UI::Xaml::DependencyObject & *, int);
};
} // namespace SharedUtilities
