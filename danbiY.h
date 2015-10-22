// danbi Youn

#ifndef _DANBIY_H_
#define _DANBIY_H_
//danbiY.h
//


struct Shape {
    float width, height;
    float radius;
    Vec center;
};

struct Bullet {
    Shape s;
    Vec velocity;
};

extern void makebullet(int x, int y);

#endif
