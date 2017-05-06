/*Course Rating*/
#include <stdio.h>
#define N 10

int main(){
	int Ratings[6]={0,0,0,0,0,0}, i, temp;
	printf("Rate how do you feel about the course on a scale of 1 to 5 only integers\n");
	for (i=0;i<N;i++){
		printf("Student %d : ", i+1);
		scanf("%d", &temp);
		if(temp<6 && temp>0){
			Ratings[temp]++;
		}else{
			printf("Please rate it on a scale of 1 to 5 only integers\n");
			--i;
		}
	}
	printf("Data of Student Ratings :\n");
	for (i=1;i<6;i++){
		printf("Number of %d-Ratings : %d\n", i, Ratings[i]);
	}
}
