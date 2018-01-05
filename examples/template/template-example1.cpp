/* This is my first template program
 ******written by Waqar Shahid******/
#include<iostream>
#include<string>
using namespace std;

template <class B, class C, class A>
A Sum(A z=0, B x=0, C y=0) {
   return x + y; 
}


int main(){

    int ix = 10; int iy = 20;
    double dx = 10.1; double dy = 30.2;
    float fx = 11.1; float fy = 32.2;
    char cx = 'A'; char cy = 'B';
    
    long sum_number = Sum(ix,iy,dy);
    
    cout<< "The sum of "<<ix<<" and "<<iy<<" is "<<sum_number<<endl;
    //cout<< "The sum of "<<dx<<" and "<<dy<<" is "<<Sum(dx,dy)<<endl;
    //cout<< "The sum of "<<fx<<" and "<<fy<<" is "<<Sum(fx,fy)<<endl;
    //cout<< "The sum of "<<cx<<" and "<<cy<<" is "<<Sum<char>(cx,cy)<<endl;
}

