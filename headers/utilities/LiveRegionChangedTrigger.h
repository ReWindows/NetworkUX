#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 23 member(s).
namespace NetworkUX::View {
class LiveRegionChangedTrigger {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBecameVisible@LiveRegionChangedTrigger@View@NetworkUX@@SA?AW4Visibility@Xaml@UI@Windows@@PE$AAVDependencyObject@567@@Z
    static int GetBecameVisible(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChanged@LiveRegionChangedTrigger@View@NetworkUX@@SAPE$AAVObject@Platform@@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static ::Platform::Object & * GetChanged(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationDisplayString@LiveRegionChangedTrigger@View@NetworkUX@@SAPE$AAVString@Platform@@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static ::Platform::String & * GetNotificationDisplayString(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationKind@LiveRegionChangedTrigger@View@NetworkUX@@SAPE$AAVString@Platform@@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static ::Platform::String & * GetNotificationKind(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationProcessing@LiveRegionChangedTrigger@View@NetworkUX@@SAPE$AAVString@Platform@@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static ::Platform::String & * GetNotificationProcessing(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringChanged@LiveRegionChangedTrigger@View@NetworkUX@@SAPE$AAVString@Platform@@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static ::Platform::String & * GetStringChanged(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringUpdated@LiveRegionChangedTrigger@View@NetworkUX@@SAPE$AAVString@Platform@@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static ::Platform::String & * GetStringUpdated(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@LiveRegionChangedTrigger@View@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBecameVisible@LiveRegionChangedTrigger@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@W4Visibility@567@@Z
    static void SetBecameVisible(::Windows::UI::Xaml::DependencyObject & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChanged@LiveRegionChangedTrigger@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVObject@Platform@@@Z
    static void SetChanged(::Windows::UI::Xaml::DependencyObject & *, ::Platform::Object & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotificationDisplayString@LiveRegionChangedTrigger@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void SetNotificationDisplayString(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotificationKind@LiveRegionChangedTrigger@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void SetNotificationKind(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotificationProcessing@LiveRegionChangedTrigger@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void SetNotificationProcessing(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStringChanged@LiveRegionChangedTrigger@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void SetStringChanged(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStringUpdated@LiveRegionChangedTrigger@View@NetworkUX@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void SetStringUpdated(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDependencyProperties@LiveRegionChangedTrigger@View@NetworkUX@@SAXXZ
    static void UnregisterDependencyProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationKindFromString@LiveRegionChangedTrigger@View@NetworkUX@@CA?AW4AutomationNotificationKind@Peers@Automation@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static int NotificationKindFromString(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationProcessingFromString@LiveRegionChangedTrigger@View@NetworkUX@@CA?AW4AutomationNotificationProcessing@Peers@Automation@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static int NotificationProcessingFromString(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnObjectChanged@LiveRegionChangedTrigger@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnObjectChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStringChanged@LiveRegionChangedTrigger@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnStringChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStringUpdated@LiveRegionChangedTrigger@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnStringUpdated(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@LiveRegionChangedTrigger@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@567@@Z
    static void OnVisibilityChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTriggeredEvent@LiveRegionChangedTrigger@View@NetworkUX@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static void RaiseTriggeredEvent(::Windows::UI::Xaml::DependencyObject & *);
};
} // namespace NetworkUX::View
