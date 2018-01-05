/*
This is a program from the ref handouts
edited by Waqar Shahid
In this code we will implement a complex
class and use it in our program. 
We have overloaded a few operators 
to make our life simple

compile this file as follows:
g++ filename.cpp -std=c++0x
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
//        // add a copy constructor 
            this->re = toCopy.re;
            this->im = toCopy.im;
        }
        Complex operator+ (const Complex &other) const {
            double reSum = re+other.re;
            double imSum = im+other.im;
            return Complex(reSum,imSum);
        }
        Complex operator+ (int other) const {
            double reSum = re+other;
            double imSum = im+0;
            return Complex(reSum,imSum);
        }
        friend Complex operator+ (int other1,Complex other2)  {
            double reSum = other2.re+other1;
            double imSum = other2.im+0;
            return Complex(reSum,imSum);
        }         
        Complex operator- (const Complex & other) const{
            double reDiff = re - other.re;
            double imDiff = im - other.im;
            return Complex(reDiff,imDiff);
        
        }
        Complex operator* (const Complex & other) const{
            double reProd = re * other.re;
            double imProd = im * other.im;
            return Complex(reProd,imProd);
        
        }
        bool operator== (const Complex & other) const{
            return (re==other.re && im==other.im);
        
        }
        bool operator!= (const Complex & other) const{
            return !(re==other.re && im==other.im);
        
        }                 
        
        string toString() const{
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
    Complex c1 = Complex(1.5,-3.2);
    Complex c2 = Complex(1.1,1.3);
    //Complex c3 = Complex(c2);
    Complex c4 = c2;
    c2 = c1;
    int num = 7;
    Complex sum = num+c2;
    Complex diff = c1-c2;
    Complex mul = c1*c2;
    cout<<"c2"<<c2<<"c4"<<c4<<"==== "<<"Sum"<<sum<<" ;Diff"<<diff<<" ;Mul"<<diff<<endl;

}
