#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
#include <string>

void example2()
{
	// Map of Department and Employee count in that Department
	std::map<std::string, int > mapOfDepEmpCount;

	mapOfDepEmpCount.insert(std::make_pair("First", 0));
	mapOfDepEmpCount.insert(std::make_pair("Second", 0));
	mapOfDepEmpCount.insert(std::make_pair("Third", 0));

	std::map<std::string, int >::iterator it = mapOfDepEmpCount.find("Second");
	 if(it != mapOfDepEmpCount.end())
	 {
		 std::cout << std::endl << "Department = "<< it->first << " :: No. Of Employees = " << it->second << std::endl;
		 // You can change the value associated with the key
		 it->second = 10;
		 //it->first = "sss"; // You cannot chage the key
	 }

	 it = mapOfDepEmpCount.find("Second");
	 if(it != mapOfDepEmpCount.end())
	 {
		 std::cout << std::endl << "Department = "<< it->first << " :: No. Of Employees = " << it->second << std::endl;

	 }

}

int main()
{
	example2();
	return 0;
}
