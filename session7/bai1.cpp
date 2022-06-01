#include<stdio.h>

int tinhluythua(int a,int b){
	int S=1;
	for(int i=1;i<=b;i++){
		S=S*a;
	}
	return S;
}

int main(){
	printf("3 mu 6 la : %d",tinhluythua(3,6));
}
