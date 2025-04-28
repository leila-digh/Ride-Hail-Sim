#include "RideShare.h"
#include "View.h"
#include <iomanip>


RideShare::RideShare(): driverList(Driver::compRatings), customerList(Customer::compNames), drawableList(Drawable::compare){

}

RideShare::~RideShare(){
    driverList.clear();
    customerList.clear();
    //drawableList.clear();
    //drawable is already in either the driverlist or customerlist; it is freed as well

}

bool RideShare::addDriver(const string& name, Size size, int rating, const Location& loc){
    if(driverList.isFull()){
        return false;
    }
    
    Driver* newDriver = new Driver(name, rating, size, loc);

    driverList.add(newDriver);
    //add this driver to drawable so it's drawn on the view
    drawableList.add(newDriver); 
    return true;
}

bool RideShare::addCustomer(const string& name, int rating, const Location& loc){
    if(customerList.isFull()){
        return false;
    }
    
    Customer* newCustomer = new Customer(name, rating, loc);

    customerList.add(newCustomer);
    //add this customer so it's drawn on the view
    drawableList.add(newCustomer); 
    return true;
}

Customer* RideShare::getCustomer(const string& id) const{
    Customer* temp = nullptr;
    for(int i=0; i < customerList.getSize(); i++){
        if(customerList.get(i)->getId() == id){
            temp = customerList.get(i);
            break;
        }
    }
    return temp;
}

Driver* RideShare::findRide(const int rating, Size size, const Location& loc) const{
    Driver* temp = nullptr;
    int currClosest = MAX_BLOCKS;
    for(int i=0; i < driverList.getSize(); i++){
            Driver* currDriver = driverList.get(i);
            if(currDriver->match(size, rating)){
                if(currDriver->getLocation().getDistance(loc) < currClosest){
                    currClosest = currDriver->getLocation().getDistance(loc);
                    temp = currDriver;
                }
                
            }
        }

    return temp;
}

void RideShare::printCustomers() const{
    cout<< "\nCustomers List: " << endl;
    cout << "=================" << endl;
    for(int i=0; i < customerList.getSize(); i++){
        cout<< i+1 << ")" << endl;
        customerList.get(i)->print();
    } 
    cout << "~~~~~~~~~~~~~~~~~" << endl;
}

void RideShare::printDrivers() const{
    cout<< "\nDrivers List: " << endl;
    cout << "=================" << endl;
    for(int i=0; i < driverList.getSize(); i++){
        cout<< i+1 << ")" << endl;
        driverList.get(i)->print();
    } 
    cout << "~~~~~~~~~~~~~~~~~" << endl;
}

void RideShare::draw(View& v){
    for(int i=0; i < drawableList.getSize(); i++){
        drawableList.get(i)->draw(v);
    }
}