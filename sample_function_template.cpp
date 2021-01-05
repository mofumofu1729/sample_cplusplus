#include <iostream>
#include <array>

using namespace std;


template <typename T>
T add(T a, T b) {
  return a+b;
}

template <>
float add(float a, float b) {
    return a-b;
}

template<size_t N>
auto make_array() {
    return array<int, N>{{}};
}

int main(void) {
  float a = 1.1;
  float b = 2.2;
  
  cout << a << " add " << b << " = " << add(a,b) << endl;

  int m = 1;
  int n = 2;

  cout << m << " add " << n << " = " << add(m,n) << endl;

  auto arr = make_array<4>();
  auto arr2 = make_array<5>();

  // type error
  //arr = arr2;
}
