#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
// duyet so ky tu
// strlen : dem so ki tu bao gom ca dau cach
int main(){
	char a[100];
//	scanf("%s", a);
    gets(a); // nhap duoc dau cach ( tinh dc gtri sau dau cach ) . khi gap phim enter thi no se dung lai
	for(int i = 0; i < strlen(a); i++){
      printf("%c\n", a[i]);
	}
}
