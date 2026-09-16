#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 1 member(s).
namespace Windows::UI::ViewManagement {
class ApplicationView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@ApplicationView@ViewManagement@UI@Windows@@SAPE$AAV1234@XZ
    static ::Windows::UI::ViewManagement::ApplicationView & * GetForCurrentView();
};
} // namespace Windows::UI::ViewManagement
