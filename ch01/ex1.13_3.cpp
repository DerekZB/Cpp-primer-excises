#include <iostream>

int main()
{
  int num1 = 0, num2 = 0, i = 0;

  std::cin >> num1 >> num2;

  if (num1 <= num2)
  {
    for(i = num1; i <= num2; i++)
    {
      std::cout << i << " ";
    }
  }
  else
  {
    for(i = num1; i >= num2; i--)
    {
      std::cout << i << " ";
    }
  }

  return 0;
}
