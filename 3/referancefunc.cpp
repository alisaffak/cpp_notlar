//fonksiyonu int ref yaparsak func fonksiyonu g değişkeninin yerine geçer.

#include <iostream>

int g = 10;

int& func()
{
    //... kod parçaları
    return g;
}

int main(int argc, char const *argv[])
{
    std::cout << "g1: " << g << std::endl;

    func();
    std::cout << "g2: " << g << std::endl;

    func() = 98;
    ++func(); //g değişkeni de artar
    std::cout << "g3: " << g << std::endl;

    return 0;
}