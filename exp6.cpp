//parametre olarak int tipinden değer alan ve *char olarak bu boyutta dizi dönen fonksiyon yazın

#include <iostream>

using namespace std;

char* allocate_memory(int size){
    char* elements = new char[size];;

    return elements;

}

int main()
{

    return 0;
}
