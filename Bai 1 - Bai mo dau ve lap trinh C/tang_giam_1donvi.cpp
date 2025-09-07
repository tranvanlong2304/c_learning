// toan tu tang giam 1 don vi ( ++ or -- )
// a++ : tang sau --> vi du a = 100 , b = a++ thi b = a = 100 vi ta gan b = a truoc
// ++a : tang truoc ----> vi du a = 100 , b = ++a thi b = ++a = 101 vi ta gan b = ++ truoc 
#include <stdio.h>
 int main(){
 	int a = 36; // do ++a nen ta tang truoc cho a roi sau do gan cho b
	int b = ++a;
 	printf ("gia tri cua a la: %d\n", a);
 	printf ("gia tri cua b la: %d\n", b);
 	return 0;
 	
 }

