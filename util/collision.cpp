#include "collision.h"

bool pointCollision(int x,int y,SDL_Rect box){
    if (x >= box.x
    && x < box.x + box.w
    && y >= box.y
    && y < box.y + box.h)
       return true;
   else
       return false;
}
bool boxCollision(SDL_Rect box1,SDL_Rect box2){
   if((box2.x >= box1.x + box1.w)      // trop à droite
    || (box2.x + box2.w <= box1.x) // trop à gauche
    || (box2.y >= box1.y + box1.h) // trop en bas
    || (box2.y + box2.h <= box1.y))  // trop en haut
          return false;
   else
          return true;
}

bool CollisionDroiteSeg(SDL_Point A,SDL_Point B,SDL_Point O,SDL_Point P)
{
  SDL_Point AO,AP,AB;
  AB.x = B.x - A.x;
  AB.y = B.y - A.y;
  AP.x = P.x - A.x;
  AP.y = P.y - A.y;
  AO.x = O.x - A.x;
  AO.y = O.y - A.y;
  if ((AB.x*AP.y - AB.y*AP.x)*(AB.x*AO.y - AB.y*AO.x)<0)
     return true;
  else
     return false;
}

bool CollisionSegSeg(SDL_Point A,SDL_Point B,SDL_Point O,SDL_Point P)
{
  if (CollisionDroiteSeg(A,B,O,P)==false)
     return false;  // inutile d'aller plus loin si le segment [OP] ne touche pas la droite (AB)
  if (CollisionDroiteSeg(O,P,A,B)==false)
     return false;
  return true;
}

bool CollisionSegSeg(int Ax ,int Ay ,int Bx ,int By,int Ox ,int Oy,int Px ,int Py)
{
    SDL_Point A = {Ax,Ay};
    SDL_Point B = {Bx,By};
    SDL_Point O = {Ox,Oy};
    SDL_Point P = {Px,Py};
    return CollisionSegSeg(A,B,O,P);
}
