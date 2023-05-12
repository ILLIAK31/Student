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

int Student::Get_Year()
{
    return this->year;
}

ostream& operator<<(ostream& output, const Student student)
{
    output << "|Surname : " << student.surname << " Name: " << student.name << " Number of album : " << student.album_num << " Grupe : " << student.grupe << " Year : " << student.year << " |" << endl;
    return output;
}

Student::~Student(){}