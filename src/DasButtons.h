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

#ifndef __JUCER_HEADER_DASBUTTONS_DASBUTTONS_B858614D__
#define __JUCER_HEADER_DASBUTTONS_DASBUTTONS_B858614D__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DasButtons  : public Component,
                    public ButtonListener,
                    public SliderListener
{
public:
    //==============================================================================
    DasButtons ();
    ~DasButtons();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void sliderValueChanged (Slider* sliderThatWasMoved);


    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    TextButton* textButton1;
    TextButton* textButton4;
    TextButton* textButton2;
    TextButton* textButton5;
    TextButton* textButton6;
    TextButton* textButton7;
    ToggleButton* toggleButton3;
    Slider* slider;

    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    DasButtons (const DasButtons&);
    const DasButtons& operator= (const DasButtons&);
};


#endif   // __JUCER_HEADER_DASBUTTONS_DASBUTTONS_B858614D__
