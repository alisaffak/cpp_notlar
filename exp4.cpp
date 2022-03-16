//void func(......)
//şeklinde bir gonksiyon yazın. Bu fonksiyon 2 adet parametre alacak. Fonksiyona verilecek
//pointer ve boyut parametreleri ile fonksiyonun içinde bellek alanı oluşturup, dizinin
//elemanlarını 0'dan başlayarak 255'e kadar dolduracaksınız. 255'ten büyük bir dizi olması
//durumunda elemanın değeri 0 olacak. Fonksiyondan çıktıktan sonra parametre olarak verdiğiniz
//pointer'daki tüm elemanları ekrana bastırın..

#include <iostream>
#include "stdio.h"

using namespace std;

void func(const unsigned char**  const ptr, const int &size ){
    size = 300;
    *ptr = new unsigned char[size];
    auto temp = *ptr;
    for(int i = 0; i < size; i++){
        temp[i] = i;
    }
}

int main()
{
    unsigned char* a = nullptr;
    int size = 0;
    func(&a,size);

    for(int i=0; i < size; i++){
        cout << (int)a[i]<<endl;
    }
    if(a)
        delete[] a;

    a = NULL;

    return 0;
}
