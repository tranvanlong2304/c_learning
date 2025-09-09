// cau truc re nhanh switch case , default , break 
#include <stdio.h>
#include <math.h>
 int main(){
// 	int n;
// 	scanf("%d", &n);
// 	switch(n){
// 		case 1:
// 			printf("31 ngay");
// 			break;
// 			case 2:
// 				printf("28 ngay");
// 				break;
// 				case 3:
// 					printf("31 ngay");
// 					break;
// 					case 4:
// 						printf("30 ngay");
// 						break;
// 						default:
// 							printf("du lieu nhap khong hop le");
//	 }
 	
 	
 //} cach 2 , gom cac thang trung nhau
 int n;
 scanf("%d", &n);
 	switch(n){
 		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         printf("31 ngay");
         break;
         case 4 : case 6 : case 9 : case 11 :
         	printf("30 ngay");
         	break;
         	case 2:
         		printf("28 ngay");
         		break;
         		default:
         			printf("du lieu deo hop le !");
	 }
	
 }
