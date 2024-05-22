#pragma once
#include <vcclr.h>
#include <unordered_set>

using namespace System;
using namespace System::Collections::Generic;

ref class ChoiceMechanism abstract
{
protected:
    List<String^>^ alternativeList;
    List<String^>^ criteriaList;
    Dictionary<String^, Dictionary<String^, double>^>^ criteriaScores;

public:
    virtual Dictionary<String^, double>^ findSolution() = 0;
};
