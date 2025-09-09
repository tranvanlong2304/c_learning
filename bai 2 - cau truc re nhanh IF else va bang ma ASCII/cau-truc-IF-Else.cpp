// cau truc if - else
#include <stdio.h>
#include <math.h>
 int main(){
 	int n;
// 	scanf("%d, &n");
// 	if(( n >=  50)){
//	  if(( n <=100)){
//	 printf("N nam trong doan tu 50-100 !"); 	
//	  }
//	 }
// 	printf("kq tren la dung");
// giai bai toan nam nhuan : chia het cho 400 hoac chia het cho 4 va khong chia het cho 100
scanf("%d", &n);
if(( n % 400 == 0 || n % 4 == 0 && n != 100)){
	printf("N la nam nhuan");
}
 else{
 	printf("N khong phai la nam nhuan");
 	// chu y : co if co the khong can co else nhung co else thi bat buoc phai co if di truoc
 }
     return 0;
 }
