/* This is my first template program
 ******written by Waqar Shahid******/
#include<iostream>

using namespace std;

template <typename T>
T Sum(T x, T y) {
   return x + y; 
}

int main(){

    int ix = 10; int iy = 20;
    double dx = 10.1; double dy = 30.2;
    float fx = 11.1; float fy = 32.2;
    char cx = 'A'; char cy = 'B';
    cout<< "The sum of "<<ix<<" and "<<iy<<" is "<<Sum(ix,iy)<<endl;
    cout<< "The sum of "<<dx<<" and "<<dy<<" is "<<Sum(dx,dy)<<endl;
    cout<< "The sum of "<<fx<<" and "<<fy<<" is "<<Sum(fx,fy)<<endl;
    cout<< "The sum of "<<cx<<" and "<<cy<<" is "<<Sum(cx,cy)<<endl;
}

