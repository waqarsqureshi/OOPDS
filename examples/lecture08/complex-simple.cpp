/*
This is a program from the ref handouts
edited by Waqar Shahid
In this code we will implement a complex
class and use it in our program. 
We have overloaded a few operators 
to make our life simple
*/
#include<iostream>
#include<string>
using namespace std;

class Complex {
    private:
        double re,im;
    public:
        Complex (double re, double im){
            this->re = re;
            this->im = im;
        }
        
        Complex (const Complex & toCopy){
        // add a copy constructor 
            this->re = toCopy.re;
            this->im = toCopy.im;
        }
        Complex add (Complex other) const {
            double reSum = re+other.re;
            double imSum = im+other.im;
            return Complex(reSum,imSum);
        }
        
        string toString() const{
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
    Complex c1 = Complex(1.5,-3.2);
    Complex c2 = Complex(1.1,1.3);
    Complex sum = c1.add(c2);
    cout<<sum.toString()<<endl;

}
