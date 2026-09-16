#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 5 member(s).
namespace NetworkFlyoutTelemetry {
class LaunchSettingsLink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchSettingsLink@NetworkFlyoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LaunchSettingsLink@NetworkFlyoutTelemetry@@QEAAXPEB_W@Z
    void Stop(wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchSettingsLink@NetworkFlyoutTelemetry@@QEAA@XZ
    ~LaunchSettingsLink();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchSettingsLink@NetworkFlyoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchSettingsLink@NetworkFlyoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NetworkFlyoutTelemetry
