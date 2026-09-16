#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 3 member(s).
namespace Windows::UI::Xaml::Automation {
class AutomationProperties {
public:
    class NameProperty;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessibilityView@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@W4AccessibilityView@Peers@2345@@Z
    static void SetAccessibilityView(::Windows::UI::Xaml::DependencyObject & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationId@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetAutomationId(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetName(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
};
} // namespace Windows::UI::Xaml::Automation
