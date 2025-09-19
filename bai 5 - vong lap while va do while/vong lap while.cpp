// vong lap while
#include <stdio.h>
//while(testExpression){
	// code
//}
 int main(){
 	int i = 1;
 	while(i <= 10){ // neu dieu kien vong lap while sai thi no se bo qua va thuc hien lenh phia duoi }
 		printf("%d ", i);
 		if(i == 5) continue;
 		i++;
	 }
	 printf("\n");
	 printf("gia tri cua bien i sau vong lap while : %d", i);
	 return 0;
 	
 }
