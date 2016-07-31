#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book, new_item;

  if (std::cin >> book)
  {
    while (std::cin >> new_item)
    {
      book = book + new_item;
    }
  }
  std::cout << book << std::endl;
  return 0;
}
