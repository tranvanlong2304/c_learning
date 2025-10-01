// null : '\0' : ki tu ket thuc xau
// fgets(a, so ky tu, stdin); : in ra so ky tu mong muon
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char a[100] = "long cac to vcl ra";
	a[4] = '\0';
//	printf("%c", a[strlen(a)]); : in ra gtri null
	printf("%s", a);	
}
