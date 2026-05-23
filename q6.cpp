#include<iostream>
using namespace std;
int factorial(int x){
int fact = 1;
for(int i = 1; i <= x; i++){
fact = fact * i;
}
return fact;
}
void isStrong(int limits){
cout<<"Strong numbers between 1 and 200 are:"<<endl;
for(int n = 1;n <= limits; n++){
int temp = n; 
int sum = 0;
while(temp > 0){
int digits = temp % 10;
sum += factorial(digits);
temp /= 10;
}

if(sum == n){

cout<<n<<endl;
}
}
}
int main(){
 isStrong(200);
 

}
