//
// Created by LAM on 7/13/2017.
//

#ifndef MAIN_MENU_H
#define MAIN_MENU_H


class Menu {
private:
    bool condition;
    int swtCase;
public:
    Menu();

    Menu(bool condition);

    Menu(int swtCase);

    Menu(bool condition, int swtCase);

    virtual ~Menu();

    int getSwtCase() const;

    void setSwtCase(int swtCase);

    bool isCondition() const;

    void setCondition(bool condition);

    void mainMenu();

    void exitMenu();

    void deleteMenu();

    void quit();
};


#endif //MAIN_MENU_H
