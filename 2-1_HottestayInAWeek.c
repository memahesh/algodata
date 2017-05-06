/*Hottest Day in a week*/
#include <stdio.h>
#define N 7
int main(){
	float Temp[7], sum=0, average;
	for(i=0;i<7;i++){
		printf("Maximum Temperature of Day %d", i);
		scanf("%d", &Temp[i]);
	}
	for(i=0;i<7;i++){
		sum = sum + Temp[i];
	}
	average = sum/N ;
	return 0;
}
