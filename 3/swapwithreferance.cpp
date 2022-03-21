#include <iostream>

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 15;

    Swap(x,y);
    std::cout << "x: " << x << "    y: " << y;


    return 0;
}
