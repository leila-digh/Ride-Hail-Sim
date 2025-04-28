#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
#include "defs.h"
#include "Location.h"

using namespace std;

class User{
    public:
        //constructor
        User(char, int, const string& , int, const Location&);

        //getters
        string getId() const;
        string getName() const;
        int getRating() const;
        Location getLocation() const;

        //setters
        void setRating(const int);
        void setLocation(const Location);
        void setLocation(int x, int y);

        //print
        void print();


    protected:
        string id;
        string name;
        int rating; 
        Location loc;
};
#endif