/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  7 May 2011 2:29:07pm

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
#include "Invert.h"
#define Slider DasSlider
//[/Headers]

#include "Invert.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Invert::Invert ()
    : Component (T("Invert")),
      groupComponent (0),
      inversion_block_sizeslider (0),
      label (0),
      textButton (0),
      resetbutton (0),
      label2 (0),
      textButton2 (0)
{
    addAndMakeVisible (groupComponent = new GroupComponent (T("new group"),
                                                            T("Invert")));
    groupComponent->setTextLabelPosition (Justification::centredLeft);
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0xb0000000));

    addAndMakeVisible (inversion_block_sizeslider = new Slider (T("new slider")));
    inversion_block_sizeslider->setRange (0, 100, 0);
    inversion_block_sizeslider->setSliderStyle (Slider::LinearHorizontal);
    inversion_block_sizeslider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    inversion_block_sizeslider->setColour (Slider::backgroundColourId, Colour (0x956565));
    inversion_block_sizeslider->setColour (Slider::thumbColourId, Colour (0x80fffcfc));
    inversion_block_sizeslider->setColour (Slider::textBoxBackgroundColourId, Colour (0xffffff));
    inversion_block_sizeslider->addListener (this);

    addAndMakeVisible (label = new Label (T("new label"),
                                          T("Inversion block size (0-100%)")));
    label->setFont (Font (15.0000f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0x0));
    label->setColour (Label::textColourId, Colours::black);
    label->setColour (Label::outlineColourId, Colour (0x0));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textButton = new TextButton (T("new button")));
    textButton->setButtonText (T("Do it!"));
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0x40bbbbff));

    addAndMakeVisible (resetbutton = new TextButton (T("resetbutton")));
    resetbutton->setButtonText (T("reset"));
    resetbutton->addListener (this);
    resetbutton->setColour (TextButton::buttonColourId, Colour (0x35bbbbff));

    addAndMakeVisible (label2 = new Label (T("new label"),
                                           T("Splits the spectrum into regions with specified size, and turns each of these backwards. If you select a region size of 100%, the entire spectrum will be mirrored around its center. Also, the result is complex conjugated to avoid reversal of the sound.\n\n")));
    label2->setFont (Font (10.7000f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::backgroundColourId, Colour (0x0));
    label2->setColour (Label::textColourId, Colours::black);
    label2->setColour (Label::outlineColourId, Colour (0x0));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textButton2 = new TextButton (T("new button")));
    textButton2->setButtonText (T("Redo it!"));
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

Invert::~Invert()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (groupComponent);
    deleteAndZero (inversion_block_sizeslider);
    deleteAndZero (label);
    deleteAndZero (textButton);
    deleteAndZero (resetbutton);
    deleteAndZero (label2);
    deleteAndZero (textButton2);

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Invert::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    fillit();
    //[/UserPaint]
}

void Invert::resized()
{
    groupComponent->setBounds (0, 0, 840, 112);
    inversion_block_sizeslider->setBounds (216, 16, 608, 24);
    label->setBounds (16, 16, 240, 24);
    textButton->setBounds (8, 48, 152, 56);
    resetbutton->setBounds (320, 48, 150, 24);
    label2->setBounds (472, 48, 376, 56);
    textButton2->setBounds (160, 48, 152, 56);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Invert::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == inversion_block_sizeslider)
    {
        //[UserSliderCode_inversion_block_sizeslider] -- add your slider handling code here..
      setval(invert,inversion_block_size);
        //[/UserSliderCode_inversion_block_sizeslider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void Invert::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
      doit(invert_ok);
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == resetbutton)
    {
        //[UserButtonCode_resetbutton] -- add your button handler code here..
      resetval(invert,inversion_block_size);
        //[/UserButtonCode_resetbutton]
    }
    else if (buttonThatWasClicked == textButton2)
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
      redoit(invert_ok);
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

<JUCER_COMPONENT documentType="Component" className="Invert" componentName="Invert"
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <GROUPCOMPONENT name="new group" id="23693b1ebc276b65" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="0 0 840 112" outlinecol="b0000000"
                  title="Invert" textpos="33"/>
  <SLIDER name="new slider" id="c6ba53b86a9e0057" memberName="inversion_block_sizeslider"
          virtualName="" explicitFocusOrder="0" pos="216 16 608 24" bkgcol="956565"
          thumbcol="80fffcfc" textboxbkgd="ffffff" min="0" max="100" int="0"
          style="LinearHorizontal" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="8449523003f6475c" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 16 240 24" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Inversion block size (0-100%)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="661f8b102ed8bf39" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="8 48 152 56" bgColOff="40bbbbff"
              buttonText="Do it!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="resetbutton" id="2a8b2fac4eb289f9" memberName="resetbutton"
              virtualName="" explicitFocusOrder="0" pos="320 48 150 24" bgColOff="35bbbbff"
              buttonText="reset" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="3ef47dbd664df705" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="472 48 376 56" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Splits the spectrum into regions with specified size, and turns each of these backwards. If you select a region size of 100%, the entire spectrum will be mirrored around its center. Also, the result is complex conjugated to avoid reversal of the sound.&#10;&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="10.7" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="10562b9b17841d7c" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="160 48 152 56" bgColOff="40bbbbff"
              buttonText="Redo it!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
