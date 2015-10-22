/* Danbi Youn */

#include <iostream>
#include "danbiY.h"


void makeBullet(int ab, int bc)
{   
    Bullet *b;
    b->s.center.x = (float)ab;
    b->s.center.y = (float)bc;
    b->velocity.x = 4.0;
    b->velocity.y = 1.0;
}

