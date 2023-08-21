#ifndef T17_HW_PUBLICATION_H
#define T17_HW_PUBLICATION_H
#include "iostream"
#include "string"

using namespace std;

class Publication {
protected:
        string name;
        string author;
        int publish_year;
        string description;
public:
    Publication();
    Publication(string name, string author, int publish_year, string description);
    virtual ~Publication();

    const string &getName() const;

    void setName(const string &name);

    const string &getAuthor() const;

    void setAuthor(const string &author);

    int getPublishYear() const;

    void setPublishYear(int publishYear);

    const string &getDescription() const;

    void setDescription(const string &description);


};


#endif //T17_HW_PUBLICATION_H
