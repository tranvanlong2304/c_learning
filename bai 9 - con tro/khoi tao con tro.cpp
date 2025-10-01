// khoi tao con tro
#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int a = 300;
//  int *ptr = NULL; // khoi tao con tro kieu int
    int *ptr;
    ptr = &a; // & : toan tu dia chi
    //	if(ptr == NULL){
 	//	printf("con tro ptr chua tham chieu den bien nao ca ! ");
	//}
	printf("dia chi cua bien a : %d\n", &a);
	printf("gia tri cua con tro ptr : %d", ptr);
	 return 0;
 }
