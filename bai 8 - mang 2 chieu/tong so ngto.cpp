// tinh tong cac so ngto
// chu y: khi khai bao mang thi hay khai bao lon nhat co the
// vd : hay khai bao A co n hang va m cot ( n > 1, m < 500 ) thi ta nen khai bao a[500][500];
// khi so qua lon ma tran bo nho thi ta co the de no ngoai ham main
#include <stdio.h>
#include <math.h>
 int nt(int n){
 	for(int i = 2; i <= sqrt(n); i++){
 		if(n % i == 0)
 		return 0;
	 }
	 return n > 1;
 }	
 int main(){
 	int n, m;
 	scanf("%d %d", &n, &m);
 	int a[n][m];
 	for(int i = 0; i < n; i++){
 		for(int j = 0; j < m; j++){
 			scanf("%d", &a[i][j]);
		 }
	 }
 	int sum = 0;
 	for(int i = 0 ; i < n; i++){
 		for(int j = 0; j < m; j++){
 			if(nt(a[i][j]))
 			sum += a[i][j];
		 }
	 }
	 printf("%d", sum);
}
