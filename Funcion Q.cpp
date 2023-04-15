#include<stdio.h>
#include<stdlib.h>

int Q(int a, int b){
	if(a<b){
		return 0;
	}else{
		return Q(a-b,b)+1;
	}
}

int main(){
	int a,b;
	printf("Ingresa los valores de a y b: \n ");
	scanf("%i%i",&a,&b);
	printf("El resultado es: %i \n",Q(a,b));
	return 0;
}