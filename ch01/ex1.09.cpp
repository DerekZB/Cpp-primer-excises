#include <iostream>

int main()
{
    int result = 0;
    int i = 50;
    while (i <= 100)
    {
        result = result + i;
        i ++;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << result << std::endl;
    return 0;
}
