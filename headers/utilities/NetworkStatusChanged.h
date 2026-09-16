#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace Windows::Networking::Connectivity::NetworkInformation {
class NetworkStatusChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add@NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@@SA?AVEventRegistrationToken@Foundation@5@PE$AAVNetworkStatusChangedEventHandler@345@@Z
    static WindissectOpaque add(::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@@SAXVEventRegistrationToken@Foundation@5@@Z
    static void remove(WindissectOpaque);
};
} // namespace Windows::Networking::Connectivity::NetworkInformation
