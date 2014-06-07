#include "ofApp.h"


#include "ofApp.h"


//------------------------------------------------------------------------------
void ofApp::setup()
{
    
    futbolin.setup("/dev/tty.usbmodem1441");
    
    ofAddListener(futbolin.tengoDatos, this, &ofApp::marcaGol);
}

//------------------------------------------------------------------------------
void ofApp::update()
{
    futbolin.update();
}

//------------------------------------------------------------------------------
void ofApp::draw()
{
    
    
}

//------------------------------------------------------------------------------
void ofApp::marcaGol(int & equipo){
    cout << "goooool del equipo " << equipo << endl;
}