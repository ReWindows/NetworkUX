#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 3 member(s).
namespace Windows::UI::Xaml::Media {
class VisualTreeHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@VisualTreeHelper@Media@Xaml@UI@Windows@@SAHPE$AAVDependencyObject@345@@Z
    static int GetChildrenCount(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPopups@VisualTreeHelper@Media@Xaml@UI@Windows@@SAPE$AAU?$IVectorView@PE$AAVPopup@Primitives@Controls@Xaml@UI@Windows@@@Collections@Foundation@5@PE$AAVWindow@345@@Z
    static WindissectOpaque & * GetOpenPopups(::Windows::UI::Xaml::Window & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@VisualTreeHelper@Media@Xaml@UI@Windows@@SAPE$AAVDependencyObject@345@PE$AAV6345@@Z
    static ::Windows::UI::Xaml::DependencyObject & * GetParent(::Windows::UI::Xaml::DependencyObject & *);
};
} // namespace Windows::UI::Xaml::Media
