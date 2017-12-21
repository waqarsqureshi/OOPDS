#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool mytest(int n) { return (n>21) && (n <36); };

int main (){
    int arr[] = { 12, 3, 17, 8, 34, 56, 9  };  // standard C array
    vector<int> v(arr, arr+7);  // initialize vector with C array 
    vector<int>::iterator iter;
    iter=find_if(v.begin(),v.end(),mytest); 
  // finds element in v  for which mytest is true 
    if (iter != v.end()) // found the element
        cout << "found " << *iter << endl;
    else
        cout << "not found" << endl;
}


