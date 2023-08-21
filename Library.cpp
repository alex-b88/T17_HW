
#include "Library.h"

Library::Library(string library_name) {
    if (library_name.size()<=0)
        throw new NameExeption();
        this->library_name=library_name;
}

Library::~Library() {
    for (int i = 0; i < objcts.size(); ++i) {
        delete objcts[i];
    }
}

void Library::showAllObjects() const {
    for (int i = 0; i < objcts.size(); ++i) {
        objcts[i]->show();
    }
}

int Library::findObject() const {
    int ptr=-1;
    bool flag=false;
    string tmp;
    cout <<"Введите название: ";
    getline(cin,tmp);
    for (int i = 0; i < objcts.size(); ++i) {
        if (objcts[i]->getName()==tmp){
            ptr=i;
            objcts[i]->show();
            flag=true;
            break;
        }
    }
    if (!flag) cout <<"Ничего не найдено!" << endl;
    return ptr;
}

void Library::addObject(Publication *obj) {
    objcts.push_back(obj);

}

void Library::delObject() {
    int x=findObject();
    if (x==-1){
        return;
    }
    else{
        cout <<"\"" << objcts[x]->getName() <<"\"" << " успешно удален из каталога" << endl;
        delete objcts[x];
        objcts.erase(objcts.begin()+x);
    }
}