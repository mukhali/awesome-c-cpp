#include<iostream>
using namespace std;

template <typename T> class A
{
  friend T;
private:
  A() {}
  ~A() {}
};

class B : virtual public A<B>
{
public:
  B() {
    cout << "B constructor" << endl;
  }
  ~B() {}
};

// class C : virtual public B
// {
// public:
//   C() {}
//   ~C() {}
// };

int main( void )
{
  B b;
  //C c;
  return 0;
}
