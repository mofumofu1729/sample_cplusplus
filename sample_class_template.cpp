#include <iostream>
#include <memory>

template <typename T>
class Number {
public:
  Number(T n); 
  void show();
private:
  const T number;
};

template <typename T>
Number<T>::Number(T n)
  : number(n)
{
}

template <typename T>
void Number<T>::show() {
  std::cout << number << std::endl;
}

int main(void) {
  const std::unique_ptr<Number<int>> number_int(new Number<int>(2));
  number_int->show();

  const std::unique_ptr<Number<float>> number_float(new Number<float>(2.1));
  number_float->show();
}
