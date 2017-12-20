#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main() {
   Shape *s; Rectangle * rectangle;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   Shape *s2 = rec(5,8);;
   
   // call rectangle area.
   cout<<"r1 = "<<s2->area()<<endl;
   rectangle = &rec;
   cout<<"r2 = "<<rectangle->area()<<endl;
    
   // store the address of Triangle
   s = &tri;
   
   // call triangle area.
   cout<<"t = "<<s->area()<<endl;
   return 0;
}
