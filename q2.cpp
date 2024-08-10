#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
            int l=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                l++;
            }
        }
        if(l==2){
            cout<<i<<" ";
        }
    }
}

