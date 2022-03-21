//Parametre olarak int pointer ve boyut bilgisi alan ve fonksiyon içinde 
//de o pointer dizisinin yarısından sonuna kadar olan tüm 
//tüm değerleri sıfır yapan  bir fonksiyon yazın

#include <iostream>
#include <string.h>


void array(int* ptr, const int size)
{
    memset(ptr + size/2, 0, size/2 * sizeof(int));
}

int main(){
  
    int list[] = {10,20,30,40,50,60,62,65,67,80};
    int n  = sizeof(list) / sizeof(list[0]);
    
    array(list,n);
    
    for(int i = 0; i < n; i++){
      std::cout << list[i]<< std::endl;
    }  
        
    return 0;
}

