// phep tinh + - * /
#include <stdio.h>
#include <math.h>
 int main(){
 	int a = 200 , b = 100;
 	char kitu;
 	scanf("%c", &kitu);
 	switch(kitu){
 		case '+':
 			printf("%d", a + b);
 			break;
 			case '-':
 				printf("%d", a - b);
 				break;
 				case '*':
 					printf("%d", a * b);
 					break;
 					case '/':
 						printf("%d", a * b);
 						break;
 						default:
 							printf("ket qua khong hop le");
 			
	 }
 }
