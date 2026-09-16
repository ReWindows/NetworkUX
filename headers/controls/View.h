#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 5 member(s).
namespace NetworkUX {
class View {
public:
    class AlternateResourceLoaderConverter;
    class AutoTooltipHelper;
    class AutomationNotificationHelper;
    class DefaultButton;
    class EntityListItemControl;
    class FocusHelper;
    class FocusTargetData;
    class FontHelper;
    class ListViewHelper;
    class LiveRegionChangedTrigger;
    class ResourceFormatStringConverter;
    class ResourceLoaderConverter;
    class SettingsListViewBase;
    class __AlternateResourceLoaderConverterActivationFactory;
    class __AutoTooltipHelperActivationFactory;
    class __AutomationIdConverterActivationFactory;
    class __AutomationNotificationHelperActivationFactory;
    class __BooleanToAccessibilityViewConverterActivationFactory;
    class __BooleanToDoubleConverterActivationFactory;
    class __BooleanToVisibilityConverterActivationFactory;
    class __CFEConnectionCompletionActivationFactory;
    class __CFEEAPGenericIdentityActivationFactory;
    class __CFEEAPMSChapv2IdentityActivationFactory;
    class __CFEEAPSimIdentityActivationFactory;
    class __CFEEAPTLSCertPasswordRetryActivationFactory;
    class __CFEEAPTLSCertSelectActivationFactory;
    class __CFEEAPValidateServerCertActivationFactory;
    class __CFEPasswordExpiredActivationFactory;
    class __CFEStateToTemplateConverterActivationFactory;
    class __CFEWiFiAuthProxyActivationFactory;
    class __CFEWiFiCertSelectActivationFactory;
    class __CFEWiFiPassKeyActivationFactory;
    class __CFEWiFiSSIDActivationFactory;
    class __CFEWiFiWCNComboActivationFactory;
    class __CFEWiFiWCNPinActivationFactory;
    class __ConnectedMobileBroadbandActivationFactory;
    class __ConnectedNetworkActivationFactory;
    class __ConnectivityToPreCFEConverterActivationFactory;
    class __CustomResourceLoaderActivationFactory;
    class __DefaultButtonActivationFactory;
    class __DwordToSolidColorBrushConverterActivationFactory;
    class __EntityListItemControlActivationFactory;
    class __FocusArgsActivationFactory;
    class __FocusHelperActivationFactory;
    class __FontHelperActivationFactory;
    class __InternetConnectivityToSubtitleConverterActivationFactory;
    class __ListViewHelperActivationFactory;
    class __LiveRegionChangedTriggerActivationFactory;
    class __MBConnectionCompletionActivationFactory;
    class __MBInProgressActivationFactory;
    class __MBPreCFEActivationFactory;
    class __MbSimPinActivationFactory;
    class __MobileBroadbandResourceLoaderConverterActivationFactory;
    class __MobileBroadbandStringToTemplateConverterActivationFactory;
    class __NegateBooleanConverterActivationFactory;
    class __NegatedBooleanToAccessibilityViewConverterActivationFactory;
    class __NegatedBooleanToDoubleConverterActivationFactory;
    class __NegatedBooleanToVisibilityConverterActivationFactory;
    class __NetworkProgressingActivationFactory;
    class __OOBEConnectedNetworkActivationFactory;
    class __ResourceFormatStringConverterActivationFactory;
    class __ResourceLoaderActivationFactory;
    class __ResourceLoaderConverterActivationFactory;
    class __SettingsListViewActivationFactory;
    class __SettingsListViewBaseActivationFactory;
    class __SettingsListViewItemActivationFactory;
    class __SettingsListViewItemBaseActivationFactory;
    class __SettingsPageRedirectActivationFactory;
    class __VPNConnectionCompleteCloseButtonActivationFactory;
    class __VPNConnectionCompleteDisconnectButtonActivationFactory;
    class __VPNInProgressCancelButtonActivationFactory;
    class __VPNPreCFEActivationFactory;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVisualChildByName@View@NetworkUX@@YAPE$AAVFrameworkElement@Xaml@UI@Windows@@PE$AAVDependencyObject@456@PE$AAVString@Platform@@_N@Z
    ::Windows::UI::Xaml::FrameworkElement & * FindVisualChildByName(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@View@NetworkUX@@YA_NPE$AAVControl@Controls@Xaml@UI@Windows@@@Z
    bool IsFocusable(::Windows::UI::Xaml::Controls::Control & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinUISupported@View@NetworkUX@@YA_NW4NetworkUXMode@2@@Z
    bool IsWinUISupported(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAppResource@View@NetworkUX@@YAPE$AAVObject@Platform@@PE$AAVString@4@@Z
    ::Platform::Object & * LookupAppResource(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLiveRegionChanged@View@NetworkUX@@YAXPE$AAVFrameworkElement@Xaml@UI@Windows@@@Z
    void RaiseLiveRegionChanged(::Windows::UI::Xaml::FrameworkElement & *);
};
} // namespace NetworkUX
