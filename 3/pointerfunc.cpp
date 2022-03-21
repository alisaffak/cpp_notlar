//pointerları kullanarak fonksiynun geri dönüş değeri aslında değiştiriebilir.
 

#include <iostream>

int g = 10;

int* func()
{
    //... kod parçaları
    return &g;
}

int main(int argc, char const *argv[])
{
    std::cout << "g1: " << g << std::endl;

    func();
    std::cout << "g2: " << g << std::endl;

    *func() = 98;
    std::cout << "g3: " << g << std::endl;

    return 0;
}


