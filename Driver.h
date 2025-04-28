#ifndef DRIVER_H
#define DRIVER_H

#include <string>
#include <iostream>
#include "defs.h"
#include "User.h"
#include "Drawable.h"

using namespace std;

class Driver: public User, public Drawable {
    public:
        Driver(const string& name, int rating = 5, Size size = small, const Location& loc = Location());

        bool match(Size s, int r);
        int getDistance(const Location& l);
        Size getSize() const;
        void draw(View&);

        static int compRatings(Driver* d1, Driver* d2){
            return d1->getRating() < d2->getRating();
        }

        static void resetNextId(){
            nextId = 0;
        }

    private:
        Size size;
        static const char code;
        static const int driverLayer;
        static int nextId;
};
#endif