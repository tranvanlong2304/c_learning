// null : '\0' : ki tu ket thuc xau
// fgets(a, so ky tu, stdin); : in ra so ky tu mong muon
// gets(kytu) : doc ky tu
// fgets(kytu) : doc n-1 ky tu va ket thuc boi null
// fgets khac gets la no doc ca phim enter . vi du long co 4 chu thi no dem dc 5 ky tu
// a[strlen(a) - 1] = '\0'; : loai bo ky tu null
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char a[100];
	fgets(a, 20, stdin);  
	a[strlen(a) - 1] = '\0'; // loai bo ky tu null ( phim enter sau cung ) . vd long = 4 ki tu
	printf("%d", strlen(a));	
}
