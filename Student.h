//
// Created by LAM on 7/13/2017.
//

#ifndef MAIN_STUDENT_H
#define MAIN_STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string sex;
    float gpa;

public:
    Student();

    Student(int id, const string &name, int age, const string &sex);

    virtual ~Student();

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    const string &getSex() const;

    void setSex(const string &sex);

    float getGpa() const;

    void setGpa(float gpa);
};


#endif //MAIN_STUDENT_H
