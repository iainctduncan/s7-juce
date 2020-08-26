#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public Component, public Button::Listener
{
public:
    //==============================================================================
    MainComponent(){
        addAndMakeVisible ( btn );
        btn.setButtonText ("Click me"); 
        btn.addListener(this);

        addAndMakeVisible (label);
        label.setColour (Label::backgroundColourId, Colours::black);
        label.setColour (Label::textColourId, Colours::white);
        label.setJustificationType (Justification::centred);
        label.setText ("waiting...", dontSendNotification);   
        setSize (600, 400);
    };

    //==============================================================================
    void resized() override {
        btn.setBounds (10, 10, getWidth() - 20, 40);
        label.setBounds (10, 60, getWidth() - 20, 40); 
    }

    // our listener callback, overrides method in the Button::Listener base class
    // void buttonClicked (Button*) override; 
    void buttonClicked (Button* button) override {
        // check button pointer and our member button to see if address matches
        if (button == &btn){                                            
           // tell label component not to broadcast to *its* listeners
           label.setText ("clicked!", dontSendNotification);                      

            // add some logging
            Logger::getCurrentLogger()->writeToLog("the button was clicked");
        } 
    }

private:
    //==============================================================================
    // Your private member variables go here...

    TextButton btn;
    Label label;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
