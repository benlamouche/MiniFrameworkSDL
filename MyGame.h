#ifndef MYGAME_H
#define MYGAME_H

#include "core/Game.h"


class MyGame : public Game
{
    public:
        MyGame();
        virtual ~MyGame();

    protected:

    private:
        Scene* testScene;

};

#endif // MYGAME_H
