
#include "Book.h"

Book::Book() {
    summary = "Резюме не заполнено";
}

Book::Book(string name, string author, Date publish_year, string summary)
: Publication(name,author,publish_year)
{
    setSummary(summary);
}

Book::~Book() {

}

void Book::setSummary(const string &summary) {
    Book::summary=summary;
}

const string &Book::getSummary() const {
    return summary;
}

void Book::show() const {
    Publication::show();
    cout <<"Резюме: " << summary << endl;
}
