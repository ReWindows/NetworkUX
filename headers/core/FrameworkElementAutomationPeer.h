#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace Windows::UI::Xaml::Automation::Peers {
class FrameworkElementAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePeerForElement@FrameworkElementAutomationPeer@Peers@Automation@Xaml@UI@Windows@@SAPE$AAVAutomationPeer@23456@PE$AAVUIElement@456@@Z
    static ::Windows::UI::Xaml::Automation::Peers::AutomationPeer & * CreatePeerForElement(::Windows::UI::Xaml::UIElement & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromElement@FrameworkElementAutomationPeer@Peers@Automation@Xaml@UI@Windows@@SAPE$AAVAutomationPeer@23456@PE$AAVUIElement@456@@Z
    static ::Windows::UI::Xaml::Automation::Peers::AutomationPeer & * FromElement(::Windows::UI::Xaml::UIElement & *);
};
} // namespace Windows::UI::Xaml::Automation::Peers
