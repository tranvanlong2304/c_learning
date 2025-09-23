// khoi tao san mot mang hai chieu
#include <stdio.h>
int main(){
	long long a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%lld ", a[i][j]); // chu y, nhu mang mot chieu , neu in ra so hang or cot bi thieu du lieu thi se
		}                             // duoc thay the boi cac so 0
		printf("\n");
	}
}
