/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  7 May 2011 2:27:42pm

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
//[/Headers]

#include "DasButtons.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DasButtons::DasButtons ()
    : textButton1 (0),
      textButton4 (0),
      textButton2 (0),
      textButton5 (0),
      textButton6 (0),
      textButton7 (0),
      toggleButton3 (0),
      slider (0)
{
    addAndMakeVisible (textButton1 = new TextButton (T("Play")));
    textButton1->addListener (this);
    textButton1->setColour (TextButton::buttonColourId, Colour (0xffbbbbff));
    textButton1->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    textButton1->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (textButton4 = new TextButton (T("Play")));
    textButton4->setButtonText (T("<"));
    textButton4->addListener (this);
    textButton4->setColour (TextButton::buttonColourId, Colour (0xffbbbbff));
    textButton4->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    textButton4->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (textButton2 = new TextButton (T("Play")));
    textButton2->setButtonText (T("Stop"));
    textButton2->addListener (this);
    textButton2->setColour (TextButton::buttonColourId, Colour (0xffbbbbff));
    textButton2->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    textButton2->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (textButton5 = new TextButton (T("Play")));
    textButton5->setButtonText (T(">"));
    textButton5->addListener (this);
    textButton5->setColour (TextButton::buttonColourId, Colour (0xffbbbbff));
    textButton5->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    textButton5->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (textButton6 = new TextButton (T("Play")));
    textButton6->setButtonText (T("Undo"));
    textButton6->addListener (this);
    textButton6->setColour (TextButton::buttonColourId, Colour (0xffbbbbff));
    textButton6->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    textButton6->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (textButton7 = new TextButton (T("Play")));
    textButton7->setButtonText (T("Redo"));
    textButton7->addListener (this);
    textButton7->setColour (TextButton::buttonColourId, Colour (0xffbbbbff));
    textButton7->setColour (TextButton::buttonOnColourId, Colour (0xff4444ff));
    textButton7->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (toggleButton3 = new ToggleButton (T("new toggle button")));
    toggleButton3->setButtonText (T("Zoom"));
    toggleButton3->addListener (this);

    addAndMakeVisible (slider = new Slider (T("new slider")));
    slider->setRange (0, 100, 0);
    slider->setSliderStyle (Slider::LinearBar);
    slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);

    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

DasButtons::~DasButtons()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (textButton1);
    deleteAndZero (textButton4);
    deleteAndZero (textButton2);
    deleteAndZero (textButton5);
    deleteAndZero (textButton6);
    deleteAndZero (textButton7);
    deleteAndZero (toggleButton3);
    deleteAndZero (slider);

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DasButtons::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DasButtons::resized()
{
    textButton1->setBounds (168, 24, 56, 24);
    textButton4->setBounds (360, 24, 56, 24);
    textButton2->setBounds (232, 24, 56, 24);
    textButton5->setBounds (424, 24, 56, 24);
    textButton6->setBounds (488, 24, 56, 24);
    textButton7->setBounds (552, 48 - 24, 56, 24);
    toggleButton3->setBounds (288, 24, 63, 24);
    slider->setBounds (8, 24, 152, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DasButtons::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton1)
    {
        //[UserButtonCode_textButton1] -- add your button handler code here..
        //[/UserButtonCode_textButton1]
    }
    else if (buttonThatWasClicked == textButton4)
    {
        //[UserButtonCode_textButton4] -- add your button handler code here..
        //[/UserButtonCode_textButton4]
    }
    else if (buttonThatWasClicked == textButton2)
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
        //[/UserButtonCode_textButton2]
    }
    else if (buttonThatWasClicked == textButton5)
    {
        //[UserButtonCode_textButton5] -- add your button handler code here..
        //[/UserButtonCode_textButton5]
    }
    else if (buttonThatWasClicked == textButton6)
    {
        //[UserButtonCode_textButton6] -- add your button handler code here..
        //[/UserButtonCode_textButton6]
    }
    else if (buttonThatWasClicked == textButton7)
    {
        //[UserButtonCode_textButton7] -- add your button handler code here..
        //[/UserButtonCode_textButton7]
    }
    else if (buttonThatWasClicked == toggleButton3)
    {
        //[UserButtonCode_toggleButton3] -- add your button handler code here..
        //[/UserButtonCode_toggleButton3]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void DasButtons::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DasButtons" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="Play" id="2f9e62febab459cb" memberName="textButton1" virtualName=""
              explicitFocusOrder="0" pos="168 24 56 24" bgColOff="ffbbbbff"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="Play" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Play" id="ad2cf6f9ce809584" memberName="textButton4" virtualName=""
              explicitFocusOrder="0" pos="360 24 56 24" bgColOff="ffbbbbff"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="&lt;" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Play" id="1b64f6c4c481a1a4" memberName="textButton2" virtualName=""
              explicitFocusOrder="0" pos="232 24 56 24" bgColOff="ffbbbbff"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="Stop" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Play" id="dfcb3e8de1aeee04" memberName="textButton5" virtualName=""
              explicitFocusOrder="0" pos="424 24 56 24" bgColOff="ffbbbbff"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="&gt;" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Play" id="de07de2d4bcd064b" memberName="textButton6" virtualName=""
              explicitFocusOrder="0" pos="488 24 56 24" bgColOff="ffbbbbff"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="Undo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Play" id="8114230c27263ed" memberName="textButton7" virtualName=""
              explicitFocusOrder="0" pos="552 48r 56 24" bgColOff="ffbbbbff"
              bgColOn="ff4444ff" textCol="ff000000" buttonText="Redo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="new toggle button" id="eed65434d461870c" memberName="toggleButton3"
                virtualName="" explicitFocusOrder="0" pos="288 24 63 24" buttonText="Zoom"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="new slider" id="d20588cd0282154f" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="8 24 152 24" min="0" max="100" int="0"
          style="LinearBar" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
