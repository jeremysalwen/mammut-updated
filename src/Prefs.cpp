/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  7 May 2011 2:31:05pm

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
#include "juce.h"
#include "juceplay.h"
//[/Headers]

#include "Prefs.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Prefs::Prefs ()
    : soundonoffButton (0),
      movingcameraButton (0),
      animationButton (0),
      pictureButton (0),
      loopButton (0),
      audioSettingsButton (0)
{
    addAndMakeVisible (soundonoffButton = new ToggleButton (T("new toggle button")));
    soundonoffButton->setButtonText (T("Startup Sound"));
    soundonoffButton->addListener (this);
    soundonoffButton->setToggleState (true, false);

    addAndMakeVisible (movingcameraButton = new ToggleButton (T("new toggle button")));
    movingcameraButton->setButtonText (T("Moving Camera"));
    movingcameraButton->addListener (this);
    movingcameraButton->setToggleState (true, false);

    addAndMakeVisible (animationButton = new ToggleButton (T("new toggle button")));
    animationButton->setButtonText (T("Animation"));
    animationButton->addListener (this);
    animationButton->setToggleState (true, false);

    addAndMakeVisible (pictureButton = new ToggleButton (T("new toggle button")));
    pictureButton->setButtonText (T("Background Picture"));
    pictureButton->addListener (this);
    pictureButton->setToggleState (true, false);

    addAndMakeVisible (loopButton = new ToggleButton (T("new toggle button")));
    loopButton->setButtonText (T("Loop playing"));
    loopButton->addListener (this);
    loopButton->setToggleState (true, false);

    addAndMakeVisible (audioSettingsButton = new TextButton (T("new button")));
    audioSettingsButton->setButtonText (T("Audio Settings"));
    audioSettingsButton->addListener (this);
    audioSettingsButton->setColour (TextButton::buttonColourId, Colour (0x21bbbbff));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (200, 230);

    //[Constructor] You can add your own custom stuff here..
    propertiesfile=PropertiesFile::createDefaultAppPropertiesFile("mammut",".prefs",String::empty,false,0,PropertiesFile::storeAsXML);
    //propertiesfile->setValue("tes",54);
    //printf("get: -%d-\n",propertiesfile->getIntValue("tes"));
    //printf("Getting: %d\n",propertiesfile->getBoolValue(soundonoffButton->getButtonText(),true)==true?1:0);

    soundonoffButton->setToggleState(propertiesfile->getBoolValue(soundonoffButton->getButtonText().replaceCharacters(String(" "),String("_")),true),true);
    pictureButton->setToggleState(propertiesfile->getBoolValue(pictureButton->getButtonText().replaceCharacters(String(" "),String("_")),true),true);
    movingcameraButton->setToggleState(propertiesfile->getBoolValue(movingcameraButton->getButtonText().replaceCharacters(String(" "),String("_")),true),true);
    animationButton->setToggleState(propertiesfile->getBoolValue(animationButton->getButtonText().replaceCharacters(String(" "),String("_")),true),true);
    loopButton->setToggleState(propertiesfile->getBoolValue(loopButton->getButtonText().replaceCharacters(String(" "),String("_")),true),true);
    //[/Constructor]
}

