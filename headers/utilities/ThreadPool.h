#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NetworkUX.dll by Windissect. 1 member(s).
namespace Windows::System::Threading {
class ThreadPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunAsync@ThreadPool@Threading@System@Windows@@SAPE$AAUIAsyncAction@Foundation@4@PE$AAVWorkItemHandler@234@@Z
    static WindissectOpaque & * RunAsync(::Windows::System::Threading::WorkItemHandler & *);
};
} // namespace Windows::System::Threading
