// Exam Question 01
// prepared by Waqar Shahid
#include<iostream>
#include<stdlib.h>
using namespace std;
 
int sumUpTo(int n);

int main(){

int num=5;

cout <<sumUpTo(num)<<endl;

}

int sumUpTo(int n){
    if(n==1){
        
        return 1;
    }
    else{
        return (n+sumUpTo(n-1));
    }
}

        



