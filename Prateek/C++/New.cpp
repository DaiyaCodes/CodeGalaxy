#include<iostream>
using namespace std;

int main(){

    int arr[10];
    for(int i = 0; i<10; i++){
        cin>>arr[i];
    }
    int sum = 0;

    for(int j = 0; j<10 ;j++){

        sum = sum+arr[j];
    }

    cout<<"Average = "<<sum/10;
                  
}