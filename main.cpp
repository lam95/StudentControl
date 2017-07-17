#include <iostream>
//#include <vector>
//#include "Student.h"
#include "Menu.h"
#include "Action.h"

using  namespace std;

int main() {
    vector<Student> student;
    Menu menu;
    Action act;
    while(menu.isCondition()) {
        menu.mainMenu();
        switch (menu.getSwtCase()) {
            case 1:
                act.showAllStudent(student);
                menu.exitMenu();
                break;
            case 2:
                act.addInfoStudent(student);
                menu.exitMenu();
                break;
            case 3:
                act.searchStudent(student);
                menu.exitMenu();
                break;
            case 4:
                menu.deleteMenu();
                act.deleteStudent(student);
                menu.exitMenu();
                break;
            case 5:
                act.editStudent(student);
                menu.exitMenu();
                break;
            case 6:
                act.sortStudent(student);
                menu.exitMenu();
                break;
            case 7:
                act.printToFile(student);
                menu.exitMenu();
                break;
            case 0:
                menu.quit();
            default:
                break;
        }
    }
    return 0;
}