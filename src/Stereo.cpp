/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  7 May 2011 2:31:49pm

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
#include "Stereo.h"
#define Slider DasSlider
//[/Headers]

#include "Stereo.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Stereo::Stereo ()
    : Component (T("Stereo")),
      groupComponent3 (0),
      groupComponent2 (0),
      swapphasesbutton (0),
      groupComponent (0),
      crossoverbutton (0),
      label (0),
      switching_probabilityslider (0),
      label2 (0),
      resetbutton (0)
{
    addAndMakeVisible (groupComponent3 = new GroupComponent (T("new group"),
                                                             T("Swap Phases")));

    addAndMakeVisible (groupComponent2 = new GroupComponent (T("new group"),
                                                             T("Stereo")));
    groupComponent2->setTextLabelPosition (Justification::centredLeft);
    groupComponent2->setColour (GroupComponent::outlineColourId, Colour (0xb0000000));

    addAndMakeVisible (swapphasesbutton = new TextButton (T("new button")));
    swapphasesbutton->setTooltip (T("The phases, but not the amplitudes, are interchanged between the two channels."));
    swapphasesbutton->setButtonText (T("Do it!"));
    swapphasesbutton->addListener (this);
    swapphasesbutton->setColour (TextButton::buttonColourId, Colour (0x33bbbbff));

    addAndMakeVisible (groupComponent = new GroupComponent (T("new group"),
                                                            T("Crossover")));
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0x6c000000));

    addAndMakeVisible (crossoverbutton = new TextButton (T("new button")));
    crossoverbutton->setTooltip (T("Swaps blocks between the two channels. The probability, for each frequency bin, that the program will switch between swapping and non-swapping mode as it runs through all the bins, must be specified. Small probability means that large blocks are swapped (or kept)."));
    crossoverbutton->setButtonText (T("Do it!"));
    crossoverbutton->addListener (this);
    crossoverbutton->setColour (TextButton::buttonColourId, Colour (0x35bbbbff));

    addAndMakeVisible (label = new Label (T("new label"),
                                          T("Switching Probability for Crossover")));
    label->setFont (Font (15.0000f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0x0));
    label->setColour (Label::textColourId, Colours::black);
    label->setColour (Label::outlineColourId, Colour (0x0));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (switching_probabilityslider = new Slider (T("new slider")));
    switching_probabilityslider->setRange (0, 1, 0);
    switching_probabilityslider->setSliderStyle (Slider::LinearHorizontal);
    switching_probabilityslider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    switching_probabilityslider->setColour (Slider::thumbColourId, Colour (0x6affffff));
    switching_probabilityslider->setColour (Slider::textBoxBackgroundColourId, Colour (0xffffff));
    switching_probabilityslider->addListener (this);

    addAndMakeVisible (label2 = new Label (T("new label"),
                                           T("(Stereo files only)")));
    label2->setFont (Font (11.2000f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::backgroundColourId, Colour (0x0));
    label2->setColour (Label::textColourId, Colours::black);
    label2->setColour (Label::outlineColourId, Colour (0x0));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (resetbutton = new TextButton (T("Reset")));
    resetbutton->addListener (this);
    resetbutton->setColour (TextButton::buttonColourId, Colour (0x23bbbbff));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);

    //[Constructor] You can add your own custom stuff here..
    buttonClicked(resetbutton);
#undef Slider
    //[/Constructor]
}

Stereo::~Stereo()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (groupComponent3);
    deleteAndZero (groupComponent2);
    deleteAndZero (swapphasesbutton);
    deleteAndZero (groupComponent);
    deleteAndZero (crossoverbutton);
    deleteAndZero (label);
    deleteAndZero (switching_probabilityslider);
    deleteAndZero (label2);
    deleteAndZero (resetbutton);

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Stereo::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Stereo::resized()
{
    groupComponent3->setBounds (656, 16, 176, 88);
    groupComponent2->setBounds (0, 0, 840, 112);
    swapphasesbutton->setBounds (664, 32, 160, 56);
    groupComponent->setBounds (8, 16, 536, 88);
    crossoverbutton->setBounds (16, 64, 472, 32);
    label->setBounds (24, 24, 216, 40);
    switching_probabilityslider->setBounds (248, 32, 288, 24);
    label2->setBounds (560, 48, 80, 24);
    resetbutton->setBounds (488, 64, 48, 32);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Stereo::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == swapphasesbutton)
    {
        //[UserButtonCode_swapphasesbutton] -- add your button handler code here..
      doit(Phaseswap);
        //[/UserButtonCode_swapphasesbutton]
    }
    else if (buttonThatWasClicked == crossoverbutton)
    {
        //[UserButtonCode_crossoverbutton] -- add your button handler code here..
      doit(crossover_ok);
        //[/UserButtonCode_crossoverbutton]
    }
    else if (buttonThatWasClicked == resetbutton)
    {
        //[UserButtonCode_resetbutton] -- add your button handler code here..
      resetval(crossover,switching_probability);
        //[/UserButtonCode_resetbutton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void Stereo::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == switching_probabilityslider)
    {
        //[UserSliderCode_switching_probabilityslider] -- add your slider handling code here..
        //[/UserSliderCode_switching_probabilityslider]
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

<JUCER_COMPONENT documentType="Component" className="Stereo" componentName="Stereo"
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <GROUPCOMPONENT name="new group" id="6882b74670113c4c" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="656 16 176 88" title="Swap Phases"/>
  <GROUPCOMPONENT name="new group" id="4b9c83f8eb4275f" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="0 0 840 112" outlinecol="b0000000"
                  title="Stereo" textpos="33"/>
  <TEXTBUTTON name="new button" id="4c118e3f14b476cb" memberName="swapphasesbutton"
              virtualName="" explicitFocusOrder="0" pos="664 32 160 56" tooltip="The phases, but not the amplitudes, are interchanged between the two channels."
              bgColOff="33bbbbff" buttonText="Do it!" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <GROUPCOMPONENT name="new group" id="dddb75ca65434f07" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="8 16 536 88" outlinecol="6c000000"
                  title="Crossover"/>
  <TEXTBUTTON name="new button" id="cc5b1c61661b71cc" memberName="crossoverbutton"
              virtualName="" explicitFocusOrder="0" pos="16 64 472 32" tooltip="Swaps blocks between the two channels. The probability, for each frequency bin, that the program will switch between swapping and non-swapping mode as it runs through all the bins, must be specified. Small probability means that large blocks are swapped (or kept)."
              bgColOff="35bbbbff" buttonText="Do it!" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <LABEL name="new label" id="c7d57f69ecf13700" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 24 216 40" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Switching Probability for Crossover"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="d3c83e81584e93e" memberName="switching_probabilityslider"
          virtualName="" explicitFocusOrder="0" pos="248 32 288 24" thumbcol="6affffff"
          textboxbkgd="ffffff" min="0" max="1" int="0" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="4ad2c2ab7613cc6e" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="560 48 80 24" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="(Stereo files only)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="11.2" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="Reset" id="38afd0c56a220c50" memberName="resetbutton" virtualName=""
              explicitFocusOrder="0" pos="488 64 48 32" bgColOff="23bbbbff"
              buttonText="Reset" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
