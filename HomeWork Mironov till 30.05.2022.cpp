#include <iostream>
#include <string>
#include <fstream>
#include "Subscriber.cpp"
#include "PhoneBook.cpp"
using namespace std;

int main()
{
    Subscriber subs1("Benzema", "Karim", "", 2574585, 2976431, 89185352757, "Real Madrid forward");
    Subscriber subs2("Cheryshev", "Denis", "Dmitrievich", 2598635, 2965437, 89281475869);
    Subscriber subs3("Modric", "Luka", "", 2965547, 3659874, 89175415141);

    string path = "C:\\Users\\Nikita\\Desktop\\Никита программирование\\Домашки\\OOP C++\\HomeWork Mironov till 30.05.2022\\Contacts.txt";
    string path2 = "C:\\Users\\Nikita\\Desktop\\Никита программирование\\Домашки\\OOP C++\\HomeWork Mironov till 30.05.2022\\Book.txt";

    subs1.printContact();
    subs2.printContact();
    subs3.printContact();

    subs2.setInfo("Former Real Madrid midfielder");
    subs3.setInfo("The heart of Real Madrid's midfield");
    subs2.setWorkNum(2235566);
    subs1.setInfo("BEST Real Madrid forward");

    subs1.printContact();
    subs2.printContact();
    subs3.printContact();

    subs1.saveContact(path);
    subs2.saveContact(path);
    subs3.saveContact(path);

    PhoneBook book;
    book.addContact(subs1);
    book.addContact(subs2);
    book.addContact(subs3);

    book.print();
    book.delContact(1);
    book.print();

    book.addInfo(0,"Best number 9");

    book.saveBook(path2);
    book.readBook(path2);
    book.print();
    cout << book.searchName("Luka");
    cout << endl;
    cout << book.searchSurname("Benzema");
    cout << endl;
    cout << book.searchPatr("Sergeevich");
    cout << endl;
    
}


