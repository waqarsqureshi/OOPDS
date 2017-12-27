#include<iostream>

using namespace std;

template <class T>

class mypair {
    T values [2];
  public:
    mypair (T first, T second){
        values[0]=first; values[1]=second;
    }
};

int main(){

mypair<int> myFirstObject(115,36); 
mypair<float> mySecondObject(115.3,36.2); 

cout<<"I am printing"<<endl;
	
}
