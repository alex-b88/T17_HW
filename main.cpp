#include <iostream>
#include "Date.h"
#include "Publication.h"
#include "Book.h"
#include "Magazine.h"
#include "Article.h"
#include "Exeption.h"
#include "Library.h"

int main() {

    Book obj2("Кобзарь","Шевченко", Date(1911,02,01),"Стихи");
    Magazine forbes("Forbes","Ukr",Date(2023,8,1));
    Magazine vogue("Vogue","Ukr",Date(2023,7,29));
    Magazine explorer("Explorer","Ukr",Date(2023,6,15));
    Library itStep("iTStep");
    itStep.addObject(new Publication(forbes));
    itStep.addObject(new Publication(vogue));
    itStep.addObject(new Publication(explorer));
    itStep.addObject(new Book(obj2));

    forbes.addArticle(new Article("Статья 1","Текст статьи 1"));
    forbes.addArticle(new Article("Статья 2","Текст статьи 2"));
    forbes.addArticle(new Article("Статья 3","Текст статьи 3"));
    forbes.addArticle(new Article("Статья 4","Текст статьи 4"));
    itStep.showAllObjects();
 //   itStep.delObject();
    try{
        Book obj3("Захар Беркут","",Date(1883,11,15),"Историческая повесть");
    }
    catch (NameExeption* msg){
       cout << msg->showMessage();
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
