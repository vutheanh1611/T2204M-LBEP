#include<stdio.h>
int BCNN(int a,int b){
	int max=a*b;
	for(int i=2;i<=max;i++){
		if(i%a==0 && i%b==0){
			max=i;
			break;
		}
	}
	return max;
}
