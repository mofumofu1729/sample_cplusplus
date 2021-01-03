#include <iostream>
#include <array>

using namespace std;


template <typename T>
T add(T a, T b) {
  return a+b;
}

template<size_t N>
auto make_array() {
    return array<int, N>{{}};
}

int main(void) {
  int a = 1;
  int b = 2;
  
  cout << a << " + " << b << " = " << add(a,b) << endl;

  auto arr = make_array<4>();
  auto arr2 = make_array<5>();

  // type error
  arr = arr2;
}
