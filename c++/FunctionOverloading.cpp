#include <iostream>
using namespace std;

void sum(int a, int b){
	cout<<"The sum is "<<(a+b)<<endl;
}

void sum(float a, float b){
	cout<<"The sum is "<<(a+b)<<endl;
}
int main(){
	int m=1, n=2; 
	float x=1.5, y=2.8;
	sum(x,y);
	sum(m,n);
	return 0;
}
