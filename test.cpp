#include <iostream>
#include <vector>
#include "test.h"

int main()
{
     MyClass obj;
     obj.setNumber(4);

     std::cout << obj.getNumber() << std::endl;
     std::vector<int> vec;

     for(int x = 0; x < 10; x++)
     {
         std::cout << x << std::endl;
     }
     return 0;
}

