#pragma once

class Student
{
private:
	string surname, name , album_num , grupe;
	int year{};
public:
	Student() = default;
	friend ifstream& operator>>(ifstream& input,Student& const data);
	friend ofstream& operator<<(ofstream& input,const Student& student);
	friend ostream& operator<<(ostream& output,const Student student);
	friend istream& operator>>(istream& input, Student& const student);
	int Get_Year();
	string Get_album_num();
	~Student();
};