#pragma once

class Student
{
private:
	string surname, name , album_num , grupe;
	int year;
public:
	Student() = default;
	void Set_Value(const string element, const int index);
	int Get_Year();
	friend ostream& operator<<(ostream& output,const Student student);
	//
	
	//
	~Student();
};