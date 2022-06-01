#include<stdio.h>
int main(){
	float n;
	printf("Nhap n : ");
	scanf("%f",&n);
	float i = 1;
	float S = 0;
	while(i<=n){
		S = S + 1/i;
		i++;
	}
	printf("Tong la : %f",S);
	return 0;
}