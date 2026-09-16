#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 6 member(s).
class NetworkFlyoutTelemetry {
public:
    class LaunchSettingsCategory;
    class LaunchSettingsLink;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BootstrapProfileOutsideOobe@NetworkFlyoutTelemetry@@SAXXZ
    static void BootstrapProfileOutsideOobe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NetworkFlyoutInitialized@NetworkFlyoutTelemetry@@SAXXZ
    static void NetworkFlyoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NetworkFlyoutLoaded@NetworkFlyoutTelemetry@@SAXXZ
    static void NetworkFlyoutLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NetworkFlyoutReady@NetworkFlyoutTelemetry@@SAXXZ
    static void NetworkFlyoutReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OobeAvailableNetworkAdapter@NetworkFlyoutTelemetry@@SAXI_NII@Z
    static void OobeAvailableNetworkAdapter(unsigned int, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OobeNetworkConnectedComplete@NetworkFlyoutTelemetry@@SAX_NPEB_W@Z
    static void OobeNetworkConnectedComplete(bool, wchar_t const *);
};
