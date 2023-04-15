#include<stdio.h>
#include<stdlib.h>

    int BusBin(int A[9],int x, int i, int j);
    int main(){
    	int i, j, x;
    	int A[]={1,2,3,4,5,6,7,8,9};
    	x=1;
    	i=1;
    	j=9;	
    BusBin(A,x,i,j);
    	printf("La posicion de x es:%i\n",BusBin(A,i,j,x));
	return 0;
}
int BusBin(int A[9],int x, int i, int j){

	int medio;
	medio=(i+j)/2;
	if(A[medio]=x){
		return medio;
	}else if((x<A[medio])&&(i<medio)){
		return BusBin(A,x,i,medio-1);
	}else if(medio<j){
		return BusBin(A,x,medio+1,j);
	}else{
		return -1;		
	}	
}