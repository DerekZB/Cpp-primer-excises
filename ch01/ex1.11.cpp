#include <iostream>

int main()
{
  int num1 = 0, num2 = 0, i = 0;

  std::cin >> num1 >> num2;

  if (num1 == num2)
  {
    std::cout << num1 ;
  }
  else if (num1 < num2)
  {
    while (num1 <= num2)
    {
      std::cout << num1 ++ << " " ;
    }
  }
  else
  {
    while (num1 >= num2)
    {
      std::cout << num1 -- << " " ;
    }
  }
  return 0;
}
