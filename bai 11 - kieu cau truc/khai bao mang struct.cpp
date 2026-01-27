// bai toan voi mang struct
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct HocSinh{
	char ten[100];
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
void in(HS a){
	printf("%s %.2lf\n", a.ten, a.diem);
}
// duung con tro
void in2(HS *x){
	getchar();
	gets(x->ten);
	scanf("%lf", &x->diem);
}
int main(){
    HS a[1000];
    int n;
    scanf("%d", &n);
    for(int i = 0;  i < n; i++)
    in2(&a[i]);
    for(int i = 0;  i < n; i++)
    in(a[i]);
 
}
