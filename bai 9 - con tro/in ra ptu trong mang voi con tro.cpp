#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int a[5];
 	for(int i = 0; i < 5; i++){
 		scanf("%d", a + i);
	 } // &a[i] tuong duong voi a + i
	 // a[i] tuong duong voi *a + i
	 for(int i = 0;  i < 5; i++){
	 	printf("%d ", a[i]);
	 }
	 return 0;
 }
