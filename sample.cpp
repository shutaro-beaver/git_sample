#include <iostream>

int sum(int, int);
int multiple(int, int);

int main()
{
    int a = 5; int b = 3;
    std::cout << sum(a,b) << std::endl;

    a = 2;
    b = 6;
    std::cout << sum(a, b) << std::endl;
    std::cout << multiple(a, b) << std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a+ b;
}

int multiple(int a, int b)
{
    return a * b;
}