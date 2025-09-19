// kiem tra mot so nguyen ko am co phai la so chinh phuong hay kh , neu co in Yes , neu khong in No
#include <stdio.h>                         //int tong(int n);
#include <math.h>
 int Chinh_phuong(int n){
 	int can = sqrt(n);
 	if(can * can == n)
 	return 1; // n la so chinh phuong
 	else return 0; // n khong phai la so chinh phuong
 	// khi kiem tra dung sai thi ta nen tra ve 1 or 0 , yes or no
 	
 }
 int main(){
 	int n = 19;
 	if(Chinh_phuong(n) == 1)
   	 printf("Yes\n");
 	else 
 	{
 		printf("No\n");
 		return 0;
	 }
	 
 }
 
