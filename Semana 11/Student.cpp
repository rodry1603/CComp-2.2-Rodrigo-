#include <iostream>
#include "Student.h"
Student::Student(std::string name, int age, int code) {
    this->name = name;
    this->age = age;
    this->code = code;
}

std::ostream& operator<<(std::ostream &output, const Student &s) {
    output << "(" << p.name << ", " << p.age << ", " << p.code << ")";
    return output;
}

