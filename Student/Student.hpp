#pragma once

class Student
{
private:
	string surname, name , album_num , grupe;
	int year{};
public:
	Student() = default;
	friend ostream& operator<<(ostream& output,const Student student);
	friend ofstream& operator<<(ofstream& input,const Student& student);
	friend ifstream& operator>>(ifstream& input, Student& data);
	int Get_Year();
	~Student();
};