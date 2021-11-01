/*
  ==============================================================================

    SanturString.h
    Created: 16 Apr 2021 11:43:43am
    Author:  Oddur Kristjansson

  ==============================================================================
*/

#pragma once

#include "DampedString.hpp"

class SanturString {
    
    public:
    SanturString();
    SanturString(double stringLength, double s0, double s1, double tension, double p, double A, double E, double I, double r, double k);
    
    ~SanturString();
    
    void setPluckLoc(double pluckLoc);
    void excite(int exciteSelection, double velocity);
    void processScheme();
    void updateStates();
    double getOutput(double outPos);
    
    double k;
    
    private:
    std::unique_ptr<DampedString> string1;
    std::unique_ptr<DampedString> string2;
    std::unique_ptr<DampedString> string3;
    std::unique_ptr<DampedString> string4;
};
