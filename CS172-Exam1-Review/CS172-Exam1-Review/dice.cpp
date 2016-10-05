//
//  dice.cpp
//  CS172-Exam1-Review
//
//  Created by Heidi Wiebers on 10/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "dice.hpp"
#include <ctime>
#include <cstdlib>

Dice::Dice(int Sides)
{
    srand(time(NULL));
    int x=rand()%6;
    int rolls = 0;
}
int Dice::numberofsides
{
    return Sides;
}
int Dice::numberofrolls
{
    return rolls;
}
int Dice::getnumberofsides()
{
    return sides;
}

int Dice::Roll()
{
    return
}
int Dice::getRolls()
{
    
}
int Dice::getSides()
{
    
}


//
//  Dice.cpp
//  CS172
//
//  Created by Stephen Johnson on 10/4/16.
//  Copyright © 2016 Glacier Peak Studios LLC. All rights reserved.
//

#include "Dice.hpp"
#include <iostream>
#include <cstdlib>

Dice::Dice(int sides)
{
    //Check that the number of sides is valid
    if (sides <= 0)
    {
        sides = 6;
    }
    
    numSides = sides;
    numRolls = 0;
}

int Dice::Roll()
{
    //Increment the number of times this dice was rolled.
    numRolls++;
    
    //The random number generate is seeded in main
    return (rand() % numSides) + 1;
}
int Dice::GetRolls()
{
    return numRolls;
}

int Dice::GetSides()
{
    return numSides;
}




