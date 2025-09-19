// tinh tong S(n) = 1 + 1 / 2 + 1 / 3 + 1...... n + 1
#include <stdio.h>
#include <math.h>
 double S(int n){
 double res = 0;
 for(int i = 1; i <= n; i++)
 res += (double) 1 / i;
 return res;
 }
 int main(){
 	int n = 10;
 	double res = S(n);
 	printf("%.2lf", res);
 	return 0;
 	
 }
