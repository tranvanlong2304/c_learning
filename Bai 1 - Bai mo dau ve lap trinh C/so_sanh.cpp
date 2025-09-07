// neu = -------------> a=b-------------> a = b
//    +=                a+=b              a=a+b
//    -=                a-=b              a=a-b
//    *=                a*=b              a=a*b
//    /=                a/=b              a=a/b
//    %=                a%=b              a=a%b
// toan tu quan he
// dung kieu du lieu int de thay cho du lieu dung sai
// trong ngon ngu C thi ; 0--> sai con cac so khac 0 la dung
// = la gan con == la so sanh
#include <stdio.h>
 int main(){
 	int a = 36, b = 18;
 	int kq = a == b;
 	printf ("gia tri cua phep so  sanh la : %d", kq);
 	return 0;
 }            
 // doi voi lenh kq ta dung = a xx b
 // quan trong : doi voi cac so sanh >= or <= thi chi can thoa man mot trong hai dieu kien ---> dung
 // != : a khac b
