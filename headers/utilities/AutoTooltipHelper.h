#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 4 member(s).
namespace NetworkUX::View {
class AutoTooltipHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoTooltip@AutoTooltipHelper@View@NetworkUX@@SA_NPE$AAVTextBlock@Controls@Xaml@UI@Windows@@@Z
    static bool GetAutoTooltip(::Windows::UI::Xaml::Controls::TextBlock & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@AutoTooltipHelper@View@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoTooltip@AutoTooltipHelper@View@NetworkUX@@SAXPE$AAVTextBlock@Controls@Xaml@UI@Windows@@_N@Z
    static void SetAutoTooltip(::Windows::UI::Xaml::Controls::TextBlock & *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoTooltipPropertyChanged@AutoTooltipHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnAutoTooltipPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
};
} // namespace NetworkUX::View