Prefs::~Prefs()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (soundonoffButton);
    deleteAndZero (movingcameraButton);
    deleteAndZero (animationButton);
    deleteAndZero (pictureButton);
    deleteAndZero (loopButton);
    deleteAndZero (audioSettingsButton);

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Prefs::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0x9cb1886c));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Prefs::resized()
{
    soundonoffButton->setBounds (32, 24, 150, 24);
    movingcameraButton->setBounds (32, 120, 150, 24);
    animationButton->setBounds (32, 88, 150, 24);
    pictureButton->setBounds (32, 56, 150, 24);
    loopButton->setBounds (32, 152, 150, 24);
    audioSettingsButton->setBounds (24, 192, 158, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Prefs::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == soundonoffButton)
    {
        //[UserButtonCode_soundonoffButton] -- add your button handler code here..
      prefs_soundonoff=buttonThatWasClicked->getToggleState();
      //sleep(1);
      propertiesfile->setValue(buttonThatWasClicked->getButtonText().replaceCharacters(String(" "),String("_")),buttonThatWasClicked->getToggleState());
      //propertiesfile->save();
        //[/UserButtonCode_soundonoffButton]
    }
    else if (buttonThatWasClicked == movingcameraButton)
    {
        //[UserButtonCode_movingcameraButton] -- add your button handler code here..
      prefs_movingcamera=buttonThatWasClicked->getToggleState();
      //sleep(1);
      propertiesfile->setValue(buttonThatWasClicked->getButtonText().replaceCharacters(String(" "),String("_")),buttonThatWasClicked->getToggleState());
      //propertiesfile->save();
        //[/UserButtonCode_movingcameraButton]
    }
    else if (buttonThatWasClicked == animationButton)
    {
        //[UserButtonCode_animationButton] -- add your button handler code here..
      prefs_animation=buttonThatWasClicked->getToggleState();
      //sleep(1);
      propertiesfile->setValue(buttonThatWasClicked->getButtonText().replaceCharacters(String(" "),String("_")),buttonThatWasClicked->getToggleState());
      //propertiesfile->save();
        //[/UserButtonCode_animationButton]
    }
    else if (buttonThatWasClicked == pictureButton)
    {
        //[UserButtonCode_pictureButton] -- add your button handler code here..
      prefs_picture=buttonThatWasClicked->getToggleState();
      //sleep(1);
#if 0
      if(prefs_picture==false){
	movingcameraButton->setToggleState(false,true);
	animationButton->setToggleState(false,true);
      }
#endif
      //      sleep(1);
      propertiesfile->setValue(buttonThatWasClicked->getButtonText().replaceCharacters(String(" "),String("_")),buttonThatWasClicked->getToggleState());
      //propertiesfile->save();
        //[/UserButtonCode_pictureButton]
    }
    else if (buttonThatWasClicked == loopButton)
    {
        //[UserButtonCode_loopButton] -- add your button handler code here..
      prefs_loop=buttonThatWasClicked->getToggleState();
      propertiesfile->setValue(buttonThatWasClicked->getButtonText().replaceCharacters(String(" "),String("_")),buttonThatWasClicked->getToggleState());
        //[/UserButtonCode_loopButton]
    }
    else if (buttonThatWasClicked == audioSettingsButton)
    {
        //[UserButtonCode_audioSettingsButton] -- add your button handler code here..
      juceplay_prefs();
        //[/UserButtonCode_audioSettingsButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
bool Prefs::firstRun_questionmark(){
  static bool ret=propertiesfile->getBoolValue("firstrun",true);
  return ret;
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Prefs" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330000013" fixedSize="0" initialWidth="200"
                 initialHeight="230">
  <BACKGROUND backgroundColour="9cb1886c"/>
  <TOGGLEBUTTON name="new toggle button" id="3005e7bf49941d9f" memberName="soundonoffButton"
                virtualName="" explicitFocusOrder="0" pos="32 24 150 24" buttonText="Startup Sound"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="e1c33b935f0cd714" memberName="movingcameraButton"
                virtualName="" explicitFocusOrder="0" pos="32 120 150 24" buttonText="Moving Camera"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="e932c08208ef1e21" memberName="animationButton"
                virtualName="" explicitFocusOrder="0" pos="32 88 150 24" buttonText="Animation"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="f438bc4322b0597b" memberName="pictureButton"
                virtualName="" explicitFocusOrder="0" pos="32 56 150 24" buttonText="Background Picture"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="68e8c733ea45fe96" memberName="loopButton"
                virtualName="" explicitFocusOrder="0" pos="32 152 150 24" buttonText="Loop playing"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="1"/>
  <TEXTBUTTON name="new button" id="e0e3735ae72a6fee" memberName="audioSettingsButton"
              virtualName="" explicitFocusOrder="0" pos="24 192 158 24" bgColOff="21bbbbff"
              buttonText="Audio Settings" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
