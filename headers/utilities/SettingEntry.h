#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 3 member(s).
namespace NetworkUX::ViewModel {
class SettingEntry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsDatabase@SettingEntry@ViewModel@NetworkUX@@SAPE$AAUISettingsDatabase@DataModel@SystemSettings@@XZ
    static ::SystemSettings::DataModel::ISettingsDatabase & * GetSettingsDatabase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsEnvironment@SettingEntry@ViewModel@NetworkUX@@SAPE$AAVSettingsEnvironment@23@XZ
    static WindissectOpaque & * GetSettingsEnvironment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapAsSettingEntry@SettingEntry@ViewModel@NetworkUX@@SAPE$AAV123@PE$AAUISettingItem@DataModel@SystemSettings@@PE$AAV123@@Z
    static WindissectOpaque & * WrapAsSettingEntry(::SystemSettings::DataModel::ISettingItem & *, WindissectOpaque & *);
};
} // namespace NetworkUX::ViewModel
