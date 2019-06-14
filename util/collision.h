#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED

#include <SDL.h>

bool pointCollision(int x,int y,SDL_Rect box);
bool boxCollision(SDL_Rect box1,SDL_Rect box2);
bool CollisionSegSeg(SDL_Point A,SDL_Point B,SDL_Point O,SDL_Point P);
bool CollisionSegSeg(int Ax ,int Ay ,int Bx ,int By,int Ox ,int Oy,int Px ,int Py);


#endif // COLLISION_H_INCLUDED
