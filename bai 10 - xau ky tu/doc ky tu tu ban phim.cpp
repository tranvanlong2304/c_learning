// scanf("\n") : doc cac dau cach va enter den cuoi cung
// getchar();  : doc 1 ky tu tu ban phim ( chi dung voi 1 phim enter )
// fflush(stdin); : lam rong bo nho ( it dung )
// phim gets khong de lai phim enter trong bo nho
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int x;
	scanf("%d", &x);
	scanf("\n"); // co the dung getchar(); de bo qua mot ky tu giup tiep tuc cau lenh phia duoi
	char a[1000] , b[1000];
	gets(a);
	gets(b);
	printf("%s\n%s", a, b);
}
