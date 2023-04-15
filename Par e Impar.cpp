#include<stdio.h>
#include<stdlib.h>

int par(int m),impar(int m);
int n;

int par(int m){
	if(m==0){
		return 1;
	}
	else{
		return impar(m-1);
	}
}

int impar(int m){
	if(m==0){
		return 0;
	}
	else{
		return par(m-1);
	}
}

int par(int);
int impar(int);

int main(){
	int m;
	printf("Ingresa un numero:\n");
	scanf("%i",&m);
	
	if(par(m)==1){
		printf("El numero es par\n");
	}else{
		printf("El numero es impar \n");
	}
	return 0;
}