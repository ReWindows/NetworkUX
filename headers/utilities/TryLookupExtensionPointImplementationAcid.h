#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 6 member(s).
namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry {
class TryLookupExtensionPointImplementationAcid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TryLookupExtensionPointImplementationAcid@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAXPEAUHSTRING__@@@Z
    void StartActivity(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TryLookupExtensionPointImplementationAcid@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAXPEB_W@Z
    void Stop(wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TryLookupExtensionPointImplementationAcid@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAA@XZ
    ~TryLookupExtensionPointImplementationAcid();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TryLookupExtensionPointImplementationAcid@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TryLookupExtensionPointImplementationAcid@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry
