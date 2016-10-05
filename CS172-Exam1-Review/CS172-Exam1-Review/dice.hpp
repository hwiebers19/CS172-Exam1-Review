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
//this represents a dice of n sides
class Dice
{
private:
    int numSides;
    int numRolls;
    
public:
    
    //creates a dice with the given number of sides.
    //if the sides is less than or equal to 0 then
    //this creates a 6 sided dice.
    Dice(int sides);
    
    //Rolls the dice and returns a random number
    //between 1 and the number of sides on the dice.
    int Roll();
    
    //Returns the number of times this dice was rolled.
    int GetRolls();
    
    //Return the number of sides on this dice.
    int GetSides();
};

#endif /* Dice_hpp */
