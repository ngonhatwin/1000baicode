#include<stdio.h>  
#include<conio.h>  

int main () {
	int n;
	float tong, i;
	printf ("\n hay nhap n = ");
	scanf("%d", &n);
	tong=0;
	
;
	
	
	for (i=0;i<=n; i++){
		tong = tong + ((2*i+1) / (2*i+2));
		
		
	}
	printf (" tong cac so tu 1/2 + ... + (2*%d+1)/(2*%d+2) la = %f", n, n,  tong);
}
