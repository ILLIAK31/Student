#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "Student.hpp"

void Student::Set_Value(const string element, int& index)
{
    switch (index)
    {
    case 1:
        this->surname = element;
        break;
    case 2:
        this->name = element;
        break;
    case 3:
        this->album_num = element;
        break;
    case 4:
        this->grupe = element;
        break;
    default:
        this->year = stoi(element);
    }
    ++index;
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

int Student::Get_Year()
{
    return this->year;
}

Student::~Student(){}