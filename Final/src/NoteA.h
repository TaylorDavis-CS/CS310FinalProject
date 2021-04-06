#pragma once
#include "ofMain.h"
#include "Notes.h"

class NoteA : public Notes{
public:
    NoteA(string s){
        this->x = 20;
        this->y = -this->size;
        this->r = 255;
        this->g = 0;
        this->b = 0;
        this->button = 'A';
        this->player.load(s);
    }
    void draw(){
        ofSetColor(r, g, b);
        ofDrawCircle(this->x, this->y, this->size);
    }
};
