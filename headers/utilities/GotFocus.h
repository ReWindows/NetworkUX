#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace Windows::UI::Xaml::Input::FocusManager {
class GotFocus {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add@GotFocus@FocusManager@Input@Xaml@UI@Windows@@SA?AVEventRegistrationToken@Foundation@6@PE$AAV?$EventHandler@PE$AAVFocusManagerGotFocusEventArgs@Input@Xaml@UI@Windows@@@86@@Z
    static WindissectOpaque add(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@GotFocus@FocusManager@Input@Xaml@UI@Windows@@SAXVEventRegistrationToken@Foundation@6@@Z
    static void remove(WindissectOpaque);
};
} // namespace Windows::UI::Xaml::Input::FocusManager
