#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
// mang ki tu
// strlen : dem so ki tu bao gom ca dau cach
int main(){
	char a[100] = "tran van long";
	char b[100] = {'a', 'b', 'c', 'd'};
	printf("%s\n%s ", a, b);
	printf("%d", strlen(a));
	
}
