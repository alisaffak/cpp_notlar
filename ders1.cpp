#include <iostream>
#include <cstdio>

int g = 5;       //g statik ömür

void func(int a) 
{
    int x = 5;   //a ve x değişkeni otomatik ömürlüdür.

}

void func2(int a)
{
    int x = 5;          //dinamik ömür
    static int y = 1;   //statik ömür(yani fonksiyon bitse bile değeri aynı kalır)
}

void func3()
{
    int x;
    int y = x;  //undefined behavior olur bu sebele x'e initalization 
                //value vermemmiz gerekir 
}


int main(){
    {
    double dval = 3.9785; //copy initilization

    int ival(10);      //direct initilazition
    int ival{ 10 };    //direct initilazition ya da list initilization
    }
    
    {
    //narrowing conversation
    double x = 19.21156;
    int y = x //geçerli
    int z(x); //geçerli
    int j{x}; //geçersiz  
    }

    {
        int y;   //local olursa ilk değer olarak garbage value verilir. 
        int x{}; //value init. en çok tercih edilen türlerden biridir.
                 //local veya global olması farketmez zero init olur.
    }    

    return 0;
}


