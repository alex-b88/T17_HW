#ifndef T17_HW_PUBLICATION_H
#define T17_HW_PUBLICATION_H
#include "iostream"
#include "string"
#include "Date.h"
#include "Exeption.h"

using namespace std;

class Publication {
protected:
        string name;
        string author;
        Date publish_year;
public:
    Publication();
    Publication(string name, string author, Date publish_year);
    virtual ~Publication();

    const string &getName() const;
    void setName(const string &name);
    const string &getAuthor() const;
    void setAuthor(const string &author);
    Date getPublishYear() const;
    void setPublishYear(Date publishYear);

    virtual void show()const;
};


#endif //T17_HW_PUBLICATION_H
