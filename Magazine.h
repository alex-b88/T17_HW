#ifndef T17_HW_MAGAZINE_H
#define T17_HW_MAGAZINE_H

#include "Publication.h"
#include "vector"
#include "algorithm"

class Magazine : public Publication {
protected:
    vector<string> article;
public:
    Magazine();
    Magazine(string name, string author, Date publish_year);
    ~Magazine();

    void getArticle()const;
    void addArticle(string obj);
};


#endif //T17_HW_MAGAZINE_H
