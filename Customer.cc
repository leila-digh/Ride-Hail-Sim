
#include "Customer.h"
#include "Driver.h"
#include "View.h"
#include <iomanip>

const int Customer::custLayer = 3;
int Customer::nextId = 0;
const char Customer::code = 'C';

Customer::Customer(const string& n, int r, const Location& l): 
Drawable(custLayer), 
User(code, ++nextId, n, r, l){}


// void Customer::print(){
//     cout<<"Customer: "<<left<<setw(10)<<name;
//     User::print();
// }

void Customer::draw(View& v){
    //v.drawOnMap(*this);
    v.drawCustomer(loc.x, loc.y, name[0]);
}

