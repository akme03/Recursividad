#include<stdio.h>
#include<stdlib.h>

int A(int m, int n){
	if(m==0)
		return n+1;
	else if(m>0 && n==0)
		return A(m-1,1);
	else if(m>0 && n>0)
	    return A(m-1,A(m,n-1));
}

int main(){
	int m,n;
     printf("Ingresa dos valores : \n");
     scanf("%i%i",&m,&n);
     printf("El resultado es:%i\n",A(m,n));
	return 0;
}