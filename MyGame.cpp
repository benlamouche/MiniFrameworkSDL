#include "MyGame.h"

#include <iostream>
#include "util/benrandom.h"
#include "menu/SousMenu.h"
#include "menuItem/Quit.h"
#include "menuItem/Continue.h"


#include "Scene/TestScene.h"

#include "core/Game.h"

using namespace std;

//  variables globales



TTF_Font* numberFont=NULL;
TTF_Font* texteFont=NULL;
TTF_Font* menuFont=NULL;

Menu *mPrincipal=NULL;



extern SDL_Color NOIR ;//  fonctionTTF.cpp
extern SDL_Color VERT ;

MyGame::MyGame()
{
    //ctor

// ***********  CHARGEMENT FONT **********************************

    numberFont=TTF_OpenFont("data/Fette.ttf",15);
    texteFont=TTF_OpenFont("data/Augusta.ttf",80);
    menuFont=TTF_OpenFont("data/Fette.ttf",30);


//*********************************** CHARGEMENT SCENE **********************************

    testScene = new TestScene;
    this->setCurrentScene(testScene);
}

MyGame::~MyGame()
{
    //dtor
    //  fermeture du programme déchargement des modules et sprites

    TTF_CloseFont(texteFont);
    TTF_CloseFont(menuFont);
    TTF_CloseFont(numberFont);

}


