#include <iostream>
#define SIZE 10
using namespace std;
int B[SIZE]={0};

void Merge(int *A, int start, int mid, int end){
	int i=start, j=start, k=mid+1;
//	cout<<end<<"/"<<start<<"/"<<mid<<"/"<<i<<"/"<<j<<"/"<<k<<endl;
	while(i<(end+1)){
//		cout<<"/B["<<i<<"]/="<<B[i]<<"/B["<<j<<"]/="<<B[j]<<"/B["<<k<<"]/="<<B[k]<<endl;
		if((k==(end+1) || A[j]<=A[k])&&(j<=mid)){
			B[i]=A[j];
			i++;
			j++;
		}else if(j==(mid+1) || A[k]<A[j]){
			B[i]=A[k];
			i++;
			k++;
		}
	}
	i=start;
	while(i<(end+1)){
		A[i]=B[i];
		i++;
	}
//	cout<<"The (merge)sorted array is as follows :"<<endl;
//	for(i=0;i<SIZE;i++){
//		cout<<"The "<<i+1<<"th element in the sorted array is :"<<B[i]<<endl;
//	}
}


int MergeSort(int *A, int start, int end){
	int mid;
	
	if(start<end){
		mid=(start+end)/2;
		MergeSort(&A[0], start, mid);
		MergeSort(&A[0], mid+1, end);
		Merge(&A[0], start, mid, end);
	}else if(start==end){
		B[start]=A[start];
	}
	return 0;
}


int main(){
	int A[SIZE], i;
	cout<<"Please fill the array :"<<endl;
	for(i=0;i<SIZE;i++){
		cout<<"Enter the"<<i+1<<" th element :"<<endl;
		cin>>A[i];
	}
	
	
	MergeSort(&A[0], 0, SIZE-1);
	
    cout<<"The (merge)sorted array is as follows :"<<endl;
	for(i=0;i<SIZE;i++){
		cout<<"The "<<i+1<<"th element in the sorted array is :"<<B[i]<<endl;
	}
}
