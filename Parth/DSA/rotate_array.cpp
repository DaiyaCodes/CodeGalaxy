#include<iostream>
#include<vector>

using namespace std;

int main()
{   int n;
    cout <<"enter no. of elements :  ";
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
     
     arr[n-1]=temp;

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }






}
