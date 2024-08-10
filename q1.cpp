#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n+1];
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    cout<<"function"<<endl;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<'x'<<i;
        if(i!=n){
            cout<<"+";
        }
    }
    cout<<endl;
    cout<<"derivative"<<endl;
    for(int i=0;i<n+1;i++){
        arr[i]=i*arr[i];
    }
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<'x'<<i;
        if(i!=n-1){
            cout<<"+";
        }
    }
}
