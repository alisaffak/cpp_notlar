//C dili tekrarı için sorulmaktadır. Aşağıdaki kod hakkında yorum yapınız. Bu kodda bir sentaks 
//hatası var mı? Yok ise, bu kod çalıştırılırsa standart çıkış akımına ne yazılır? Bir derleyici
//ya da IDE kullanmadan yanıt veriniz.

#include <stdio.h>

int main()
{
	const int x = 55;
	int *ptr = (int *)&x; //const nesnelerin türünü değiştirmek tanımsız davranış yaratır. Burada const int türünden
						  // int* türüne değiştirilmiştir. Böyle bir kod yazılmamalıdır
	*ptr = 99;

	printf("x = %d\n", x);
}