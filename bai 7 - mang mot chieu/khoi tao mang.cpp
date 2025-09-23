// khoi tao mang
#include <stdio.h>
 int main(){
 	int a[5];
 	for(int i = 0; i < 5; i++){
 		printf("nhap gia tri cho phan tu thu %d : ", i + 1);
 		scanf("%d", &a[i]);
	 }
	 // in ra gia tri vua nhap vao
    for(int i = 0; i < 5; i++)
    printf("%d ", a[i]);
	// muon in tu duoi len thi
	printf("\n");
	for(int i = 4; i >= 0; i--)
	 printf("%d ", a[i]);
	 return 0;
 }
