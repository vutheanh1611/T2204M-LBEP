#include <stdio.h>

int main(){
	int n;
	printf("Nhap n  ");
	scanf("%d" , &n);
	int i;
	// in ra so le
	printf("Cac so le");
	for(i = 0; i < n; i += 2){
		printf("%d, ", i);
	}
}
