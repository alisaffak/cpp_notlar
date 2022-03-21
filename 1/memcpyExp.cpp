//Parametre olarak  int pointer, boyut ve int pointer alan ve 1. 
//parametredeki pointer dizisinin içinin aynısını 3. 
//parametredekine kopyalayan bir fonksiyon yazın

#include <iostream>
#include "string.h"

void func(int* ptr, int size, int** const copyptr)
{   
    *copyptr = new int[size];
    int* temp = *copyptr;
    memcpy(temp,ptr,size * sizeof(int));   
}

int main(int argc, char const *argv[])
{    
    int list[] = {10,20,30,40,50,60,62,65,67,80};
    auto size = sizeof(list)/sizeof(list[0]);
    
    int* a = nullptr;
    func(list,size,&a);

    for(int i = 0; i<size; i++){
        std::cout<<(int)a[i]<<std::endl;
    }

    return 0;   
}
