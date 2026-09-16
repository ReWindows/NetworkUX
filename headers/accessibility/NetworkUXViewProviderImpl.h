#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 19 member(s).
class NetworkUXViewProviderImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NetworkUXViewProviderImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NetworkUXViewProviderImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NetworkUXViewProviderImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NetworkUXViewProviderImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@NetworkUXViewProviderImpl@@UEAAJPEAUIInspectable@@PEAPEAU2@@Z
    virtual long GetView(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewModel@NetworkUXViewProviderImpl@@UEAAJPEAUIInspectable@@PEAUINetworkUXControllerInternal@NetworkUX@Logon@UI@Internal@Windows@ABI@@PEAPEAU2@@Z
    virtual long GetViewModel(IInspectable *, ::ABI::Windows::Internal::UI::Logon::NetworkUX::INetworkUXControllerInternal *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@NetworkUXViewProviderImpl@@SAPEB_WXZ
    static wchar_t const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@NetworkUXViewProviderImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NetworkUXViewProviderImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NetworkUXViewProviderImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XamlRuntimeSite@NetworkUXViewProviderImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_XamlRuntimeSite(IInspectable * *);
};
