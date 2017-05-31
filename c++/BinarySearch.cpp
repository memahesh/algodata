#include <iostream>

using namespace std;

int bsearch(int A[],int K,int l,int r){
	int mid;
	if(r==l){
		return -1;
	}

	mid=(l+r)/2;
	if(K==A[mid]){
		return 1;
	}
	
	if(K>A[mid]){
		return bsearch(A, K, mid+1, r);
	}
	if(K<A[mid]){
		return bsearch(A, K, l, mid);
	}
}



int main(){
	int A[6]={3,7,9,9,11,45,}, K, result;
	
	char c= 'y';
	while(c=='y'){
		cout<<"Give a number to check if its in the array ?"<<endl;
		cin>> K;
		cout<<"Press 'y' to check or 'n' to exit"<<endl;
		cin>>c;
		if(c=='y'){
			result = bsearch(A, K, 0, 5);
			if(result==1){
				cout<<"The given number is in the array"<<endl;
			}else if(result==-1){
				cout<<"Sorry folks! Its not there"<<endl;
			}
		}
	}
	
	return 0;	
	
}
