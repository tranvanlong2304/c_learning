//
#include <stdio.h>
 int main(){
//  while(1)
//  printf("lap vo han ");
// dem so luong chu so bang lenh : ans
// int n;
// scanf("%d", &n);
//  int ans = 0; //  dem so luong chu so
//  while(n != 0){
//  	++ans; // tang so luong chu so n len mot don vi
//  	n /= 10;
//  }
//  printf ("\n gia tri cua bien n sau vong lap : %d \n", ans);
// tinh tong chu so cua mot so
 int n;
  scanf("%d", &n);
  int sum = 0;
  while(n){
  	sum += n % 10; // cong chu so hang don vi vao sum
  	n /= 10;
  }
   printf("%d", sum);
   printf("\n gia tri cua bien n sau vong lap : ", n);
  return 0;
 
 }
