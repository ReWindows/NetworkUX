#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 8 member(s).
namespace NetworkUX::View {
class ListViewHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsSelectionShared@ListViewHelper@View@NetworkUX@@SA_NPE$AAVUIElement@Xaml@UI@Windows@@@Z
    static bool GetIsSelectionShared(::Windows::UI::Xaml::UIElement & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItemTemplate@ListViewHelper@View@NetworkUX@@SAPE$AAVDataTemplate@Xaml@UI@Windows@@PE$AAVUIElement@567@@Z
    static ::Windows::UI::Xaml::DataTemplate & * GetSelectedItemTemplate(::Windows::UI::Xaml::UIElement & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@ListViewHelper@View@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSelectionShared@ListViewHelper@View@NetworkUX@@SAXPE$AAVUIElement@Xaml@UI@Windows@@_N@Z
    static void SetIsSelectionShared(::Windows::UI::Xaml::UIElement & *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedItemTemplate@ListViewHelper@View@NetworkUX@@SAXPE$AAVUIElement@Xaml@UI@Windows@@PE$AAVDataTemplate@567@@Z
    static void SetSelectedItemTemplate(::Windows::UI::Xaml::UIElement & *, ::Windows::UI::Xaml::DataTemplate & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDependencyProperties@ListViewHelper@View@NetworkUX@@SAXXZ
    static void UnregisterDependencyProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSelectionSharedChanged@ListViewHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnIsSelectionSharedChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemTemplateChanged@ListViewHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnSelectedItemTemplateChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
};
} // namespace NetworkUX::View
