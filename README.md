# Ride-Hail-Sim

This Raid Hailing program is meant to simulate a raid hailing platform like uber or lyft.. This project manages customers and drivers, coordinates ride requests, and simulates an interactive map where users can hail a ride, view available drivers, and see their status on the map.

#### This project demonstrates my understanding of;
1. Object-Oriented Programming (OOP)
2. Software Architecture and Design/ MVC Design Pattern
3. Data Structures
4. Custom Data Structures (like Podify)
5. File I/O Handling in C++
6. Memory Management & Garbage Collection
7. Testing, Debugging, Error Handling
9. Function Pointers
10. Templates


### How it works
On running, the program launches a city map where you have a visual overview of the location of customers and drivers. Customers can enter their ID, select a vehicle size & their destination. The closest driver with their selected vehicle size will be matched to them.

<details>
<summary>Files Included</summary>
README.md 
    This File :)

Makefile   
	
Controller.h, Controller.cc   
	Controls the interaction of RideShare with the View.

Customer.h, Customer.cc  
	A User who can hail a ride. Also a Drawable object.

Driver.h, Driver.cc     
	A User who can give a ride. Also a Drawable object.

Location.h, Location.cc    
	Contains map coordinates as well as the street names.

RideShare.h, RideShare.cc  
	(a) Manages the Drivers and Customers of RideShare.
	(b) Coordinates rideshares from Drivers for Customers.
	(c) Maintains a collection of Drawable objects that it can draw on a View.

User.h, User.cc      
	Contains RideShare user information. Users are either Customers or Drivers.

Drawable.h, Drawable.cc    
	Inheriting from this class will allow other classes to draw themselves on a View. Each
class derived from Drawable will have to decide how to draw itself. Any class implementing Drawable must override the draw(View &) function.

View.h, View.cc      
	Provides a menu, takes input, gives output, and draws a map based on the locations of RideShares Users.

List.h  
	Template class that provides a basic list functionalities to other classes.

defs.h
	Has variable definitions for variables that are used in the whole program (like MAX_ARRAY, MAX_X, MAX_Y and Size enum)
	 MAX_X and MAX_Y gives the size of the city.
	Size gives possible size designations of the Driver’s vehicles (small, medium, large).

main.cc
	 It instantiates a Controller object and calls launch.
</details>


#### Example
``` ./ride    

__|1___2___3___4___5___6___7___8|_  
 1|D _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 2|  _ B _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 3|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 4|  _   _ E _   _ C _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 5|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |I| |S| |_| |_| |   
 6|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 7|  _   _   _   _   _   _ A _  |   
  | |P| |_| |J| |_| |_| |_| |_| |   
 8|_____________________________|   
                                    
                                    

Please make a selection:

  (1) Display Map
  (2) Print all drivers
  (3) Print all customers
  (4) Find a ride

  (0) Exit

Enter your selection: 2

Drivers List: 
=================
1)
Name     Elsa
ID:      D1
Rating   5
Location 3rd Ave and 4th Ave
=================
2)
Name     Alice
ID:      D5
Rating   5
Location 7th Ave and 7th Ave
=================
3)
Name     Densel
ID:      D2
Rating   4
Location 1st Ave and 1st Ave
=================
4)
Name     Bob
ID:      D4
Rating   4
Location 2nd Ave and 2nd Ave
=================
5)
Name     Carter
ID:      D3
Rating   3
Location 5th Ave and 4th Ave
=================
~~~~~~~~~~~~~~~~~

Please make a selection:

  (1) Display Map
  (2) Print all drivers
  (3) Print all customers
  (4) Find a ride

  (0) Exit

Enter your selection: 3

Customers List: 
=================
1)
Name     Isabelle
ID:      C3
Rating   4
Location 4th Ave and 5th Ave
=================
2)
Name     Jesse
ID:      C2
Rating   5
Location 3rd Ave and 7th Ave
=================
3)
Name     Philip
ID:      C4
Rating   3
Location 1st Ave and 7th Ave
=================
4)
Name     Sally
ID:      C1
Rating   2
Location 5th Ave and 5th Ave
=================
~~~~~~~~~~~~~~~~~

Please make a selection:

  (1) Display Map
  (2) Print all drivers
  (3) Print all customers
  (4) Find a ride

  (0) Exit

Enter your selection: 4

Customers List: 
=================
1)
Name     Isabelle
ID:      C3
Rating   4
Location 4th Ave and 5th Ave
=================
2)
Name     Jesse
ID:      C2
Rating   5
Location 3rd Ave and 7th Ave
=================
3)
Name     Philip
ID:      C4
Rating   3
Location 1st Ave and 7th Ave
=================
4)
Name     Sally
ID:      C1
Rating   2
Location 5th Ave and 5th Ave
=================
~~~~~~~~~~~~~~~~~
Please enter the id of the customer
Enter ID: C1

What size of car do you need?
(1) Small
(2) Medium
(3) Large
2
What is your destination? Enter 2 numbers between 1 and 8
For example: 3 4
5 7


__|1___2___3___4___5___6___7___8|_  
 1|D _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 2|  _ B _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 3|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 4|  _   _ E _   _ C _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 5|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |I| |S| |_| |_| |   
 6|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 7|  _   _   _   _   _   _ A _  |   
  | |P| |_| |J| |_| |_| |_| |_| |   
 8|_____________________________|   
                                    
                                    
Driver found for Sally!
Name     Carter
ID:      D3
Rating   3
Location 5th Ave and 4th Ave
=================

__|1___2___3___4___5___6___7___8|_  
 1|D _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 2|  _ B _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 3|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 4|  _   _ E _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 5|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |I| |_| |_| |_| |   
 6|  _   _   _   _   _   _   _  |   
  | |_| |_| |_| |_| |_| |_| |_| |   
 7|  _   _   _   _ C _   _ A _  |   
  | |P| |_| |J| |_| |S| |_| |_| |   
 8|_____________________________|   
                                    
                                    
Sally taken to 5th Ave and 7th Ave by Carter

Please make a selection:

  (1) Display Map
  (2) Print all drivers
  (3) Print all customers
  (4) Find a ride

  (0) Exit

Enter your selection: 0
Bye!
gdabs@Mac Ride-Hail-Sim % make clean
rm -f ride *.o
```