// pass by value : truyen tham tri
// pass by reference : truyen tham chieu ( truyen tham chieu cho ham )
#include <stdio.h>
#include <stdlib.h>
void tang1(int n){
	n += 100;
}
void tang2(int *a){ // ham tang2 co tham so la mot con tro kieu int co ten la a
	*a += 100; // toan tu giai tham chieu
}
int main(){
	int a = 300;
	tang1(a);
	printf("gia tri cua bien a sau khi ham tang1 het thuc : %d\n", a);
	tang2(&a);
	printf("gia tri cua bien a sau khi ham tang2 het thuc : %d\n", a);
	return 0;
}

