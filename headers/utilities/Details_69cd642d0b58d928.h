#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace Windows::Internal::PlatformExtensions {
class Details {
public:
    class ActivationFactoryContractRedirectorContext;
    class ExtensionRegistrationCollectionRegistry;
    class ExtensionRegistrationRegistry;
    class PlatformExtensionsTelemetry;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryActivateContractExtensionInternal@Details@PlatformExtensions@Internal@Windows@@YAJPEAUHSTRING__@@UWindowId@WindowManagement@ApplicationModel@34ABI@@AEBU_GUID@@PEAPEAX@Z
    long TryActivateContractExtensionInternal(HSTRING__*, ::ABI::Windows::Internal::ApplicationModel::WindowManagement::WindowId, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLookupExtensionPointImplementationAcid@Details@PlatformExtensions@Internal@Windows@@YAJPEAUHSTRING__@@PEA_W_KPEBU_GUID@@@Z
    long TryLookupExtensionPointImplementationAcid(HSTRING__*, wchar_t *, uint64_t, _GUID const *);
};
} // namespace Windows::Internal::PlatformExtensions
