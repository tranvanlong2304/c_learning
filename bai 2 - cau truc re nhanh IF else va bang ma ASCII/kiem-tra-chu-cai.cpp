//kiem tra la chu cai
#include <stdio.h>
#include <math.h>
 int main(){
 	char kitu;
 	scanf("%c", &kitu);
// 	if((kitu >= 'A') && (kitu <= 'Z') || (kitu >= 'a') && (kitu <= 'z')){
// 		printf("alpha");
// kiem tra ki tu so
 if((kitu >= '0') && (kitu <= '9')){
 	printf("Digit");
 }
	 return 0;
 }
