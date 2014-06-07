#pragma once

#include "ofMain.h"
#include "futbolito.h"


class ofApp: public ofBaseApp
{
public:
    void setup();
    void update();
    void draw();
    
    futbolito futbolin;
    void marcaGol(int & equipo);
};