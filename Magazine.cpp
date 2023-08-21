
#include "Magazine.h"

Magazine::Magazine() {

}

Magazine::Magazine(string name, string author, Date publish_year)
    :Publication(name, author, publish_year) {}

Magazine::~Magazine() {
    for (int i = 0; i < art.size(); ++i) {
        delete art[i];
    }
}

void Magazine::getArticle() const {
    for (int i = 0; i < art.size(); ++i) {
        art[i]->showFullArticle();
        cout << endl;
    }
}

void Magazine::addArticle(Article* obj) {
        art.push_back(obj);
}

void Magazine::show() const {
    Publication::show();
    for (int i = 0; i <art.size(); ++i) {
            art[i]->showFullArticle();
            cout << endl;
    }
}
