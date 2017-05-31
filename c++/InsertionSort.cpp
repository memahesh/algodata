#include <iostream>
#define LENGTH 6

using namespace std;

void swap(int* a, int* b){
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}


void InsertionSort(int A[], int start, int end){
	int i;

	for(i=start;i>=0;i--){
		if(A[i]<A[i+1]){
			swap(A[i],A[i+1]);
		}
	}
	if(start!=end){
		InsertionSort(A, start+1, end);
	}
	

}


int main(){
	int A[LENGTH], i;
	for(i=0;i<LENGTH;i++){
		cout<<"Give the "<<i<<"th element";
		cin>>A[i];
	}
//	int a=5,b=6;
//	swap(a,b);
//	cout<<"The swapped is "<<a<<"/"<<b<<endl;
	InsertionSort(A,0,LENGTH);
	
	for(i=0;i<LENGTH;i++){
//		cout<<"Give the "<<i<<"th element";
		cout<<"The "<<i<<"th element in sorted array is "<<A[i]<<endl;
	}
	
	return 0;
}
