#include<stdio.h>  
#include<conio.h>  

int main () {
	int n;
	float tong, i;
	printf ("\n hay nhap n = ");
	scanf("%d", &n);
	tong=0;
	
	for (i=1;i<=n;i++){
		tong = tong + 1/i;
		
		
	}
	printf (" tong cac so tu 1 + ... + 1/%d la = %f", n, tong);
}
