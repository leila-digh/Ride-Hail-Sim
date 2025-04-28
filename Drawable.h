#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <string>
#include <iostream>
#include "defs.h"
#include "View.h"

using namespace std;

class Drawable{
    public:
        Drawable(int);
        virtual void draw(View&) =0;
        static int compare(Drawable* d1, Drawable* d2);


    private:
        int layer;

};



#endif