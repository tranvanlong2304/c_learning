// tinh tong cac so tu 1 toi n ; S = 1 + 2 +3 ..... +n voi vong lap for va bien sum
#include <stdio.h>
#include <math.h>
 int main(){
 	int n;
 	scanf("%d", &n);
// 	int sum = 0;
//	for(int i = 1; i <= n; i++){
//	sum += i;}
//		printf("%d\n ", sum);
// in ra cac boi cua 3 <= n:
   int sum = 0;
   for(int i = 0; i <= n; i+= 3){
   		printf("%d ", i);
   	
   }
 return 0;
}
