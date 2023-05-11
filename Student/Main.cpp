#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#include "Student.hpp"

void Delete_All(vector <Student*>& students);

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
            ++line_num;
            if (line_num == 6)
            {
                students.push_back(student);
                line_num = 1;
            }
        }
    }
    student = nullptr;
    //
    
    //
    Delete_All(students);
    return 0;
}

void Delete_All(vector<Student*>& students)
{
    for (auto& obj : students)
    {
        delete obj;
        obj = nullptr;
    }
    students.clear();
    cout << endl << "Students were deleted" << endl;
}