/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Dis_filter_pluginAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Dis_filter_pluginAudioProcessorEditor (Dis_filter_pluginAudioProcessor&);
    ~Dis_filter_pluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Dis_filter_pluginAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Dis_filter_pluginAudioProcessorEditor)
};
