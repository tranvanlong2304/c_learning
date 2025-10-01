// dereference operator * : toan tu giai tham chieu
// & : dia chi cua bien
// * : gia tri tai dia chi cua bien
// ptr : dia chi cua bien
// *ptr : gia tri cua bien tai dia chi do
#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int a = 300;
    int *ptr;
    ptr = &a;
	printf("dia chi cua bien a : %d\n", &a);
	printf("gia tri cua tro ptr: %d\n", ptr);
	//
	printf("gia tri cua bien a : %d\n", a);
	printf("gia tri cua bien ma con tro ptr dang quan ly : %d\n", *ptr);
	// 
	*ptr = 1000;
	printf("gia tri cua bien a : %d\n", a);
	printf("gia tri cua bien ma con tro ptr dang quan ly : %d", *ptr);
	
	 return 0;
 }
