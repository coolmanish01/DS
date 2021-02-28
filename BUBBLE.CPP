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
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
