//Danbi Youn

//danbiY.h
//

#ifndef _DANBIY_H_
#define _DANBIY_H_
struct Vector{
        float x, y, z;
};


struct Sh {
    float width, height;
    float radius;
    Vector center;
};

struct Bullet {
    Sh s;
    Vector velocity;
};

extern void makebullet(int, int);



#endif
