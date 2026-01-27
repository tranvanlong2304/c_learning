// struct long nhau
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct date{
	int ngay, thang, nam;
};
struct hour{
	int gio, phut, giay;
};
struct Ve{
struct	date NgayXem;
struct	hour GioXem;
	char TenPhim[100];
	double GiaVe;
};
 
 int main(){
 	struct Ve v; // dat ten ghi tat de de truy cap tt
 	v.GiaVe = 1000000;
 	sprintf(v.TenPhim, "Pham Nhan Tu Tien");
 	v.NgayXem.ngay = 02;
 	v.NgayXem.thang = 10;
 	v.NgayXem.nam = 2025;
 	v.GioXem.giay = 00;
 	v.GioXem.phut = 00;
 	v.GioXem.gio = 12;
    printf("Phim: %s\n", v.TenPhim);
    printf("Gia ve: %.0f\n", v.GiaVe);
    printf("Ngay xem: %02d:%02d:%02d\n", v.NgayXem.ngay, v.NgayXem.thang, v.NgayXem.nam);
    printf("Gio xem: %02d:%02d:%02d\n", v.GioXem.gio, v.GioXem.phut, v.GioXem.giay);

    return 0;
 	
 	
 }
