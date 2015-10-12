/*
 ============================================================================
 Name        : Fibonacci.c
 Author      : Sascha Türke
 Version     : 1
 Description : Fibonacci sequenced in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int fibo(int n){

	if(n==0){
		return 0;
	}

	if(n==1){
		return 1;
	}

	if(n>1){
		return fibo(n-1)+fibo(n-2);
	}

return 0;
}

int main(void) {
	int x=16;

	printf("%d \n", fibo(x));
	return 0;
	//Zusatzaufgabe vieleicht -> while-Schleife und alle Werte ausgeben???

}
