#include "Drawable.h"

Drawable::Drawable(int layer){
    this->layer = layer;
}

int Drawable::compare(Drawable* d1, Drawable* d2){
    if( (d1->layer) == d2->layer){
        return 0;
    }
    else if(d1->layer <d2->layer){
        return -1;
    }
    
    return 1;
    
}