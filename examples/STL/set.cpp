#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
#include <string>
 
void example1()
{
	std::set<std::string> setOfDepartments;
 
	setOfDepartments.insert("First");
	setOfDepartments.insert("Second");
	setOfDepartments.insert("Third");
	std::for_each(setOfDepartments.begin(), setOfDepartments.end(), [](std::string elem){
											std::cout<<(elem)<<" , ";
											});
 
	// Now Try to change the element
 
	 std::set<std::string>::iterator it = setOfDepartments.find("First");
	 if(it != setOfDepartments.end())
	 {  
		 std::cout << std::endl<< *it;
		 //*it = "Fourth"; // NOT ALLOWED
	 }
 
}
int main()
{
	example1();
	return 0;
}
