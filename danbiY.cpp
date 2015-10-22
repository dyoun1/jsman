/* Danbi Youn */

#include <iostream>
#include "danbiY.h"


void makeBullet(Bullet *b, int ab, int bc)
{   
    
    b->s.center.x = (float)ab;
    b->s.center.y = (float)bc;
    b->velocity.x = 4.0;
    b->velocity.y = 1.0;
}

