#include "Publication.h"

Publication::Publication() {
    name="Название не задано";
    author="Автор не указан";
    publish_year=0;
    description="Описание не указано";
}

Publication::Publication(string name, string author, int publish_year, string description) {
    setName(name);
    setAuthor(author);
    setPublishYear(publish_year);
    setDescription(description);
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

int Publication::getPublishYear() const {
    return publish_year;
}

void Publication::setPublishYear(int publishYear) {
    publish_year = publishYear;
}

const string &Publication::getDescription() const {
    return description;
}

void Publication::setDescription(const string &description) {
    Publication::description = description;
}

