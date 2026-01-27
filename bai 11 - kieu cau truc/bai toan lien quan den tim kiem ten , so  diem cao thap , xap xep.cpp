// bai toan lien quan den tim kiem ten , so  diem cao thap , xap xep , ...
#include <stdio.h>
#include <string.h> // so sanh chuoi
#include <ctype.h>
#include <stdlib.h>

struct SV{
	char ma[50];
	char ten[100];
	float gpa;
};
typedef struct SV SV;
 
void nhap(SV *a){
	scanf("%s", a->ma); // nhap chuoi khong chua khoang trang nhung khi enter van con ki tu \n nen ta dung getchar
	getchar();
	gets(a->ten); // doc ca dong bao gom ki tu khoang trang
	scanf("%f", &a->gpa);
}

void in(SV a){
	printf("%s %s %.2f\n", a.ma, a.ten, a.gpa);
}
	
void timkiem1(SV *a, int n, char m[100]){   // cp the dung SV a[] 
	for(int i = 0; i < n; i++){
		if(strcmp(m, a[i].ma) == 0){ // // so sánh chuoi ma nhap vào voi ma cua SV thu i , neu trung thi in ra
			in(a[i]);
			return;
		}
	}
	printf("khong tim thay sinh vien co ma vua nhap\n");
	
}

int main(){
	int n; // so luong sinh vien
	scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++)
	nhap(&a[i]);
	for(int i = 0; i < n; i++)
	in(a[i]);
	char s[100];
	printf("nhap ma sinh vien can tim kiem : ");
	scanf("%s", s);
	timkiem1(a, n, s);
	
}
