// moi quan he giua mang mot chieu va con tro
#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	printf("gia tri cua bien a : %d\n", a); // a la hang co tro
 	for(int i = 0; i < 10; i++)
 	printf("dia chi cua phan tu a[%d] : %d\n", i, &a[i]);
 	return 0;
 }
