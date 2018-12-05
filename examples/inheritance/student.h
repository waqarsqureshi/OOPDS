#ifndef STUDENT_H
#define STUDENT_H
#include <vector>
#include "person.h"
using namespace std;

class Student : public Person
{
 public:
  Student();
  // Add this constructor
  // Student(std::string myname, int myid);
  ~Student();
  void add_grade(int score);
  int get_grade(int index);
  // Add this member function
  // void print_grades();
private:
  std::vector<int> grades_;
};

#endif
