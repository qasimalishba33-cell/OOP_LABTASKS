#include<iostream>
using namespace std;

int findMin(int array[], int size, int &index){
    int smallest = array[0];
    index = 0;

    for(int i = 0; i < size; i++){
        if(array[i] < smallest){
            smallest = array[i];
            index = i;
        }
    }
    return smallest;
}

int main(){
    int array[8];
    int size = 8;
    int index;

    cout << "Enter 8 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int minElement = findMin(array, size, index);

    cout << "Minimum element: " << minElement << endl;
    cout << "Found at index: " << index << endl;

    return 0;
}

