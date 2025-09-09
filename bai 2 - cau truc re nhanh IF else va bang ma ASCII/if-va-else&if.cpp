// if va else if
#include <stdio.h>
#include <math.h>
 int main(){
 	int n;
 	scanf("%d", &n);
 	// nhap va mot thang trong nam va in so ngay tuong ung , bo qua nam nhuan
 	if( n == 1){
 		printf("31 ngay");
 	}
 		else if( n == 2){
 			printf("28 ngay");
 		}
 		else if( n == 3){
 			printf("31 ngay");
		 }
	 else{
	 	printf("du lieu cua ban khong hop le");
	 }
	  return 0;
} 
// co the viet tat ca if thi khong hieu qua bang else if vi khi su dung else if thi chi can dung no se ngung chay cac dieu kien khac
