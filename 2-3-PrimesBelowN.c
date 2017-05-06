#include <stdio.h>
#define N 100

int main(){
	int Pri[N], i, j, count, p;
	Pri[0]=2;
	Pri[1]=3;
	p = 2;
	for(i=4;i<N;i++){
		count = 0;
		for(j=0;j<p;j++){
			if(i%Pri[j]==0){
				count = 1;
				break;
			}
		}
		if(count==0){
			Pri[p] = i;
			p++;
		}
	}
	
	printf("Prime Numbers below %d are :\n", N);
	
	for(i=0;i<p;i++){
		printf("%d\n", Pri[i]);
		
	}
}
