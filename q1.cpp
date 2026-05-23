#include<iostream>
using namespace std;
int isLeapYear(int n){
if((n%4 == 0 && n%100 != 0 ) || n%400 == 0){

return 1;
}
return 0;


}
int main(){
int n;
cout<<"Enter the year you want to check:"<<endl;
for (int i = 1; i <= 5; i++){
 
cin>>n;

if(isLeapYear(n)){
cout << n << "is a leap year"<<endl;
}
else {
cout << n << "is not a leap year"<<endl;
}
}

}

