#pragma once

class Student
{
private:
	string surname, name , album_num , grupe;
	int year;
public:
	Student() = default;
	void Set_Value(const string element, const int index);
	friend ostream& operator<<(ostream& output,const Student student);
	friend fstream& operator>>(fstream& input,const Student* student);
	friend bool Is_three(const Student* student);
	~Student();
};