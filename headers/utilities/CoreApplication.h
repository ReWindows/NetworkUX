#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 1 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplication {
public:
    class MainView;
    class UnhandledErrorDetected;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplication@Core@ApplicationModel@Windows@@SAPE$AAVCoreApplicationView@234@XZ
    static ::Windows::ApplicationModel::Core::CoreApplicationView & * GetCurrentView();
};
} // namespace Windows::ApplicationModel::Core
