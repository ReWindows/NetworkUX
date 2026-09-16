#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 4 member(s).
namespace NetworkUX::View {
class DefaultButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonName@DefaultButton@View@NetworkUX@@SAPE$AAVString@Platform@@PE$AAVUIElement@Xaml@UI@Windows@@@Z
    static ::Platform::String & * GetButtonName(::Windows::UI::Xaml::UIElement & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@DefaultButton@View@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonName@DefaultButton@View@NetworkUX@@SAXPE$AAVUIElement@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void SetButtonName(::Windows::UI::Xaml::UIElement & *, ::Platform::String & *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonNameChanged@DefaultButton@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnButtonNameChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
};
} // namespace NetworkUX::View
