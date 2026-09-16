#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace CloudExperienceHostAPI::Speech {
class SpeechSynthesis {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpeakAsync@SpeechSynthesis@Speech@CloudExperienceHostAPI@@SAPE$AAU?$IAsyncOperationWithProgress@_NN@Foundation@Windows@@PE$AAVString@Platform@@@Z
    static WindissectOpaque & * SpeakAsync(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SpeechSynthesis@Speech@CloudExperienceHostAPI@@SAXXZ
    static void Stop();
};
} // namespace CloudExperienceHostAPI::Speech
