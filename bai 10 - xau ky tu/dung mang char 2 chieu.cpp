// su dung mang char 2 chieu 
// " %c" : bo qua khoang trang
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char a[100][100];
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf(" %c", &a[i][j]);
		}
	}
}
