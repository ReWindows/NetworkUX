#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace NetworkUX {
class __OOBEProfilePropertiesPageActivationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFactory@__OOBEProfilePropertiesPageActivationFactory@NetworkUX@@SAJPEAIPEAU__abi___classObjectEntry@@AEAVGuid@Platform@@PEAPEAU__abi_IUnknown@@@Z
    static long CreateFactory(unsigned int *, __abi___classObjectEntry *, ::Platform::Guid &, __abi_IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetClassName@__OOBEProfilePropertiesPageActivationFactory@NetworkUX@@SAPEB_WXZ
    static wchar_t const * GetTargetClassName();
};
} // namespace NetworkUX
