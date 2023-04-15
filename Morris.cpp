#include<stdio.h>
#include<stdlib.h>

long morris(int n, int m){
	if(n==m)
	return (m+1);
	else
	return morris(n,morris(n-1,m+1));
	}
int main(){
	int n,m;
	printf("Ingresa los valores de n y m:\n ");
	scanf("%i%i",&n,&m);
	printf("El resultado es:%i\n",morris(n,m));
	return 0;
}