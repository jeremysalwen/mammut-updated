/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  26 Mar 2012 11:59:36pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_SPLITREALIMAG_SPLITREALIMAG_882C8D4F__
#define __JUCER_HEADER_SPLITREALIMAG_SPLITREALIMAG_882C8D4F__

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
class SplitRealImag  : public Component,
                       public ButtonListener
{
public:
    //==============================================================================
    SplitRealImag ();
    ~SplitRealImag();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    GroupComponent* groupComponent;
    TextButton* textButton;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    SplitRealImag (const SplitRealImag&);
    const SplitRealImag& operator= (const SplitRealImag&);
};


#endif   // __JUCER_HEADER_SPLITREALIMAG_SPLITREALIMAG_882C8D4F__
