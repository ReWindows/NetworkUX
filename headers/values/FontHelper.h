#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 4 member(s).
namespace NetworkUX::View {
class FontHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeInPts@FontHelper@View@NetworkUX@@SANPE$AAVUIElement@Xaml@UI@Windows@@@Z
    static double GetSizeInPts(::Windows::UI::Xaml::UIElement & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@FontHelper@View@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeInPts@FontHelper@View@NetworkUX@@SAXPE$AAVUIElement@Xaml@UI@Windows@@N@Z
    static void SetSizeInPts(::Windows::UI::Xaml::UIElement & *, double);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeInPtsChanged@FontHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnSizeInPtsChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
};
} // namespace NetworkUX::View
