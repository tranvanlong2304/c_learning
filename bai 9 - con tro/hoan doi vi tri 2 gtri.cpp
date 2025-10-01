// hoan doi 2 gtri cho nhau 
#include <stdio.h>
#include <stdlib.h>
void tang1(int n){
	n += 100;
}
void tang2(int *a){ // ham tang2 co tham so la mot con tro kieu int co ten la a
	*a += 100; // toan tu giai tham chieu
}
void swap(int *a, int *b){
	int temp = *a; // luu gia tri cua bien ma con tro a dang tro toi
	*a = *b; // gan gia tri cua bien con tro b dang tro toi cho gtri cua bien con tro a dang tro toi
	*b = temp;
}
int main(){
	int x = 1000, y = 2000;
	swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
