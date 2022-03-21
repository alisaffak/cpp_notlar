#include <iostream>

void func(int(&r)[5]){
    for(int i = 0; i < 5; i++)
        r[i] *= 2;
}

int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};

    func(a);

    for(int val : a)
        std::cout << val << " ";

    return 0;
}
