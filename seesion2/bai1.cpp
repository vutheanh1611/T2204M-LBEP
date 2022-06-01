#include<stdio.h>
int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int i = 0;
	while(i < n){
		if(i % 2 != 0)
		printf("Cac so le nho hon %d la : %d\n",n,i);
		i++;
	}
	return 0;
}
