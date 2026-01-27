// khoi tao struct
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct struct_Name{
	// data
};
struct SinhVien{
	char ma[20];
	char ten[60];
	double gpa;
	char lop[20];
};
typedef struct SinhVien SV; // viet tat sinh vien

 int main(){
 	SV a;
 	// dot operator : dau cham de truy cap
 	scanf("%s", a.ma);
 	getchar();
 	gets(a.ten);
 	scanf("%lf %s", &a.gpa, a.lop);
 	printf("%s %s %.2f %s\n", a.ma, a.ten, a.gpa, a.lop);
 	SV b = a; // gan thong tin sinh vien a cho sinh vien b va in ra 2 thong tin sv giong nhau
 	printf("%s %s %.2f %s\n", b.ma, b.ten, b.gpa, b.lop);
 	return 0;
 }

