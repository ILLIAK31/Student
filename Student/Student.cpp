#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "Student.hpp"

void Student::Set_Value(const string element, const int index)
{
    if (index == 2)
        this->name = element;
    else if (index == 3)
        this->album_num = element;
    else if (index == 4)
        this->grupe = element;
    else if (index == 5)
        this->year = stoi(element);
    else
        this->surname = element;
}

ostream& operator<<(ostream& output, const Student student)
{
    output << "|Surname : " << student.surname << " | Name: " << student.name << " | Number of album : " << student.album_num << " | Grupe : " << student.grupe << " | Year : " << student.year << " |" << endl;
    return output;
}

fstream& operator>>(fstream& input,const Student* student)
{
    input << "|Surname : " << student->surname << " | Name: " << student->name << " | Number of album : " << student->album_num << " | Grupe : " << student->grupe << " | Year : " << student->year << " |" << endl;
    return input;
}

Student::~Student(){}