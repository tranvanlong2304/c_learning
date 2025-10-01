// gan 1 con tro de quan ly mang#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	int *b = a;
 	for(int i = 0; i < 10; i++)
 	printf("%d ", b[i]); // &b in vi tri cua b trong RAM , in gia tri cua b[i]
 	return 0;
 }

