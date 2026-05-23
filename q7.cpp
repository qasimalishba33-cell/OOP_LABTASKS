#include<iostream>
using namespace std;
void displayArray(int arr[],int size){
for(int i = 0; i < size; i++){
cout<<arr[i]<<endl;
}

}
int selectedSort(int arr[],int size){
int comparisons =0;

for(int i= 0; i < size - 1; i++){
int minIndex = i;

	for(int j = i+1 ; j < size; j++){
	comparisons++;
	
		if(arr[j] < arr[minIndex]){
		minIndex = j;
		}
	}
	int temp = arr[i];
	 arr[i] = arr[minIndex];
	arr[minIndex] = temp;

}
return comparisons;
}
	 	
int main(){
int size = 12;
int arr[12];
cout<<"Enter the 12 elements of normal array: "<<endl;
for(int i = 0; i < size; i++){
cin>>arr[i];
}
cout<<"Normal Array elements are: "<<endl;
displayArray(arr,12);
int totalcomparisons = selectedSort(arr,12);
cout<<"Sorted elements of an array are: "<<endl;
displayArray(arr,12);
cout<<"total no of comparisons: "<<totalcomparisons<<endl;
return 0;

}
