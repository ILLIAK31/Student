#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#include "Student.hpp"

void Delete_All(vector <Student*>& students);
bool Is_three(const Student* student);

int main()
{
    Student* student = nullptr;
    vector<Student*> students;
    int line_num = 1;
    string line;
    ifstream obj("Data0.txt");
    if (obj.is_open())
    {
        while (getline(obj, line)) 
        {
            if (line_num == 1)
                student = new Student;
            student->Set_Value(line, line_num);
            if (line_num == 6)
            {
                students.push_back(student);
                line_num = 1;
            }
        }
    }
    student = nullptr;
    fstream obj2("Data.txt");
    if (obj2.is_open())
        for (auto student : students)
            obj2 >> student;
    obj2.close();
    ifstream obj3("Data.txt");
    if (obj3.is_open())
        while (getline(obj3, line))
            cout << line << endl;
    obj3.close();
    cout << endl;
    auto print = [](const Student* student) { cout << *student; };
    for_each(students.begin(), students.end(), print);
    cout << endl << "Number of students which are on 3 year" << endl << "Number : " << count_if(students.begin(), students.end(), Is_three) << endl;
    Delete_All(students);
    return 0;
}

void Delete_All(vector<Student*>& students)
{
    for (auto& student : students)
    {
        delete student;
        student = nullptr;
    }
    students.clear();
    cout << endl << "Students were deleted" << endl;
}

bool Is_three(const Student* student)
{
    if ((student->year) == 3)
        return true;
    return false;
}