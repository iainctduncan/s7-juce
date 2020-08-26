#include "MainComponent.h"

//==============================================================================
//MainComponent::MainComponent()
//{
//    addAndMakeVisible ( btn );
//    btn.setButtonText ("Click me"); 
//
//    addAndMakeVisible (label);
//    label.setColour (Label::backgroundColourId, Colours::black);
//    label.setColour (Label::textColourId, Colours::white);
//    label.setJustificationType (Justification::centred);
//
//    // tell label component not to broadcast to *its* listeners
//    label.setText ("Hello world", dontSendNotification);   
//
//    setSize (600, 400);
//}
//
//MainComponent::~MainComponent()
//{
//}

//void MainComponent::resized()
//{
//    // This is called when the MainComponent is resized.
//    // If you add any child components, this is where you should update their positions.
//    btn.setBounds (10, 10, getWidth() - 20, 40);
//    label.setBounds (10, 60, getWidth() - 20, 40); 
//}

// our listener callback, overrides method in the Button::Listener base class
//void MainComponent::buttonClicked (Button* button) {
//    // check button pointer and our member button to see if address matches
//    if (button == &btn){                                            
//       // tell label component not to broadcast to *its* listeners
//       label.setText ("clicked!", dontSendNotification);                      
//    } 
//}

