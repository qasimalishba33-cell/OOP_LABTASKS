#include<iostream>
using namespace std;

void printNumberPyramid(int n){
for(int i = 1; i <= n; i++){
	for(int j = 1; j <= i; j++){
	cout<<i;
	}
	cout<<endl;
}


}
int main(){
int n;
cout<<"Enter the no of rows you want to print"<<endl;
cin>>n;
printNumberPyramid(n);


}
