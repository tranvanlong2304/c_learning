// xay dung ham in ra tong cac so tu 1 toi n
#include <stdio.h>
#include <math.h>
 void Xin_chao(){
 	printf("hello\n");
 }
 int tong(int n){
 	int sum = 0;
 	for(int i = 1; i <= n; i++){
 		sum += i;
	 }
 	return sum;
 }
 int max(int a, int b){ // ham co 2 tham so
 	if(a > b) return a;
 	else return b;
 }
 int main(){
 	printf("%d", max(100, 200));
 	return 0;
 }
 
 // parameter : tham so
 // arguments : doi so or tham so that su
 // pass by value : truyen gia tri
// int main(){
// 	int x = 50;
// 	int kq = tong(x);// loi goi ham
// 	printf("%d", kq);
// 	return 0;
// }
