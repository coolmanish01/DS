#include<iostream>
using namespace std;
int main(){
    int ar[20],t,n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" Element of Array : ";
        cin>>ar[i];
    }
    int key;
    for(i=1;i<n;i++){
        key=ar[i];
        for(j=i-1;(key<ar[j])&&(j>=0);j--){
            ar[j+1]=ar[j];
        }
        ar[j+1]=key;
    }
    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
