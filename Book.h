#ifndef T17_HW_BOOK_H
#define T17_HW_BOOK_H


#include "Publication.h"

class Book : public Publication {
protected:
    string summary;
public:
    Book();
    Book(string name, string author, Date publish_year, string summary);
    ~Book();

    void setSummary(const string &summary);
    const string &getSummary()const;

    virtual void show()const;
};


#endif //T17_HW_BOOK_H
