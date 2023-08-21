#ifndef T17_HW_LIBRARY_H
#define T17_HW_LIBRARY_H

#include "Publication.h"
#include "Book.h"
#include "Magazine.h"
#include "vector"
#include "algorithm"

class Library {
protected:
    string library_name;
    vector<Publication*> objcts;
public:
    Library(string library_name);
    ~Library();

    void showAllObjects()const;
    int findObject()const;
    void addObject(Publication* obj);
    void delObject();

};


#endif //T17_HW_LIBRARY_H
