#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 5 member(s).
namespace Windows::UI::Xaml::Input {
class FocusManager {
public:
    class GotFocus;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstFocusableElement@FocusManager@Input@Xaml@UI@Windows@@SAPE$AAVDependencyObject@345@PE$AAV6345@@Z
    static ::Windows::UI::Xaml::DependencyObject & * FindFirstFocusableElement(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@FocusManager@Input@Xaml@UI@Windows@@SAPE$AAVObject@Platform@@XZ
    static ::Platform::Object & * GetFocusedElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@FocusManager@Input@Xaml@UI@Windows@@SAPE$AAVObject@Platform@@PE$AAVXamlRoot@345@@Z
    static ::Platform::Object & * GetFocusedElement(::Windows::UI::Xaml::XamlRoot & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocus@FocusManager@Input@Xaml@UI@Windows@@SA_NW4FocusNavigationDirection@2345@@Z
    static bool TryMoveFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocus@FocusManager@Input@Xaml@UI@Windows@@SA_NW4FocusNavigationDirection@2345@PE$AAVFindNextElementOptions@2345@@Z
    static bool TryMoveFocus(int, ::Windows::UI::Xaml::Input::FindNextElementOptions & *);
};
} // namespace Windows::UI::Xaml::Input
