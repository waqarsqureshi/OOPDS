#include<iostream>
using namespace std;

    class A {
        public:
            A() { cout << "A ctor" << endl; }
            A(const A& a) { cout << "A copy ctor" << endl; }
            virtual ~A() { cout << "A dtor" << endl; }
            virtual void foo() { cout << "A foo()" << endl; }
            virtual A& operator=(A &rhs) { cout << "A op=" << endl; return rhs; }
};

class B : public A {
    public:
        B() { cout << "B ctor" << endl; }
        virtual ~B() { cout << "B dtor" << endl; }
        virtual void foo() { cout << "B foo()" << endl; }
        B& operator=(B &rhs) { cout << "B op=" << endl; return rhs; }
    protected:
        A mInstanceOfA; // don't forget about me!
};

A foo(A& input) {
input.foo();
return input;
}
// main function
int main() {
    cout<<"===Lets starts printing==="<<endl;
    cout<<"===Make a B object==="<<endl;
    B myB;
    cout<<"===Make another B object==="<<endl;
    B myOtherB;
    cout<<"===Make an A object==="<<endl;
    A myA; A myOtherA;
    cout<<"===Copy B==="<<endl;
    myOtherB = myB;
    cout<<"===Run foo and use operator= overload ==="<<endl;
    myOtherA = myA;
    //myA = foo(myOtherB);
    cout<<"===The End==="<<endl;
}
