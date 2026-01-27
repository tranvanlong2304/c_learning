// sap xep theo 1 trat tu , kieu ,..
// co 2 cach
// cach 1 : tu code
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

	
void timkiem2(SV a[], int n){
	float res = 0;
	int pos;
	for(int i = 0; i < n; i++){
		if(a[i].gpa > res){
			res = a[i].gpa;
			pos = i;
		}
	}
	in(a[pos]);
}
	
void sx(SV a[], int n){
	for(int i = 0; i < n; i++){
    int max_idx = i; // gia su ban dau phan tu i la lon nhat
    for(int j = i + 1; j < n; j++){ // cap nhat cac so phia sau
        if(a[j].gpa > a[max_idx].gpa){  // lay so lon nhat
            max_idx = j; // gan gtri
        }
    }
    SV tmp = a[i]; // luu tam gia tri ( chuc nang cua bien tmp )
    a[i] = a[max_idx]; // a[i] co gtri lon nhat
    a[max_idx] = tmp; // dat lai so lon nhat = a[i] dc luu tam thoi trong tmp
 }

}
// cach 2 : dung qsort 
int main(){
	int n; // so luong sinh vien
	scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++)
	nhap(&a[i]);
	for(int i = 0; i < n; i++)
	in(a[i]);
	sx(a, n);
	for(int i = 0; i < n; i++)
	in(a[i]);
	
}
