#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 17 member(s).
class XamlRuntimeSiteProviderImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@XamlRuntimeSiteProviderImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@XamlRuntimeSiteProviderImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XamlRuntimeSiteProviderImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@XamlRuntimeSiteProviderImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlRuntimeSite@XamlRuntimeSiteProviderImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetXamlRuntimeSite(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@XamlRuntimeSiteProviderImpl@@SAPEB_WXZ
    static wchar_t const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@XamlRuntimeSiteProviderImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@XamlRuntimeSiteProviderImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@XamlRuntimeSiteProviderImpl@@UEAAKXZ
    virtual unsigned long Release();
};
