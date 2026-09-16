#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 15 member(s).
namespace NetworkUX {
class ESimHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAsyncOperationFinished@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@W4ESimSettingOperation@@JK@Z
    virtual long OnAsyncOperationFinished(_GUID const &, int, int, long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAuthenticationPreferenceChanged@ESimHelper@NetworkUX@@UEAAJEW4__MIDL_imports_0002@@@Z
    virtual long OnAuthenticationPreferenceChanged(unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDownloadingProfileMetadataUpdated@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@PEB_WUESimSettingProfileMetaData@@W4ESimSettingDownloadingProfileState@@K@Z
    virtual long OnDownloadingProfileMetadataUpdated(_GUID const &, int, wchar_t const *, ESimSettingProfileMetaData, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnESimPolicyMaskUpdated@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@K@Z
    virtual long OnESimPolicyMaskUpdated(_GUID const &, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnESimProfileRemoved@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@PEB_W@Z
    virtual long OnESimProfileRemoved(_GUID const &, int, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnESimProfileUpdated@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@PEB_WUESimSettingProfileMetaData@@@Z
    virtual long OnESimProfileUpdated(_GUID const &, int, wchar_t const *, ESimSettingProfileMetaData);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnESimServiceStateChanged@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@W4ESimSettingServiceState@@W4ESimSettingServiceStateDetail@@@Z
    virtual long OnESimServiceStateChanged(_GUID const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnESimSettingApiAvailable@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@PEAUIESimSettingApi@@@Z
    virtual long OnESimSettingApiAvailable(_GUID const &, int, IESimSettingApi *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnESimSmdpAddressUpdated@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@PEAY0BAE@$$CB_W@Z
    virtual long OnESimSmdpAddressUpdated(_GUID const &, int, wchar_t const (*)[260]);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnESimStateUpdated@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@W4ESimSettingESimState@@PEAY0CB@$$CB_W@Z
    virtual long OnESimStateUpdated(_GUID const &, int, int, wchar_t const (*)[33]);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProvisioningProfileAvailabilityChanged@ESimHelper@NetworkUX@@UEAAJAEBU_GUID@@W4SimSlot@@E@Z
    virtual long OnProvisioningProfileAvailabilityChanged(_GUID const &, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ESimHelper@NetworkUX@@QEAAJAEBU_GUID@@PE$AAVViewContext@2@@Z
    long RuntimeClassInitialize(_GUID const &, WindissectOpaque & *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ESimHelper@NetworkUX@@EEAA@XZ
    virtual ~ESimHelper();
};
} // namespace NetworkUX
