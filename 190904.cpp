#include <iostream>

int main() 
{
    std::cout << "hello world! " << "출력할 것들" << std::endl;

    std::cout << "hi" << std::endl << "my name is " << "hyo won" << std::endl;

    int i,sum=0;

    for (i = 0; i < 10; i++) 
    {
        sum += i;
    }

    std::cout << "sum is " << sum << std::endl ;

    return 0;
}