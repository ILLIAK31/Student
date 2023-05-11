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
            if (line_num % 2 == 0)
                student->Set_Name(line);
            else if (line_num % 3 == 0)
                student->Set_Album_num(line);
            else if (line_num % 4 == 0)
                student->Set_Grupe(line);
            else if (line_num % 5 == 0)
                student->Set_Year(line);
            else
                student->Set_Surname(line);
            ++line_num;
            if (line_num == 6)
            {
                students.push_back(student);
                line_num = 1;
            }
        }
    }
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