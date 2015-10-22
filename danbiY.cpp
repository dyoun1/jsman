/* Danbi Youn */

#include <iostream>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "danbiY.h"




#define rnd() (float)rand() / (float)RAND_MAX

void makeBullet(int x, int y)
{   
    s.center.x = x;
    s.center.y = y;
    velocity.y = rnd() - 0.5;
    velocity.y = 1.0 + rnd() - 0.5;
}
