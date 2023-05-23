#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#include "Student.hpp"

int main()
{
    Student student;
    vector<Student> students;
    ifstream obj("Data0.txt");
    if(obj.is_open())
        while (obj >> student)
            students.push_back(student);
    obj.close();
    ofstream obj2("Data.txt");
    if (obj2.is_open())
        for (auto student : students)
            obj2 << student;
    obj2.close();
    cout << endl;
    auto print = [](const Student& student) { cout << student; };
    for_each(students.begin(), students.end(), print);
    cout << endl << "Number of students which are on 3 year" << endl << "Number : " << count_if(students.begin(), students.end(), [](Student& const student) { return (student.Get_Year() == 3)?true:false; }) << endl;
    students.clear();
    cout << endl << "Students were deleted" << endl;
    return 0;
}