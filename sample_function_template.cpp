#include <iostream>

using namespace std;


template <typename T>
T add(T a, T b) {
  return a+b;
}

int main(void) {
  int a = 1;
  int b = 2;
  
  cout << a << " + " << b << " = " << add(a,b) << endl;
}
