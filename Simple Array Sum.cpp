#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[1000005];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<sum;
}