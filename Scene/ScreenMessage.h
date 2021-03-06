#ifndef SCREENMESSAGE_H
#define SCREENMESSAGE_H

#include "../core/Scene.h"

class ScreenMessage : public Scene
{
    public:
        ScreenMessage(const char * text,Scene* parent);
        virtual ~ScreenMessage();
        virtual void draw();

        static void loach(const char * text,Scene* parent=NULL);
        static void loachBckGrnd(const char * text,int r,int g, int b);

    protected:
        virtual void load();
        virtual void unload();
        virtual void update(int dt);
    private:
        char m_text[128];
        SDL_Surface *texte;
        int delay;
};

#endif // SCREENMESSAGE_H
