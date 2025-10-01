// cap phat tinh : vd int a[1000];
// cap phat dong : tranh de tran bo nho mang khoang 1 ty ptu
// ham calloc , malloc
// cu phap ham malloc
#include <stdio.h>
#include <stdlib.h>
 int main(){
 	// dateType *pointerName = (Type_cast*)malloc(size_of_byte);
//   kieu dlieu *ten mang    = ep kieu       xin cap phat bnhieu byte
 int *ptr = (int*)malloc(1000000 * sizeof(int));  // 4 byte * 1000000 = 4M byte
  int n = 5;
  for(int i = 0; i < n; i++){
   scanf("%d", &ptr[i]);
   }
    for(int i = 0; i < n; i++){
    	printf("%d ", ptr[i]);
	}
	free(ptr); // giai phong bo nho xin cap phat
	return 0;
   
}
 
