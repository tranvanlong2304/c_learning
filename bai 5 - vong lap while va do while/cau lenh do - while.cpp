// vong lap do while
// do{
       // code
// }while(testExpression);
// dieu kien cua do ma dung voi dkien cua while thi quay lai tiep tuc chay , con sai thi no se ket thuc ngay
#include <stdio.h>
 int main(){
 	int i = 1;
 	do{
 	 printf("gia tri cua bien i : %d\n", i); 
 		++i;
	 }while(i <= 5);
	 printf("gia tri cua bien i sau vong lap la :%d", i);
	 return 0;
 	
 }
