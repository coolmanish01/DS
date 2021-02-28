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
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                t=ar[j];
                ar[j]=ar[i];
                ar[i]=t;
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
