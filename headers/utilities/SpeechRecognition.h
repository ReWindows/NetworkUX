#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 2 member(s).
namespace CloudExperienceHostAPI::Speech {
class SpeechRecognition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptForCommandsAsync@SpeechRecognition@Speech@CloudExperienceHostAPI@@SAPE$AAU?$IAsyncOperation@PE$AAVSpeechRecognitionResult@SpeechRecognition@Media@Windows@@@Foundation@Windows@@PE$AAVString@Platform@@PE$AAU?$IIterable@PE$AAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Collections@56@@Z
    static WindissectOpaque & * PromptForCommandsAsync(::Platform::String & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SpeechRecognition@Speech@CloudExperienceHostAPI@@SAXXZ
    static void Stop();
};
} // namespace CloudExperienceHostAPI::Speech
