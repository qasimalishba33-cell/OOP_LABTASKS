#include<iostream>
using namespace std;
int sumSeries(int n){
int sum = (n*(n + 1))/2;
return sum;


}

int main(){
int n;
cout<<"Enter the number till you want to calculate sum of series"<<endl;
cin>>n;
cout<<"The sum of series of 1+2+3+..."<<n<<"="<<sumSeries(n);
}
