#include<stdio.h>
int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int S = 0;
	while(n>0){
		S = S*10 + n%10;
		n = n / 10;
	}
	printf("So dao nguoc la %d",S);
	return 0;
}