#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    
    ofGLFWWindowSettings settings;
    settings.resizable = false;
    settings.width = 760;
    settings.height = 480;
    ofCreateWindow(settings);
//    ofSetupOpenGL(1024,768,OF_WINDOW);            // <-------- setup the GL context
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
