#include <stdlib.h>

enum Color {Blue, Red, Yellow};
enum Fruit { Apple, Melon, Mango};

foo(int, int);                  //fonksiyonun başına türünü yazmalıyız 
int func();

double sum(a, b)                //noklı virgül koyulmalı
double a, b;                    //doğrusu sum(a,b) olmalı
{
	return a + b;
}

int f(int x, int)
{
	return x * x;
}

int g1 = func();
const int g2;

int main()
{
	const int ci1;              //const ifadelere ilk değer ataması yapılmak zorundadır
	const int ci2 = func();
	const c3 = 123;             //değişkenin türü belli değil
	char *p1 = "necati";
	int i1 = 12.5;              //double türünden int türüne implicity type conversation olur
	int i2 = Red;

	enum Color color1 = 2;      //int türünden bir değere atama yapılamaz
	enum Color color2 = 19;     //int türünden bir değere atama yapılamaz
	enum Color color3 = Mango;  // Color türünde bir varlığı başlatmak için Fruit varlığı
    //                           kullanılamaz
  
	char str[3] = "ali";        //doğrusu char str[4] = "ali" çünkü sonunda sonlandırma simgesi vardır
	enum Color color = Red;
	++color;                    //geçersiz operatör
	Fruit f = Mango;
	const int cx = 10;
	int ival = 56;
	func(ival);                 //fonksiyon tanımlanırken hiç bir parametre girilmemiş
	int *ptr = &cx;             //int türünde bir değeri başlatmak için const int türünde bir değer
                                //kullanılamaz. Doğrusu const int *ptr = &cx; olmalıdır.
	char *cptr = &ival;         //char* türünde bir varlığı başlatmak için int* türünde bir değişken
                                //kulllanılamaz
	const int *p2 = &ival;
	int *p3 = malloc(10 * sizeof(int)); //int* türünde bir varlığı başlatmak için 
                                        //void* türünde bir değişken kullanılamaz
                                        // doğrusı  (int *)malloc(10 * sizeof(int)) olmalı
	int *p4 = 0;
	int *p5 = NULL;
}