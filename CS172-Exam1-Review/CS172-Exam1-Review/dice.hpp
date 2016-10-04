//
//  dice.hpp
//  CS172-Exam1-Review
//
//  Created by Heidi Wiebers on 10/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef dice_hpp
#define dice_hpp
#include "dice.hpp"
#include <stdio.h>
#include <ctime>
#include <cstdlib>
class Dice{
private:
    int numberofsides;
    int numberofrolls;
    
public:
    int getnumberofsides();
    Dice(int Sides);
    int Roll();
    int getRolls();
    int getSides();
    
    
};

#endif /* dice_hpp */
