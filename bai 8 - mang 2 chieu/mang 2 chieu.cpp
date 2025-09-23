// mang hai chieu
#include <stdio.h>
 int main(){
 	// DataType ArrayName[x][y];
 	// luu cac so int [3], [4]; : luu cac so gom 3 hang va 4 cot
 	// luu y phai truy cap vao hang truoc sau do den cot , 0--> x-1 voi x la so luong hang va 0-->y-1 voi y la cot
 	int a[3][4];
 	for(int i = 0; i < 3; i++){
 	 for(int j = 0; j < 4; j++){
 	 	printf("nhap phan tu cho hang %d, cot %d : ", i, j);
 	 	scanf("%d", &a[i][j]);
	  }	
	 }
	 for(int i = 0; i < 3; i++){
	 	for(int j = 0; j < 4; j++){
	 		printf("%d ", a[i][j]);
		 }
		 printf("%\n");
	 }
	 
	 
 }
