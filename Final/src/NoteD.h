#pragma once
#include "ofMain.h"
#include "Notes.h"
class NoteD : public Notes{
public:
    NoteD(string s){
        this->x = 620;
        this->y = -this->size;
        this->r = 0;
        this->g = 0;
        this->b = 0;
        this->button = 'D';
        this->player.load(s);
    }
    void draw(){
        ofSetColor(r, g, b);
        ofDrawCircle(this->x, this->y, this->size);
    }
};
