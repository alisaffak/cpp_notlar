#include <iostream>

void func(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 10;

    func(&x,&y);
    std::cout << "x: " << x << "    y: " << y;
    
    return 0;
}
