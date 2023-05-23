#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "Student.hpp"

ostream& operator<<(ostream& output, const Student student)
{
    output << "|Surname : " << student.surname << " | Name: " << student.name << " | Number of album : " << student.album_num << " | Grupe : " << student.grupe << " | Year : " << student.year << " |" << endl;
    return output;
}

ofstream& operator<<(ofstream& input,const Student& student)
{
    input << "|Surname : " << student.surname << " | Name: " << student.name << " | Number of album : " << student.album_num << " | Grupe : " << student.grupe << " | Year : " << student.year << " |" << endl;
    return input;
}

ifstream& operator>>(ifstream& input, Student& data)
{
    input >> data.surname >> data.name >> data.album_num >> data.grupe >> data.year;
    return input;   
}

int Student::Get_Year()
{
    return this->year;
}

Student::~Student(){}