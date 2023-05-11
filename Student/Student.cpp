#include <iostream>
#include <string>

using namespace std;

#include "Student.hpp"

void Student::Set_Value(const string element, const int index)
{
    if (index % 2 == 0)
        this->name = element;
    else if (index % 3 == 0)
        this->album_num = element;
    else if (index % 4 == 0)
        this->grupe = element;
    else if (index % 5 == 0)
        this->year = stoi(element);
    else
        this->surname = element;
}

Student::~Student(){}