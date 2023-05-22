#pragma once

class Student
{
private:
	string surname, name , album_num , grupe;
	int year{};
public:
	Student() = default;
	void Set_Value(const string element,int& index);
	friend ostream& operator<<(ostream& output,const Student student);
	friend fstream& operator>>(fstream& input,const Student* student);
	int Get_Year();
	~Student();
};