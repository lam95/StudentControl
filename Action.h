//
// Created by LAM on 7/13/2017.
//

#ifndef MAIN_ACTION_H
#define MAIN_ACTION_H

#include <vector>
#include "Student.h"

class Action {
public:
    void showAllStudent(vector<Student> student);

    void showStudent(Student student);

    void addInfoStudent(vector<Student> &student);

    void searchStudent(vector<Student> student);

    void deleteStudent(vector<Student> &student);

    void editStudent(Student &student);

    void editStudent(vector<Student> &student);

    void sortStudent(vector<Student> &student);
};


#endif //MAIN_ACTION_H
