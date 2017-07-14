//
// Created by LAM on 7/13/2017.
//

#include "Student.h"

Student::Student(){}

Student::Student(int id, const string &name, int age, const string &sex) : id(id), name(name), age(age), sex(sex) {}

Student::~Student() {

}

int Student::getId() const {
    return id;
}

void Student::setId(int id) {
    Student::id = id;
}

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

const string &Student::getSex() const {
    return sex;
}

void Student::setSex(const string &sex) {
    Student::sex = sex;
}

float Student::getGpa() const {
    return gpa;
}

void Student::setGpa(float gpa) {
    Student::gpa = gpa;
}
