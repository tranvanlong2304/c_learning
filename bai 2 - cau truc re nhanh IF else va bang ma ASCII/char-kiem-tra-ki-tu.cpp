// char : kiem tra ki tu la chu so , in hoa, in thuong , chu cai , hoa--> thuong , thuong-->hoa
// A-->Z : 65-90
//a-->z : 97-122
//0-->9 : 48-57
#include <stdio.h>
#include <math.h>
// in hoa
// int main(){
// 	char kitu;
// 	scanf("%c", &kitu);
// //	printf("%d", kitu); kiem tra chu cai o vi tri thu may
//    if((kitu >= 65) && (kitu <= 90)){
// 	printf("uppercase");
// }
// 	return 0;
// }
//-----------
// in thuong
int main(){
	char kitu;
	scanf("%c", &kitu);
	if((kitu >= 'a') && (kitu <= 'z')){
		printf("lowercase");
	}
      return 0;
}







