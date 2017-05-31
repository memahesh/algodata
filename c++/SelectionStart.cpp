#include <iostream>
#define START 0
#define LENGTH 8
using namespace std;

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}

void SelectionSort(int *A, int start, int end){
	int minpos, i;
	
	minpos = start;
	for(i=start;i<end;i++)
	{	
		if(A[minpos]>A[i]){
			minpos = i;
		}
			
	}
	//cout<<"Minpos is"<<A[minpos]<<endl;
	swap(A[minpos],A[start]);
	
	if(start+1!=end){
		SelectionSort(A, start+1, end);	
	}
	
	
}


int main(){
	int A[LENGTH], i;
	char c='y';
	while(c=='y'){
		cout<<"Enter 8 integers to sort them"<<endl;
		for(i=0;i<LENGTH;i++){
			
			cout<<"Please enter the "<<i<<"th element :"<<endl;
			cin>>A[i];
		}
		cout<<"Press 'y' to sort the array or 'n' to exit"<<endl;
		cin>>c;
		if(c=='y'){
			
			SelectionSort(A, START, LENGTH);
			for(i=START;i<LENGTH;i++){
				cout<<A[i]<<endl;
			}
		//	cout<<c<<endl;
		}
		//cout<<c<<endl;
	}
	
}
