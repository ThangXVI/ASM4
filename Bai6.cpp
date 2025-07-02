#include <stdio.h>
int main(){
	int n,f0=0,f1=1,fn=1,cnt=3;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	while (f1+fn<n){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	printf("So can tim la: %d",fn);
}
