/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  27 Mar 2012 12:25:24am

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
#include "DerivativeAmp.h"
#define Slider DasSlider
//[/Headers]

#include "DerivativeAmp.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DerivativeAmp::DerivativeAmp ()
    : Component (L"DerivativeAmp"),
      groupComponent (0),
      amp_derivate_multiplierslider (0),
      label (0),
      textButton (0),
      resetbutton (0),
      label2 (0),
      textButton2 (0)
{
    addAndMakeVisible (groupComponent = new GroupComponent (L"new group",
                                                            L"Derivate Amp"));
    groupComponent->setTextLabelPosition (Justification::centredLeft);
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0xb0000000));

    addAndMakeVisible (amp_derivate_multiplierslider = new Slider (L"new slider"));
    amp_derivate_multiplierslider->setRange (-5, 5, 0);
    amp_derivate_multiplierslider->setSliderStyle (Slider::LinearHorizontal);
    amp_derivate_multiplierslider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    amp_derivate_multiplierslider->setColour (Slider::backgroundColourId, Colour (0x956565));
    amp_derivate_multiplierslider->setColour (Slider::thumbColourId, Colour (0x7dfffcfc));
    amp_derivate_multiplierslider->setColour (Slider::textBoxBackgroundColourId, Colour (0xffffff));
    amp_derivate_multiplierslider->addListener (this);

    addAndMakeVisible (label = new Label (L"new label",
                                          L"Amp derivate multiplier (-5 5)"));
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
    textButton->setColour (TextButton::buttonColourId, Colour (0x39bbbbff));

    addAndMakeVisible (resetbutton = new TextButton (L"resetbutton"));
    resetbutton->setButtonText (L"reset");
    resetbutton->addListener (this);
    resetbutton->setColour (TextButton::buttonColourId, Colour (0x42bbbbff));

    addAndMakeVisible (label2 = new Label (L"new label",
                                           L"Replaces the amplitude spectrum with its derivative (slope). You may specify a gain factor.\n"));
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

DerivativeAmp::~DerivativeAmp()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (groupComponent);
    deleteAndZero (amp_derivate_multiplierslider);
    deleteAndZero (label);
    deleteAndZero (textButton);
    deleteAndZero (resetbutton);
    deleteAndZero (label2);
    deleteAndZero (textButton2);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DerivativeAmp::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    fillit();
    //[/UserPaint]
}

void DerivativeAmp::resized()
{
    groupComponent->setBounds (0, 0, 840, 112);
    amp_derivate_multiplierslider->setBounds (216, 16, 616, 24);
    label->setBounds (16, 16, 240, 24);
    textButton->setBounds (8, 48, 288, 56);
    resetbutton->setBounds (416, 48, 150, 24);
    label2->setBounds (576, 48, 247, 56);
    textButton2->setBounds (312, 48, 96, 56);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DerivativeAmp::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == amp_derivate_multiplierslider)
    {
        //[UserSliderCode_amp_derivate_multiplierslider] -- add your slider handling code here..
      setval(derivateamp,amp_derivate_multiplier);
        //[/UserSliderCode_amp_derivate_multiplierslider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void DerivativeAmp::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
      doit(derivate_amp_ok);
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == resetbutton)
    {
        //[UserButtonCode_resetbutton] -- add your button handler code here..
      resetval(derivateamp,amp_derivate_multiplier);
        //[/UserButtonCode_resetbutton]
    }
    else if (buttonThatWasClicked == textButton2)
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
      redoit(derivate_amp_ok);
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

<JUCER_COMPONENT documentType="Component" className="DerivativeAmp" componentName="DerivativeAmp"
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <GROUPCOMPONENT name="new group" id="83715a9bd6b279b7" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="0 0 840 112" outlinecol="b0000000"
                  title="Derivate Amp" textpos="33"/>
  <SLIDER name="new slider" id="d94fba49aa3b2756" memberName="amp_derivate_multiplierslider"
          virtualName="" explicitFocusOrder="0" pos="216 16 616 24" bkgcol="956565"
          thumbcol="7dfffcfc" textboxbkgd="ffffff" min="-5" max="5" int="0"
          style="LinearHorizontal" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="4a13b2f2f9f57dfa" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 16 240 24" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Amp derivate multiplier (-5 5)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="4b31987a13cf2a33" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="8 48 288 56" bgColOff="39bbbbff"
              buttonText="Do it!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="resetbutton" id="763f7adeb3248d95" memberName="resetbutton"
              virtualName="" explicitFocusOrder="0" pos="416 48 150 24" bgColOff="42bbbbff"
              buttonText="reset" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="24e9fb8e945ddbae" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="576 48 247 56" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Replaces the amplitude spectrum with its derivative (slope). You may specify a gain factor.&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="10562b9b17841d7c" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="312 48 96 56" bgColOff="40bbbbff"
              buttonText="Redo it!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
