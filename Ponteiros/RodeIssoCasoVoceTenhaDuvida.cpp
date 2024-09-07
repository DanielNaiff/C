#include <iostream>

int main()
{
    int a = 10;
    int* c;
    
    std::cout<< a << std::endl;
    
    std::cout<< &a << std::endl;
    
    c = &a;
    
    std::cout<< c << std::endl;
    
    (*c) = 20;
    
    std::cout << a << std::endl;

    return 0;
}
