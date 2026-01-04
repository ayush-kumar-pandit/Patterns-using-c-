#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==1 or j==1 or j==x or i==x)
                cout<<"* ";
            else if(i==(x+1)/2 or j==(x+1)/2)
                cout<<"* ";
            else if(i==j or j==x-i+1 )
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}