//Asağıdaki kod hakkında yorum yapmanız isteniyor:
//Bu kod C dilinin kurallarına göre değerlendirilirse ne olur?
//C++ dilinin kurallarına göre derlenirse ne olur? Açıklayınız.

#include <stdio.h>


int nec = 0;

int main()
{
	struct nec {
		char str[64];
	};
	printf("sizeof(nec) = %zu\n", sizeof(nec)); 
	//C++'da sonuç olarak 64 yazdırılır ama C dilinde nec sözcüğünün önüne struct 
	//yazılmalıdır. Yazılmadığı taktirde namelookup yapar ve main fonsiyonun içinde bir 
	//bulamaz ve global nec'i bulur ve sıfır değeri ekranda yazılı olur

	
}