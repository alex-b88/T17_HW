
#ifndef T17_HW_EXEPTION_H
#define T17_HW_EXEPTION_H

#include "iostream"
#include "string"

using namespace std;

class Exeption {
public:
   virtual string showMessage()const=0;
};

class NameExeption : public Exeption {
public:
    string showMessage()const override;
};

#endif //T17_HW_EXEPTION_H
