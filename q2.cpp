#include<iostream>
using namespace std;
void convertSeconds(int seconds){
int Hours ;
int minutes;
int sec;
int remain ;
int time;
Hours =  seconds/3600;
remain = seconds % 3600;
minutes = remain/60;
sec = remain%60;
cout<<"Time = "<< Hours <<"hours"<< minutes<<"minutes" << sec <<"seconds"<<endl;


}
int main(){
int seconds;
cout<<"Enter the number of seconds"<<endl;
cin>>seconds;
convertSeconds(seconds);

}

