#include<stdio.h>  
#include<conio.h>  

int main () {
	int n;
	float tong, i;
	printf ("\n hay nhap n = ");
	scanf("%d", &n);
	tong=0;
	
;
	
	
	for (i=1;i<=n; i++){
		tong = tong + i / (i + 1);
		
		
	}
	printf (" tong cac so tu 1/2 + ... +  %d / %d + 1 la = %f", n, n,  tong);
}
