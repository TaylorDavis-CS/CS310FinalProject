#pragma once
#include "ofMain.h"

class Notes{
public:
    int x;
    int y;
    char button;
    int r;
    int g;
    int b;
    int size = 25;
    string sound;
    ofSoundPlayer player;
    bool isPause = false;
    bool update(char c){
        if(this->isPause == false){
            if(c == this->button && this->y > ofGetHeight()-100 && this->y < ofGetHeight()){
                this->player.play();
                this->y = 0-(rand() % 500);
                return true;
            }
            else if(this->y > ofGetHeight()+this->size){
                this->y = 0-(rand() % 500);
            }
            else{
                y+=2;
                return false;
            }
        }
    }
    void pause(){
        this->isPause = !this->isPause;
    }
    virtual void draw() = 0;
};
