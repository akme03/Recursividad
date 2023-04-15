#include<stdio.h>
#include<stdlib.h>

long int fib(int n){
	if (n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else return fib(n-2)+fib(n-1);
}

int main(){
	int n=11;
	printf("El valor del fibonacci de %i es: %i",n, fib(n));
	return 0;
}