#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "Student.hpp"

ifstream& operator>>(ifstream& input,Student& const student)
{
    input >> student.surname >> student.name >> student.album_num >> student.grupe >> student.year;
    return input;   
}

ofstream& operator<<(ofstream& input,const Student& student)
{
    input << "|Surname : " << student.surname << " | Name: " << student.name << " | Number of album : " << student.album_num << " | Grupe : " << student.grupe << " | Year : " << student.year << " |" << endl;
    return input;
}

ostream& operator<<(ostream& output, const Student student)
{
    output << "|Surname : " << student.surname << " | Name: " << student.name << " | Number of album : " << student.album_num << " | Grupe : " << student.grupe << " | Year : " << student.year << " |" << endl;
    return output;
}

int Student::Get_Year()
{
    return this->year;
}

Student::~Student(){}