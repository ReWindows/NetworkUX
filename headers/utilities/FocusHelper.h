#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 26 member(s).
namespace NetworkUX::View {
class FocusHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBecameVisible@FocusHelper@View@NetworkUX@@SA?AW4Visibility@Xaml@UI@Windows@@PE$AAVDependencyObject@567@@Z
    static int GetBecameVisible(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFocusMode@FocusHelper@View@NetworkUX@@SAPE$AAVString@Platform@@PE$AAVUIElement@Xaml@UI@Windows@@@Z
    static ::Platform::String & * GetDefaultFocusMode(::Windows::UI::Xaml::UIElement & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasFocus@FocusHelper@View@NetworkUX@@SA_NPE$AAVUIElement@Xaml@UI@Windows@@@Z
    static bool GetHasFocus(::Windows::UI::Xaml::UIElement & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDefaultFocus@FocusHelper@View@NetworkUX@@SA_NPE$AAVUIElement@Xaml@UI@Windows@@@Z
    static bool GetIsDefaultFocus(::Windows::UI::Xaml::UIElement & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@FocusHelper@View@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBecameVisible@FocusHelper@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@W4Visibility@567@@Z
    static void SetBecameVisible(::Windows::UI::Xaml::DependencyObject & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultFocusMode@FocusHelper@View@NetworkUX@@SAXPE$AAVUIElement@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void SetDefaultFocusMode(::Windows::UI::Xaml::UIElement & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelayedFocus@FocusHelper@View@NetworkUX@@SAXPE$AAVFocusArgs@23@@Z
    static void SetDelayedFocus(WindissectOpaque & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHasFocus@FocusHelper@View@NetworkUX@@SAXPE$AAVUIElement@Xaml@UI@Windows@@_N@Z
    static void SetHasFocus(::Windows::UI::Xaml::UIElement & *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsDefaultFocus@FocusHelper@View@NetworkUX@@SAXPE$AAVUIElement@Xaml@UI@Windows@@_N@Z
    static void SetIsDefaultFocus(::Windows::UI::Xaml::UIElement & *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDependencyProperties@FocusHelper@View@NetworkUX@@SAXXZ
    static void UnregisterDependencyProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindParentSettingId@FocusHelper@View@NetworkUX@@CAPE$AAVString@Platform@@PE$AAVFrameworkElement@Xaml@UI@Windows@@@Z
    static ::Platform::String & * FindParentSettingId(::Windows::UI::Xaml::FrameworkElement & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFocusTargetFromMapData@FocusHelper@View@NetworkUX@@CAPE$AAVControl@Controls@Xaml@UI@Windows@@PEAVFocusTargetData@23@@Z
    static ::Windows::UI::Xaml::Controls::Control & * GetDefaultFocusTargetFromMapData(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeButton@FocusHelper@View@NetworkUX@@CAXPE$AAVButtonBase@Primitives@Controls@Xaml@UI@Windows@@@Z
    static void InvokeButton(::Windows::UI::Xaml::Controls::Primitives::ButtonBase & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFirstItemInItemsControl@FocusHelper@View@NetworkUX@@CA_NPE$AAVItemsControl@Controls@Xaml@UI@Windows@@PE$AAVObject@Platform@@@Z
    static bool IsFirstItemInItemsControl(::Windows::UI::Xaml::Controls::ItemsControl & *, ::Platform::Object & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInvokeAllowed@FocusHelper@View@NetworkUX@@CA_NPE$AAVString@Platform@@@Z
    static bool IsInvokeAllowed(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsControlLoadedCallback@FocusHelper@View@NetworkUX@@CAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z
    static void ItemsControlLoadedCallback(::Platform::Object & *, ::Windows::UI::Xaml::RoutedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultFocusModeChanged@FocusHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnDefaultFocusModeChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHasFocusChanged@FocusHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnHasFocusChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsDefaultFocusChanged@FocusHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnIsDefaultFocusChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@FocusHelper@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnVisibilityChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItemsControlFromMap@FocusHelper@View@NetworkUX@@CAXPE$AAVString@Platform@@VWeakReference@5@@Z
    static void RemoveItemsControlFromMap(::Platform::String & *, ::Platform::WeakReference);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetControlFromMap@FocusHelper@View@NetworkUX@@CAXPE$AAVString@Platform@@VWeakReference@5@@Z
    static void RemoveTargetControlFromMap(::Platform::String & *, ::Platform::WeakReference);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@FocusHelper@View@NetworkUX@@CA_NPE$AAVString@Platform@@PE$AAVControl@Controls@Xaml@UI@Windows@@_N@Z
    static bool SetFocus(::Platform::String & *, ::Windows::UI::Xaml::Controls::Control & *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFocusOnItemsControlChild@FocusHelper@View@NetworkUX@@CA_NPE$AAVItemsControl@Controls@Xaml@UI@Windows@@PE$AAVControl@5678@PE$AAVString@Platform@@@Z
    static bool ShouldFocusOnItemsControlChild(::Windows::UI::Xaml::Controls::ItemsControl & *, ::Windows::UI::Xaml::Controls::Control & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetControlLoadedCallback@FocusHelper@View@NetworkUX@@CAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z
    static void TargetControlLoadedCallback(::Platform::Object & *, ::Windows::UI::Xaml::RoutedEventArgs & *);
};
} // namespace NetworkUX::View
