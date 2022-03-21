#include <iostream>

int main(int argc, char const *argv[])
{
    int x = 10;
    int& r1 = x;
    int& r2 = r1;
    int& r3 = r2;

    ++r1;
    ++r2;
    ++r3;

    std::cout << "x: " << x << std::endl; //x 3 kez artar.
    
    return 0;
}
