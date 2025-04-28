#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"

using namespace std;
template <class T>

class List {

	public:
		//constructor
		// List();
		List(int (*compare)(T t1, T t2));
				
		//destructor
		~List();
		
		//other
		void add(T t); 
		T remove(int index);
		T get(int index) const;
		int getSize() const;
		bool isFull() const;
		void clear();
	
	private:
		int numElements;
		T* elements;
		int (*compare)(T t1, T t2);
};

// template <class T>
// List<T>::List(){
// 	elements = new T[MAX_ARRAY];
// 	numElements = 0;
// }

template <class T>
List<T>::List(int (*compare)(T t1, T t2)){
	elements = new T[MAX_ARRAY];
	numElements = 0;
	this->compare = compare;
}


template <class T>
List<T>::~List(){
	delete[] elements;
}

template <class T>
void List<T>::add(T t){
	if (numElements >= MAX_ARRAY){
		cerr<<"List is full"<<endl;
		exit(1);
	}
	int i = numElements - 1;
	while (i >= 0 && compare(elements[i], t) > 0){  
		elements[i+1] = elements[i];
		--i;
	}
	elements[i+1] = t;
	++numElements;	
}



template <class T>
T List<T>::remove(int index){

	T temp = elements[index];

	while (index < numElements){
		elements[index] = elements[index + 1];
		++index;
	}
	--numElements;
	return temp;
}

template <class T>
int List<T>::getSize() const{
	return numElements;
}

template <class T>
bool List<T>::isFull() const {
	return numElements >= MAX_ARRAY;
}

template <class T>
T List<T>::get(int index) const{
	if (index < 0 || index >= numElements) {
		cerr<<"List index out of bounds"<<endl;
		exit(1);
	}
	return elements[index];
}

template <class T>
void List<T>::clear(){
	for(int i = 0; i < numElements; ++i) {
		delete elements[i];
	}
	numElements = 0;
}


#endif