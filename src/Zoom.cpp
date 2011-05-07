/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  7 May 2011 2:32:34pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "mammut.h"
//[/Headers]

#include "Zoom.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Zoom::Zoom ()
    : Component (T("Zoom")),
      groupComponent2 (0),
      zoomtoggle (0),
      zoomleft (0),
      zoomright (0)
{
    addAndMakeVisible (groupComponent2 = new GroupComponent (T("new group"),
                                                             T("Zoom")));
    groupComponent2->setTextLabelPosition (Justification::centredLeft);
    groupComponent2->setColour (GroupComponent::outlineColourId, Colour (0xb0000000));

    addAndMakeVisible (zoomtoggle = new ToggleButton (T("new toggle button")));
    zoomtoggle->setButtonText (T("Zoom"));
    zoomtoggle->addListener (this);

    addAndMakeVisible (zoomleft = new TextButton (T("Play")));
    zoomleft->setButtonText (T("<"));
    zoomleft->setConnectedEdges (Button::ConnectedOnRight);
    zoomleft->addListener (this);
    zoomleft->setColour (TextButton::buttonColourId, Colour (0x7bb46b1f));
    zoomleft->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    zoomleft->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (zoomright = new TextButton (T("Play")));
    zoomright->setButtonText (T(">"));
    zoomright->setConnectedEdges (Button::ConnectedOnLeft);
    zoomright->addListener (this);
    zoomright->setColour (TextButton::buttonColourId, Colour (0x8fab6e38));
    zoomright->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    zoomright->setColour (TextButton::textColourOnId, Colours::black);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);

    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Zoom::~Zoom()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (groupComponent2);
    deleteAndZero (zoomtoggle);
    deleteAndZero (zoomleft);
    deleteAndZero (zoomright);

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Zoom::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Zoom::resized()
{
    groupComponent2->setBounds (0, 0, 840, 112);
    zoomtoggle->setBounds (16, 16, 80, 88);
    zoomleft->setBounds (104, 16, 336, 88);
    zoomright->setBounds (448, 16, 376, 88);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Zoom::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == zoomtoggle)
    {
        //[UserButtonCode_zoomtoggle] -- add your button handler code here..
      MC_zoom();
      //graphcomponent->repaint();
        //[/UserButtonCode_zoomtoggle]
    }
    else if (buttonThatWasClicked == zoomleft)
    {
        //[UserButtonCode_zoomleft] -- add your button handler code here..
      MC_left();
      //graphcomponent->repaint();
        //[/UserButtonCode_zoomleft]
    }
    else if (buttonThatWasClicked == zoomright)
    {
        //[UserButtonCode_zoomright] -- add your button handler code here..
      MC_right();
      //graphcomponent->repaint();
        //[/UserButtonCode_zoomright]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Zoom" componentName="Zoom"
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <GROUPCOMPONENT name="new group" id="f0171705f04a534" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="0 0 840 112" outlinecol="b0000000"
                  title="Zoom" textpos="33"/>
  <TOGGLEBUTTON name="new toggle button" id="35859d636e84b6b7" memberName="zoomtoggle"
                virtualName="" explicitFocusOrder="0" pos="16 16 80 88" buttonText="Zoom"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="Play" id="68fc6b72ad3ec761" memberName="zoomleft" virtualName=""
              explicitFocusOrder="0" pos="104 16 336 88" bgColOff="7bb46b1f"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="&lt;" connectedEdges="2"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Play" id="2b091dc701c7cc7b" memberName="zoomright" virtualName=""
              explicitFocusOrder="0" pos="448 16 376 88" bgColOff="8fab6e38"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="&gt;" connectedEdges="1"
              needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
