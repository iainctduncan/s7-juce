#pragma once

#include "utils.h"
#include "engine.h"
#include <JuceHeader.h>

class MainComponent  : public Component, public Button::Listener
{
  public:
    //==============================================================================
    MainComponent(){}
    ~MainComponent(){}
    void resized() overide;
    void buttonClicked (Button* button) override;

  private:
    // pointer to engine class instance, holds the scheme interpreter
    Engine *engine;

    TextButton btn;
    Label label;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
