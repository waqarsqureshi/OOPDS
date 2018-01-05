#include <vector>
#include <iostream>
#include<iostream>
using namespace std;

int max(vector<int>::iterator start, vector<int>::iterator stop)
{
    int max_num=*start;
    while(start != stop)
      {
          if (*start > max_num)
             max_num=*start;
          ++start;
      }
      return max_num;
}

int main (){


    int arr[] = {12, 3, 17, 8,23,34};  // standard C array
    vector<int> v(arr, arr+6);  // initialize vector with C array 
    vector<int>::iterator iter;  // iterator for class vector
    // define iterator for vector and point it to first element of v
    for (iter=v.begin();iter!=v.end();iter++){
        cout<<"element of v=" << *iter<<endl; // de-reference iter
    }
    
    cout << "max of v = " << max(v.begin(),v.end());

}
