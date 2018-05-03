# Project Development - Thin Ice

#### Update 1: 4/20 - Added Class Header Files

1. Added the following header files:
    - iceBlock.h
    - level.h
    - player.h
    - thinIce.h
2. Object Composition:

        thinIce.h << level.h << iceBlock.h
        thinIce.h << player.h


#### Update 2: 4/26 - Started experimenting with of
1. Changed window title and settings
2. Defined functions to draw objects and update methods

#### Update 3: 4/30 - Refactoring and ofImage troubles
1. Attempted to move Block from separate class to struct within Level
2. Realized the problems with defining multiple methods for a struct within a class and moved Block back to its own class
3. Made changes to ofApp and experimented with ofImage. Faced first Linker Error
4. Fixed multiple merge conflicts that occured due to switching between editors. Using XCode for the remaining of this project.

#### Update 4: 5/2 - More Refactoring and Heartbreak 
1. Refactored for clarity
2. Got first visuals up on screen. Able to display images on screen
    
    a. Limitations with Openframeworks:
    
    - Unable to define ofImage within a class instead of globally in the ofApp class
    - Positioning objects, images, text, etc. is painful because of the lack of relative positioning

    b. Solutions / Workarounds:

    - Create system of relative positioning similar to CSS absolute positioning that relies on ofGetWidth() and ofGetHeight() methods.
3. Faced a total of 13 linker errors over the course of 3 hours in the process of experimenting. Indefinitely broke ability to display images. 

    a. Lessons learnt:

    - Avoid using namespaces while working with Openframeworks.
    - If you have to use namespaces,make it the first thing to check when you get linker errors.
    - Ensure classes are well defined and object decomposition is done well when working with Openframeworks and C++ in general. It can be hard to lose track of nested classes and objects.

    b. Solutions:

    - Import ofxGui
    - Remove all namespaces

4. **Losing Hope** - Entire app crashed on the day of submission after importing ofxGui. None of the previous git commits work by reverting either. 

    a. Problems Faced:

    - None of the underlying classes except _ofApp_ now recognize _ofMain.h_. 
    - None of the images load. "ofMain.h" cannot be imported. 
    - **6:34 AM** - Xcode now has problems with _ostream_ and _istream_ from of headers and dependencies. Error reads, "unknown type name ostream". 

    b. Lessons Learnt:

    - Start early.
    - Do not install, change or remove any dependencies or software while in the process of development. (Issues may likely be caused due to overnight installation of Cocoapods as a part of an XCode update)

5. **RESTARTING** - Attempting to restart project from scratch while optimizing amount of code recycled.