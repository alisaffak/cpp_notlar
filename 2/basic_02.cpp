#include <iostream>

typedef long long mylong;

void func(unsigned mylong) //buradaki mylong üstte typedef yaptığımız mylong değildir öyle olsaydı ikinci fonksiyonu
{                          //yazdırırken aynı fonksiyona aynı tanımlamayı yaptığımız için hata alırdık.
    std::cout << '1';
}

void func(unsigned long long)
{
    std::cout << '2';
}

int main(int argc, char const *argv[])
{
    func(0U);               //Unsigned int türünden bir değer olduğu için ilk fonksiyon çalışır
    func(0ULL);             //unsigned long long olduğu için ikinci fonksiyon çalışır

    return 0;
}
