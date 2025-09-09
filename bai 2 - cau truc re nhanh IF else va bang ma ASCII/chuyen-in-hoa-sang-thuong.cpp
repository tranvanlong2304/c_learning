// chuyen tu ki tu hoa--> thuong
// nhap vao mot ki tu , neu no la in hoa thi chuyen sang dang in thuong
// chu cai in hoa co ma ASCII lon hon chu cai in thuong 32 don vi
#include <stdio.h>
#include <math.h>
// int main(){
// 	char kitu;
// 	scanf("%c", &kitu);
// 	if((kitu >= 'A' && kitu <= 'Z')){
//	 kitu += 32;
//	 }
//	 printf("%c", kitu);
// 	return 0;
// }
 // chuyen tu in thuong sang in hoa
 int main(){
 	char kitu;
 	scanf("%c", &kitu);
 	if((kitu >= 'a' && kitu <= 'z')){
 	 kitu -= 32;	 
 }
  printf("%c", kitu);
   return 0;
}
