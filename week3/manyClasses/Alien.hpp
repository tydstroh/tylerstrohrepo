//
//  Alien.hpp
//  Assignment1
//
//  Created by Tyler Stroh on 2/22/16.
//
//

#ifndef Alien_hpp
#define Alien_hpp

#include <stdio.h>

#include "ofMain.h"

#endif /* Alien_hpp */

class Alien{
public:
    
    //variables
    int xPos;
    int yPos;
    int r, g, b, alpha;
    int diam;
    int velX, velY;
    
    //constructor
    Alien();
    
    //methods
    void setup(float mouseX, float mouseY);
    void update();
    void draw();
    
};