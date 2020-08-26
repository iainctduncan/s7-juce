/*
  ==============================================================================

    utils.cpp
    Created: 26 Aug 2020 3:25:50pm
    Author:  Iain Duncan

  ==============================================================================
*/

#include "utils.h"
#include <JuceHeader.h>

void log(char *msg){
   Logger::getCurrentLogger()->writeToLog(msg);
}
