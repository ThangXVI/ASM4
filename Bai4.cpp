#include <stdio.h>
int main(){
	int n,x=0,dv;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	while (n>0){
		dv=n%10;
		x=x*10+dv;
		n=n/10;}
	printf("X= %d",x);
	
	
}
