#pragma once

class Student
{
private:
	string surname, name , album_num , grupe;
	int year;
public:
	Student() = default;
	//
	void Set_Surname(const string element);
	void Set_Name(const string element);
	void Set_Album_num(const string element);
	void Set_Grupe(const string element);
	void Set_Year(const string element);
	//
	~Student();
};