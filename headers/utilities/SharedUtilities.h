#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 6 member(s).
class SharedUtilities {
public:
    class ApplicationResourceLoader;
    class BatteryService;
    class LocalizationService;
    class ThemeManager;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationResourceLoader@SharedUtilities@@YAPE$AAUIResourceLoaderInternal@1@XZ
    WindissectOpaque & * GetApplicationResourceLoader();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationResourceLoaderInternal@SharedUtilities@@YAPE$AAUIResourceLoaderInternal@1@XZ
    WindissectOpaque & * GetApplicationResourceLoaderInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullFileResourcePath@SharedUtilities@@YAPE$AAVString@Platform@@PE$AAV23@@Z
    ::Platform::String & * GetFullFileResourcePath(::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAccentColorEnabled@SharedUtilities@@YA_NXZ
    bool IsAccentColorEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForFlyoutWithContextMenuKeyHandling@SharedUtilities@@YA?AUFlyoutWithContextMenuEventTokens@1@XZ
    WindissectOpaque RegisterForFlyoutWithContextMenuKeyHandling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSystemUseDarkMode@SharedUtilities@@YA_NXZ
    bool ShouldSystemUseDarkMode();
};
