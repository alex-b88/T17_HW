#include "Publication.h"

Publication::Publication() {
    name="Название не задано";
    author="Автор не указан";
    publish_year=Date();
}

Publication::Publication(string name, string author, Date publish_year) {
    setName(name);
    setAuthor(author);
    setPublishYear(publish_year);
}

Publication::~Publication() {

}

const string &Publication::getName() const {
    return name;
}

void Publication::setName(const string &name) {
    Publication::name = name;
}

const string &Publication::getAuthor() const {
    return author;
}

void Publication::setAuthor(const string &author) {
    Publication::author = author;
}

Date Publication::getPublishYear() const {
    return publish_year;
}

void Publication::setPublishYear(Date publishYear) {
    publish_year = publishYear;
}

void Publication::show() const {
    cout <<"Название: "<<name <<endl;
    cout <<"Автор: " <<author <<endl;
    cout <<"Год публикации: " << publish_year.getYear()<<endl;

}