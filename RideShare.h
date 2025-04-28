#ifndef RIDESHARE_H
#define RIDESHARE_H
#include "Driver.h"
#include "Customer.h"
#include "List.h"

class RideShare{
    public:
        RideShare();
        ~RideShare();

        bool addDriver(const string& name, Size size, int rating, const Location&);
        bool addCustomer(const string& name, int rating, const Location&);
        Customer* getCustomer(const string& id)const;
        Driver* findRide(const int rating, const Size, const Location&) const;

        void printCustomers() const;
        void printDrivers() const;
        void draw(View&);

    private:
        List <Driver*> driverList;
        List <Customer*> customerList;
        List <Drawable*> drawableList;

        //list template tracks num eleents
};

#endif