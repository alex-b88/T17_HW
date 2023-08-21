#ifndef T17_HW_ARTICLE_H
#define T17_HW_ARTICLE_H

#include "iostream"
#include "string"
#include "Exeption.h"

using namespace std;

class Article {
protected:
        string title;
        string body;
public:
    Article();
    Article(string title, string body);
    ~Article();

    void showFullArticle()const;
    void setTitle(string title);
    void setBody(string body);
};


#endif //T17_HW_ARTICLE_H
