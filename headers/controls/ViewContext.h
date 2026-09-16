#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 6 member(s).
namespace NetworkUX {
class ViewContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostWindowId@ViewContext@NetworkUX@@SA_KXZ
    static uint64_t GetHostWindowId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootFrame@ViewContext@NetworkUX@@SAPE$AAVFrame@Controls@Xaml@UI@Windows@@XZ
    static ::Windows::UI::Xaml::Controls::Frame & * GetRootFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndicateCompletionToUserOnboardingHost@ViewContext@NetworkUX@@SAXW4UserOnboardingWebAppState@UserProfile@System@WindowsUdk@@@Z
    static void IndicateCompletionToUserOnboardingHost(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktop@ViewContext@NetworkUX@@SA_NXZ
    static bool IsDesktop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultivariantAvailable@ViewContext@NetworkUX@@SA_NXZ
    static bool IsMultivariantAvailable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNetworkUXMode@ViewContext@NetworkUX@@SAXW4NetworkUXMode@2@@Z
    static void SetNetworkUXMode(int);
};
} // namespace NetworkUX
