#include <iostream>
#include <string>

using namespace std;

#include "Student.hpp"

void Student::Set_Surname(const string element)
{
	this->surname = element;
}

void Student::Set_Name(const string element)
{
	this->name = element;
}

void Student::Set_Album_num(const string element)
{
	this->album_num = element;
}

void Student::Set_Grupe(const string element)
{
	this->grupe = element;
}

void Student::Set_Year(const string element)
{
	this->year = stoi(element);
}

Student::~Student(){}