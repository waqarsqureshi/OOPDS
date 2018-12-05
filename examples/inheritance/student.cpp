#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;
Student::Student() 
{
  cout << "In student default constructor" << endl;
}

Student::Student(string myname, int myid)
{
  cout << "In student 2-arg constructor" << endl;
}

Student::~Student()
{
  cout << "IN Student destructor" << endl;
}
void Student::add_grade(int score)
{
  grades_.push_back(score);
}

int Student::get_grade(int index)
{
  return grades_[index];
}

/*
void Student::print_grades()
{
  cout << "Grades for " << name_ << ":" << endl;
  for(size_t i=0; i < grades_.size(); i++){
    cout << grades_[i] << " ";
  }
  cout << endl;
}
*/
