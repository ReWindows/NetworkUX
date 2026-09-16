#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace SystemSettings::DataModel {
class SettingsEnvironmentDatabase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsEnvironment@SettingsEnvironmentDatabase@DataModel@SystemSettings@@SAPE$AAVObject@Platform@@XZ
    static ::Platform::Object & * GetSettingsEnvironment();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsEnvironmentForUser@SettingsEnvironmentDatabase@DataModel@SystemSettings@@SAPE$AAVObject@Platform@@PE$AAVUser@System@Windows@@@Z
    static ::Platform::Object & * GetSettingsEnvironmentForUser(::Windows::System::User & *);
};
} // namespace SystemSettings::DataModel
