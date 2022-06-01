#include<stdio.h>
int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int S = 0;
	int i = 0;
	while(i <=n){
		S=S+i;
		i++;
	}
	printf("Tong tu 1 den %d la : %d",n,S);
	return 0;
}