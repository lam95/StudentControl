//
// Created by LAM on 7/13/2017.
//

#include <iostream>
#include "Menu.h"

using namespace std;

Menu::Menu():condition(true), swtCase(0) {}

Menu::Menu(bool condition, int swtCase) : condition(condition), swtCase(swtCase) {}

Menu::Menu(bool condition) : condition(condition) {}

Menu::Menu(int swtCase) : swtCase(swtCase) {}

Menu::~Menu() {

}

bool Menu::isCondition() const {
    return condition;
}

void Menu::setCondition(bool condition) {
    Menu::condition = condition;
}

int Menu::getSwtCase() const {
    return swtCase;
}

void Menu::setSwtCase(int swtCase) {
    Menu::swtCase = swtCase;
}

void Menu::mainMenu(){
    int swt;
    cout << "===========================================\n";
    cout << " MENU \n";
    cout << "===========================================\n";
    cout << " 1. Show students information\n";
    cout << " 2. Add student information\n";
    cout << " 3. Search id student\n";
    cout << " 4. Delete student\n";
    cout << " 5. Edit student information\n";
    cout << " 6. Sort student by point\n";
    cout << " 7. Print student information to file\n";
    cout << " 0. Exit program\n";
    cout << "Choose a number:";
    cin >> swt;
    setSwtCase(swt);
}

void Menu::deleteMenu(){
    cout << "1. Delete all student\n";
    cout << "2. Delete student by id\n";
    cout << "3. Nothing\n";
    cout << "Enter a number:";
}

void Menu::exitMenu(){
    int select = 1;
    cout << "Select Continue(1)/Exit(0): ";
    cin >> select;
    if(select == 0){
        quit();
    } else {
        setCondition(true);
    }
}

void Menu::quit(){
    cout << "Program finished!" << endl;
    setCondition(false);
}