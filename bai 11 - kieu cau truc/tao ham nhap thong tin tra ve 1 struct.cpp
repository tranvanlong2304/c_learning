// xay dung ham voi tham so struct
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct HocSinh{ 
	char ten[100]; // mang char
	double diem; 
};
typedef struct HocSinh HS;
// nhap thong tin tra ve 1 struct
HS cachnhap1(){
	HS x;
	gets(x.ten);
	scanf("%lf", &x.diem);
	return x;
}
void in(HS *a){
	printf("%s %lf\n", a->ten, a->diem);
}
// dung con tro
void in2(HS *x){
	gets(x->ten);
	scanf("%lf", &x->diem);
}
int main(){
//	HS a = cachnhap1();
    HS a;
    in2(&a);
	in (&a);
}
