/*Fibonacci Numbers*/
#include <stdio.h>
#define N 15
int main(){
	int Fib[N], i;
	Fib[0]=0;
	Fib[1]=1;
	for(i=2;i<N;i++){
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	for(i=0;i<N;i++){
		printf("Fibonacci Number %d is %d\n", i+1, Fib[i]);
	}
}
