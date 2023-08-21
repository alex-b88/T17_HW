#ifndef T17_HW_MAGAZINE_H
#define T17_HW_MAGAZINE_H

#include "Publication.h"
#include "vector"
#include "algorithm"
#include "Article.h"

class Magazine : public Publication {
protected:
    vector<Article*> art;
public:
    Magazine();
    Magazine(string name, string author, Date publish_year);
    ~Magazine();

    void getArticle()const;
    void addArticle(Article* obj);
};


#endif //T17_HW_MAGAZINE_H
