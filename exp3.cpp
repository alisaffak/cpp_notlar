//source dizisindeki elemanları tek ve çift şeklinde iki adet dizi oluşturarak herbirine dağıtın bu işi mümkün olan en
//küçük pointer dizileri ile yapın.
// int source[] = {23,65,20,30,40,100,21,39,41}

#include <iostream>
#define DATA 9
using namespace std;

int main()
{
   unsigned char  source[DATA] = {23,65,20,30,40,100,21,39,41};
   unsigned char *even_number = nullptr, *odd_number = nullptr;
   unsigned char evncnt=0, oddcnt=0;

   for(unsigned char i = 0; i < DATA; i++){

        if(source[i] % 2 == 0){      
           
            even_number = (unsigned char*) realloc(even_number, ++evncnt);
            even_number[evncnt-1] = source[i];
        }
        else if(source[i] % 2 != 0){
           
           odd_number = (unsigned char*) realloc(odd_number, ++oddcnt);
           odd_number[oddcnt-1] = source[i];
        }
    }

    for(int i=0; i <oddcnt; i++)
        cout<<"odd number: "<< (int)odd_number[i]<<"\n";
   
    for(int i=0; i < evncnt; i++)
        cout<<"even number: "<< (int)even_number[i]<<"\n";        
}
