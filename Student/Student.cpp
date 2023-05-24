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

istream& operator>>(istream& input, Student& const student)
{
    cout << "Give surname : ";
    input >> student.surname;
    cout << "Give name : ";
    input >> student.name;
    cout << "Give number of album : ";
    input >> student.album_num;
    cout << "Give grupe number : ";
    input >> student.grupe;
    cout << "Give year : ";
    input >> student.year;
    return input;
}

int Student::Get_Year()
{
    return this->year;
}

string Student::Get_album_num()
{
    return this->album_num;
}

Student::~Student(){}