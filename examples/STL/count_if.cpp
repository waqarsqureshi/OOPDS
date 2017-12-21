#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool mytest(int n) { return (n>14) && (n <36); };

int main (){
    int arr[] = { 12, 3, 17, 8, 34, 56, 9  };  // standard C array
    vector<int> v(arr, arr+7);  // initialize vector with C array 
    int n=count_if(v.begin(),v.end(),mytest); 
    // counts element in v  for which mytest is true 
    cout << "found " << n << " elements " << endl;

}

