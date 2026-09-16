#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 6 member(s).
namespace NetworkFlyoutTelemetry {
class LaunchSettingsCategory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchSettingsCategory@NetworkFlyoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LaunchSettingsCategory@NetworkFlyoutTelemetry@@QEAAXPEB_W@Z
    void Stop(wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchSettingsCategory@NetworkFlyoutTelemetry@@QEAA@XZ
    ~LaunchSettingsCategory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchSettingsCategory@NetworkFlyoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchSettingsCategory@NetworkFlyoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NetworkFlyoutTelemetry
