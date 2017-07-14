//
// Created by LAM on 7/13/2017.
//

#include <iostream>
#include <algorithm>
#include "Action.h"

void Action::showAllStudent(vector<Student> student){
    int nStudent;
    nStudent = student.size();
    if(nStudent == 0){
        cout << "No Student!" << endl;
    } else {
        cout << "Information students" << endl;
        cout << "Index \tId \tName \t\tAge \tSex \tGPA" << endl;
        for(int i=0; i < nStudent; i++){
            cout << i+1 << "\t";
            showStudent(student[i]);
        }
    }
}

void Action::showStudent(Student student){
    cout << student.getId() << "\t" << student.getName() << "\t" << student.getAge();
    cout << "\t" << student.getSex() << "\t" << student.getGpa() << endl;
}

bool checkId(vector<Student> student, int id){
    for (int i = 0; i < student.size(); ++i) {
        if(id == student[i].getId()){
            return false;
        }
    }
    return true;
}

void Action::addInfoStudent(vector<Student> &student){
    Student newStudent;
    int id, age;
    string name, sex;
    float gpa;
    cout << "Add information student" << endl;

    cout << "Enter student id: ";
    cin >> id;
    cout << "da nhap id = " << id << endl;
    while( !checkId(student, id) ) {
        cout << "Id existed!" << endl;
        cout << "Retype new student id: ";
        cin >> id;
    }
    newStudent.setId(id);

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);
    newStudent.setName(name);

    cout << "Enter student sex: ";
    getline(cin, sex);
    newStudent.setSex(sex);

    cout << "Enter student age: ";
    cin >> age;
    newStudent.setAge(age);

    cout << "Enter grade point average: ";
    cin >> gpa;
    newStudent.setGpa(gpa);

    student.push_back(newStudent);
}

void Action::searchStudent(vector<Student> student){
    int num = 0;
    int nStudent = student.size();
    string name;
    cout << "Search name student: ";
    cin.ignore();
    getline(cin, name);
    for(int i=0; i < nStudent; i++){
        size_t found=student[i].getName().find(name);
        if(found != string::npos){
            showStudent(student[i]);
            num++;
        }
    }
    if(num == 0){
        cout << "Not found the result!" << endl;
    }
}

void Action::deleteStudent(vector<Student> &student){
    int select, id, index = -1, del;
    cin >> select;
    if(select == 1){
        student.clear();
    } else if(select == 2) {
        cout << "Enter id student to delete: ";
        cin >> id;
        for (int i = 0; i < student.size(); i++) {
            if(id == student[i].getId()){
                showStudent(student[i]);
                index = i;
            }
        }
        if(index == -1){
            cout << "No student has id = " << id << endl;
        } else {
            cout << "Do you want to delete student id = " << id << endl;
            cout << "Yes (1) / No (0): ";
            cin >> del;
            if(del == 1){
                student.erase(student.begin()+index);
                cout << "Delete done!" << endl;
            }
        }
    }
}

void Action::editStudent(Student &student){
    int select, id, age;
    string name, sex;
    float gpa;
    showStudent(student);
    cout << "1. ID student" << endl;
    cout << "2. Name student" << endl;
    cout << "3. Sex student" << endl;
    cout << "4. Age student" << endl;
    cout << "5. GPA student" << endl;
    cout << "Edit: ";
    cin >> select;
    switch (select) {
        case 1:
            cout << "New id student: ";
            cin >> id;
            student.setId(id);
            break;
        case 2:
            cout << "New name student: ";
            cin.ignore();
            getline(cin, name);
            student.setName(name);
            break;
        case 3:
            cout << "New sex student: ";
            cin.ignore();
            getline(cin, sex);
            student.setSex(sex);
            break;
        case 4:
            cout << "New age student: ";
            cin >> age;
            student.setAge(age);
            break;
        case 5:
            cout << "New gpa student: ";
            cin >> gpa;
            student.setGpa(gpa);
            break;
        default:
            break;
    }
}

void Action::editStudent(vector<Student> &student){
    int index;
    showAllStudent(student);
    cout << "Choose student index to edit information: ";
    cin >> index;
    index--;
    if( (index >= 0) && (index < student.size()) ){
        editStudent(student[index]);
    } else {
        cout << "Student not found!" << endl;
    }
}

bool cmpStudentGpa(Student studentA, Student studentB){
    return (studentA.getGpa() > studentB.getGpa());
}

void Action::sortStudent(vector<Student> &student){
    sort(student.begin(), student.end(), cmpStudentGpa);
    showAllStudent(student);
}