#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent() {
    // init the engine, passing a reference to self to store in the engine component
    engine = new Engine(this);

    addAndMakeVisible ( btn );
    btn.setButtonText ("Click me"); 
    btn.addListener(this);

    addAndMakeVisible (label);
    label.setJustificationType (Justification::centred);
    label.setText ("waiting...", dontSendNotification);   
    setSize (600, 400);

}

MainComponent::~MainComponent() { }

void MainComponent::resized() {
    btn.setBounds (10, 10, getWidth() - 20, 40);
    label.setBounds (10, 60, getWidth() - 20, 40); 
}

// our listener callback, overrides method in the Button::Listener base class
void MainComponent::buttonClicked (Button* button) {
    if (button == &btn){                                            
       label.setText ("clicked!", dontSendNotification);                      
    } 
}

