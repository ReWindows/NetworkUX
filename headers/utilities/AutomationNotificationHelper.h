#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace NetworkUX::View {
class AutomationNotificationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseImportantNotification@AutomationNotificationHelper@View@NetworkUX@@SAXPE$AAVFrameworkElement@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void RaiseImportantNotification(::Windows::UI::Xaml::FrameworkElement & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseImportantNotification@AutomationNotificationHelper@View@NetworkUX@@SAXPE$AAVTextBlock@Controls@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static void RaiseImportantNotification(::Windows::UI::Xaml::Controls::TextBlock & *, ::Platform::String & *);
};
} // namespace NetworkUX::View
