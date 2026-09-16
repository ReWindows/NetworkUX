#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 3 member(s).
namespace NetworkUX::View {
class EntityListItemControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@EntityListItemControl@View@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDependencyProperties@EntityListItemControl@View@NetworkUX@@SAXXZ
    static void UnregisterDependencyProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnPropertyChanged@EntityListItemControl@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void s_OnPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
};
} // namespace NetworkUX::View
