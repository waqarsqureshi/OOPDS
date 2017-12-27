/*
This is a program from the ref handouts
edited by Waqar Shahid
In this code we will implement a complex
class and use it in our program. 

*/
#include<iostream>
#include<string>
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
        Complex add (Complex other) const {
            T reSum = re+other.re;
            T imSum = im+other.im;
            return Complex(reSum,imSum);
        }               
        string toString() const {
            return (" "+to_string(re) + "+" + to_string(im) +"i");
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
    Complex<double> c2 = Complex<double>(1.1,1.3);
    Complex<double> sum = c2.add(c1);
    
    cout<<sum.toString()<<endl;

}
