#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Nhap chuoi:");
	scanf("%s", str);
	printf("Chuoi vua nhap: %s\n", str);
	char temp;
	int i, j;
	int len = strlen(str);
	for(j=1; j<len; j++){
		i = j-1;
		temp = str[j];
		while(i >= 0 && temp < str[i]){
			str[i+1] = str[i];
			i--;
		}
		str[i+1] = temp;
	}
	printf("Chuoi sau khi sap xep: %s", str);
}

