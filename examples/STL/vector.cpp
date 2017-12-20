#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> v(3);  // create a vector of ints of size 3
    v[0]=23;
    v[1]=12;
    v[2]=9;    // vector full 
    v.push_back(17);   // put a new value at the end of array
    for (int i=0; i<v.size(); i++){   // member function size() of vector
        cout << v[i] << " ";   // random access to i-th element
    }
    cout << endl;
    
    return 0;
}
