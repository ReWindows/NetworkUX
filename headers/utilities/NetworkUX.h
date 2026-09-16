#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 4 member(s).
class NetworkUX {
public:
    class App;
    class ESimHelper;
    class MainPageBase;
    class View;
    class ViewContext;
    class __AppActivationFactory;
    class __CategoryActivationFactory;
    class __CollapsedWhenNotNullOrEmptyConverterActivationFactory;
    class __CollapsedWhenNullOrEmptyConverterActivationFactory;
    class __ControlCenterMBBL2PageActivationFactory;
    class __ControlCenterVPNL2PageActivationFactory;
    class __ControlCenterWiFiL2PageActivationFactory;
    class __ListSizeToVisibilityConverterActivationFactory;
    class __MainPageActivationFactory;
    class __MainPageBaseActivationFactory;
    class __MediaTypeToGlyphConverterActivationFactory;
    class __NegatedListSizeToVisibilityConverterActivationFactory;
    class __OOBEEsimDiscoveryPageActivationFactory;
    class __OOBEMainPageActivationFactory;
    class __OOBEMultivariantPageActivationFactory;
    class __OOBEProfilePropertiesPageActivationFactory;
    class __ViewContextActivationFactory;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUXManager@NetworkUX@@YAJPEAPEAUIInspectable@@@Z
    long GetUXManager(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallDrivers@NetworkUX@@YAJPEAUHSTRING__@@@Z
    long InstallDrivers(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NetworkUXModeAsString@NetworkUX@@YAPE$AAVString@Platform@@W4NetworkUXMode@1@@Z
    ::Platform::String & * NetworkUXModeAsString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reboot@NetworkUX@@YAJXZ
    long Reboot();
};
