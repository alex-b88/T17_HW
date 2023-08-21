#ifndef T17_HW_LIBRARY_H
#define T17_HW_LIBRARY_H
#include "iostream"
#include "string"
#include "Publication.h"
#include "Book.h"
#include "Magazine.h"

using namespace std;

class Library {
protected:
    string name;
    vector<Publication*> objcts;

};


#endif //T17_HW_LIBRARY_H
