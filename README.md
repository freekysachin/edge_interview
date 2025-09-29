# Welcome!
Exercise to evaluate C++ programming skills, understanding of core language features, ability to work with the GStreamer multimedia framework.

Please feel free to ask questions at any point. We're interested in your thought process, not just the final solution.

## Part 1: C++ Video Frame Processing (20-25 minutes)
You have been provided with some starter files: main.cpp (add a namespace FrameDebugger), ImageFrame.h, ImageFrame.cpp FrameProcessor.h, and FrameProcessor.cpp. Your task is to complete the implementation of the corresponding cpp files.

Your Tasks:

In main.cpp - create object of ImageFrame and FrameProcessor & use the inspectFrame method before & after calling the process method of FrameProcessor class. 
In main.cpp - Implement FrameDebugger::inspectFrame:

ImageFrame: This class will represent a single video frame.
ImageFrame.cpp -> In the constructor, dynamically allocate a memory buffer for pixel data (p_data) using a raw pointer.
ImageFrame.cpp -> In the destructor, ensure this memory is correctly deallocated to prevent leaks.

FrameProcessor: This class will have a single method process (you can perform any tranformation on frame here)
FrameProcessor.cpp -> Implement FrameProcessor::process: This method receives a pointer to an ImageFrame.


## Part 2: GStreamer Pipeline Construction
For this part, you can write C++ code or pseudo-code.

Your Task:

Write a function that programmatically builds and runs the following GStreamer pipeline:
that takes the video (.h264 file formated) -> vidconv(choose hw or sw accordingly) -> autovideosink
attach a simple probe to get the buffer and print the inspected buffer info on console
