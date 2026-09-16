#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 1 member(s).
namespace Windows::Networking::Connectivity {
class NetworkInformation {
public:
    class NetworkStatusChanged;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindConnectionProfilesAsync@NetworkInformation@Connectivity@Networking@Windows@@SAPE$AAU?$IAsyncOperation@PE$AAU?$IVectorView@PE$AAVConnectionProfile@Connectivity@Networking@Windows@@@Collections@Foundation@Windows@@@Foundation@4@PE$AAVConnectionProfileFilter@234@@Z
    static WindissectOpaque & * FindConnectionProfilesAsync(::Windows::Networking::Connectivity::ConnectionProfileFilter & *);
};
} // namespace Windows::Networking::Connectivity
