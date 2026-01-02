#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x-1;i++){
        for(int s=1;s<=x-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i*2-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=x;i++){
        for(int s=1;s<i;s++){
            cout<<" ";
        }
        for(int j=1;j<=(x*2)-2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}