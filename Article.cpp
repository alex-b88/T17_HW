#include "Article.h"

Article::Article() {
    title = "Не задано";
    body = "Не задано";
}

Article::Article(string title, string body) {
    setTitle(title);
    setBody(body);
}

Article::~Article() {

}

void Article::showFullArticle() const {
 cout <<"Заголовок: " << title <<endl;
 cout << body <<endl;
}

void Article::setTitle(string title) {
    if (title.size()>0)
        this->title=title;
}

void Article::setBody(string body) {
    if (body.size()>0)
        this->body=body;
}
