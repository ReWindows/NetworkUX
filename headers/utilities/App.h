#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 11 member(s).
namespace NetworkUX {
class App {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendResourceDictionary@App@NetworkUX@@SAXPE$AAVString@Platform@@@Z
    static void AppendResourceDictionary(::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppResources@App@NetworkUX@@SAPE$AAVResourceDictionary@Xaml@UI@Windows@@XZ
    static ::Windows::UI::Xaml::ResourceDictionary & * GetAppResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadExperience@App@NetworkUX@@SAPE$AAVObject@Platform@@XZ
    static ::Platform::Object & * LoadExperience();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadResourceDictionaries@App@NetworkUX@@SAXXZ
    static void LoadResourceDictionaries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyShellForWindowTitle@App@NetworkUX@@SAXXZ
    static void NotifyShellForWindowTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@App@NetworkUX@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetResourceDictionary@App@NetworkUX@@SAXW4NetworkUXMode@2@0_N@Z
    static void ResetResourceDictionary(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticOnNavigationFailed@App@NetworkUX@@SAXPE$AAVObject@Platform@@PE$AAVNavigationFailedEventArgs@Navigation@Xaml@UI@Windows@@@Z
    static void StaticOnNavigationFailed(::Platform::Object & *, ::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticOnUnhandledError@App@NetworkUX@@SAXPE$AAVObject@Platform@@PE$AAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Z
    static void StaticOnUnhandledError(::Platform::Object & *, ::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticOnUnhandledException@App@NetworkUX@@SAXPE$AAVObject@Platform@@PE$AAVUnhandledExceptionEventArgs@Xaml@UI@Windows@@@Z
    static void StaticOnUnhandledException(::Platform::Object & *, ::Windows::UI::Xaml::UnhandledExceptionEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDependencyProperties@App@NetworkUX@@SAXXZ
    static void UnregisterDependencyProperties();
};
} // namespace NetworkUX
