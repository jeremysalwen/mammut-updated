/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  27 Mar 2012 12:26:48am

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
#include "transformheader.h"
#include "Threshold.h"
#define Slider DasSlider
//[/Headers]

#include "Threshold.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Threshold::Threshold ()
    : Component (L"Threshold"),
      groupComponent (0),
      threshold_levelslider (0),
      label (0),
      textButton (0),
      toggleButton (0),
      resetbutton (0),
      label2 (0),
      textButton2 (0)
{
    addAndMakeVisible (groupComponent = new GroupComponent (L"new group",
                                                            L"Threshold"));
    groupComponent->setTextLabelPosition (Justification::centredLeft);
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0xb0000000));

    addAndMakeVisible (threshold_levelslider = new Slider (L"new slider"));
    threshold_levelslider->setRange (0, 10, 0);
    threshold_levelslider->setSliderStyle (Slider::LinearHorizontal);
    threshold_levelslider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    threshold_levelslider->setColour (Slider::backgroundColourId, Colour (0x956565));
    threshold_levelslider->setColour (Slider::thumbColourId, Colour (0x6efffcfc));
    threshold_levelslider->setColour (Slider::textBoxBackgroundColourId, Colour (0xffffff));
    threshold_levelslider->addListener (this);

    addAndMakeVisible (label = new Label (L"new label",
                                          L"Threshold level (0-10)"));
    label->setFont (Font (15.0000f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0x0));
    label->setColour (Label::textColourId, Colours::black);
    label->setColour (Label::outlineColourId, Colour (0x0));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textButton = new TextButton (L"new button"));
    textButton->setButtonText (L"Do it!");
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0x40bbbbff));

    addAndMakeVisible (toggleButton = new ToggleButton (L"new toggle button"));
    toggleButton->setButtonText (L"Remove above threshold");
    toggleButton->addListener (this);

    addAndMakeVisible (resetbutton = new TextButton (L"resetbutton"));
    resetbutton->setButtonText (L"reset");
    resetbutton->addListener (this);
    resetbutton->setColour (TextButton::buttonColourId, Colour (0x3bbbbbff));

    addAndMakeVisible (label2 = new Label (L"new label",
                                           L"Removes all partials below a given amplitude threshold."));
    label2->setFont (Font (15.0000f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::backgroundColourId, Colour (0x0));
    label2->setColour (Label::textColourId, Colours::black);
    label2->setColour (Label::outlineColourId, Colour (0x0));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textButton2 = new TextButton (L"new button"));
    textButton2->setButtonText (L"Redo it!");
    textButton2->addListener (this);
    textButton2->setColour (TextButton::buttonColourId, Colour (0x40bbbbff));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    buttonClicked(resetbutton);
#undef Slider
    //[/Constructor]
}

Threshold::~Threshold()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (groupComponent);
    deleteAndZero (threshold_levelslider);
    deleteAndZero (label);
    deleteAndZero (textButton);
    deleteAndZero (toggleButton);
    deleteAndZero (resetbutton);
    deleteAndZero (label2);
    deleteAndZero (textButton2);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Threshold::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    fillit();
    //[/UserPaint]
}

void Threshold::resized()
{
    groupComponent->setBounds (0, 0, 840, 112);
    threshold_levelslider->setBounds (168, 16, 656, 24);
    label->setBounds (16, 16, 240, 24);
    textButton->setBounds (200, 48, 192, 56);
    toggleButton->setBounds (16, 48, 168, 56);
    resetbutton->setBounds (472, 80, 150, 24);
    label2->setBounds (656, 48, 184, 56);
    textButton2->setBounds (392, 48, 72, 56);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Threshold::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == threshold_levelslider)
    {
        //[UserSliderCode_threshold_levelslider] -- add your slider handling code here..
      setval(threshold,threshold_level);
        //[/UserSliderCode_threshold_levelslider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void Threshold::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
      doit(threshold_ok);
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == toggleButton)
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
      threshold_remove_above_threshold=toggleButton->getToggleState();
        //[/UserButtonCode_toggleButton]
    }
    else if (buttonThatWasClicked == resetbutton)
    {
        //[UserButtonCode_resetbutton] -- add your button handler code here..
      resetval(threshold,threshold_level);
      toggleButton->setToggleState(threshold_remove_above_threshold_default,true);
        //[/UserButtonCode_resetbutton]
    }
    else if (buttonThatWasClicked == textButton2)
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
      redoit(threshold_ok);
        //[/UserButtonCode_textButton2]
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

<JUCER_COMPONENT documentType="Component" className="Threshold" componentName="Threshold"
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <GROUPCOMPONENT name="new group" id="a0c06752986786f5" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="0 0 840 112" outlinecol="b0000000"
                  title="Threshold" textpos="33"/>
  <SLIDER name="new slider" id="338be2ed0b970930" memberName="threshold_levelslider"
          virtualName="" explicitFocusOrder="0" pos="168 16 656 24" bkgcol="956565"
          thumbcol="6efffcfc" textboxbkgd="ffffff" min="0" max="10" int="0"
          style="LinearHorizontal" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="7d14bfd701dd86d5" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 16 240 24" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Threshold level (0-10)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="e0dac73878d1d3fd" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="200 48 192 56" bgColOff="40bbbbff"
              buttonText="Do it!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="new toggle button" id="5b39c2ca0662e413" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="16 48 168 56" buttonText="Remove above threshold"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="resetbutton" id="36e6d82508df27b0" memberName="resetbutton"
              virtualName="" explicitFocusOrder="0" pos="472 80 150 24" bgColOff="3bbbbbff"
              buttonText="reset" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="f7781de0ab40b4c0" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="656 48 184 56" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Removes all partials below a given amplitude threshold."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="10562b9b17841d7c" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="392 48 72 56" bgColOff="40bbbbff"
              buttonText="Redo it!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
