#include "User.h"


//constructor
User::User(char code, int id, const string& name, int rating, const Location& loc): name(name), rating(rating), loc(loc){
    this->id = code + to_string(id);
}

//getters
string User::getId() const{
    return id;
}
string User::getName() const{
    return name;
}
int User::getRating() const{
    return rating;
}
Location User::getLocation() const{
    return loc;
}

//setters
void User::setRating(const int r){
    rating = r;
}

void User::setLocation(const Location l){
    loc = l;
}

void User::setLocation(int x, int y){
    loc.setLocation(x,y);
}

void User::print(){
    cout << "Name     " << name <<endl;
    cout << "ID:      " << id <<endl;
    cout << "Rating   " << rating <<endl;
    cout << "Location ";
    loc.print();
    cout << "\n=================" << endl;

}