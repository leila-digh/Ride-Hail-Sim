
#include "Driver.h"
#include "View.h"
#include <iomanip>

const int Driver::driverLayer = 1;
int Driver::nextId = 0;
const char Driver::code = 'D';


Driver::Driver(const string& name, int rating, Size size, const Location& loc):
Drawable(driverLayer), 
User(code, ++nextId, name, rating, loc), size(size)
{}

bool Driver::match(Size s, int r){
    int difference = abs(rating - r);
    if(size >= s && difference <= 2){
        return true;
    }
    return false;
}

Size Driver::getSize() const{
    return size;
}

int Driver::getDistance(const Location& l){
    return loc.getDistance(l);
}

void Driver::draw(View& v){
    v.drawDriver(loc.x, loc.y, name[0]);
}