#pragma once

#include <JuceHeader.h>
#include "utils.h"
#include "s7.h"
#include "MainComponent.h"

//==============================================================================
class Engine  
{
public:
    Engine(MainComponent *parentComponent)
    {
        // store the reference to the parent juce component so we can callback to it
        parent = parentComponent;

        log("Engine constructor, initing s7");
        s7 = s7_init();
        log("init complete"); 
    }
    ~Engine(){ }

private:
    // pointer to the S7 interpreter      
    s7_scheme *s7;      
    // pointer to the parent Juce component for calling back to it
    MainComponent *parent;  
};
