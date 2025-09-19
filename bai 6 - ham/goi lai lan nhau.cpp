// goi lai lan nhau , khi ham a goi ham b thi phai xay dung ham b truoc ham a
// khai bao nguyen mau ham de tranh bi loi : void Xin_chao();
#include <stdio.h>                         //int tong(int n);
#include <math.h>
 int tong(int n){
 	return n * (n + 1) / 2;
 }
 void Xin_chao(){
 	printf("hello !\n");
 	printf("%d", tong(100));
 }
 int main(){
 	Xin_chao();
 	return 0;
 }

 
