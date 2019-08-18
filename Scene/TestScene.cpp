#include "TestScene.h"
#include "../core/Game.h"

#include <iostream>

TestScene::TestScene()
{
    //ctor
}

TestScene::~TestScene()
{
    //dtor
}


void TestScene::load()
{
    lune= IMG_Load("data/sprite/lune.png");
    std::cerr<<"load"<<std::endl;
}

void TestScene::unload()
{
    SDL_FreeSurface(lune);
    std::cerr<<"unload"<<std::endl;
}

void TestScene::input()
{
    switch(event.type)
        {
            case SDL_QUIT:
                game->quit();
                break;
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)//  Gestion des touches du clavier
                {
                    case SDLK_ESCAPE:
                        event.key.keysym.sym=0;//evite les pb de repetition de touche
                        game->quit();
                        break;
                }
        }

}

void TestScene::update(int dt)
{

}

void TestScene::draw()
{
    SDL_Rect position;
    position.x=SDL_GetWindowSurface(ecran)->w/2-lune->w/2;
    position.y=SDL_GetWindowSurface(ecran)->h/2-lune->h/2;
    SDL_UpperBlit(lune,NULL,SDL_GetWindowSurface(ecran),&position);
}
