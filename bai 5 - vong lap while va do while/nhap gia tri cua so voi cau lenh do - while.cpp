// nhap gia tri cua n la so nguyen khong am , neu nhap so am yeu cau nhap lai
#include <stdio.h>
 int main(){
 	int n;
 	do{
 		scanf("%d", &n);
 		if(n < 0)
		  printf("gia tri nhap khong hop le , vui long nhap lai\n");
 			
		 }while(n < 0);
	 return 0;
 }

