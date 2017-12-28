/*
This is a program from the ref handouts
edited by Waqar Shahid
In this code we will implement a complex
class and use it in our program. 

*/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

template <class T>
class Complex {
    private:
        T re,im;
    public:
        Complex (T re, T im){
            this->re = re;
            this->im = im;
        }
        
        Complex (const Complex & toCopy){
        // add a copy constructor 
            this->re = toCopy.re;
            this->im = toCopy.im;
        }
        Complex operator+ (Complex & other) const {
            T reSum = this->re+other.re;
            T imSum = this->im+other.im;
            return Complex(reSum,imSum);
        }
               
        string toString() const {
            if(im<0)
            return (" "+to_string(re) + "-" + to_string(im) +"i");
            else
            return (" "+to_string(re) + "+" + to_string(im) +"i");
        }        
        
        friend ostream & operator<< (ostream &out, const Complex & c){
           return (out << " "+to_string(c.re) + "+" + to_string(c.im) +"i");
       }
        
};
 
 

// This is to make you learn how to give an input file as argument
//int main (int argc, char* argv[]){
//    std::cout << "Have " << argc << " arguments:" << std::endl;
//    for (int i = 0; i < argc; ++i) {
//        std::cout << argv[i] << std::endl;
//}

int main (){

// create two complex numbers
    
    Complex<double> c1 = Complex<double>(1.5,-3.2);
    Complex<double> c2 = Complex<double>(1,5);
    Complex<double> sum = c1+c2;
    
    cout<<sum<<endl;

}
