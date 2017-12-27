// class templates
#include <iostream>
using namespace std;

template <class T>
class mypair {
  private:
    T a, b;
  public:
    mypair (T first, T second)
    {
        a=first; b=second;
    }
    
    T getmax ();
};

template <class T>
T mypair<T>::getmax ()
{
    T retval;
    retval = a>b? a : b;
    return retval;
}

int main () {
  mypair <int> myFirstObject (100, 75);
  mypair <double> mySecondObject (100.45, 75.345);
  cout << myFirstObject.getmax()<<endl;
  cout << mySecondObject.getmax()<<endl;;
  return 0;
}
