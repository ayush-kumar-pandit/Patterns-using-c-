#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x-1;i++){
        
        for(int j=1;j<=x*2-1;j++){
            if(j==i or i==1 or j==2*x-i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=1;i<=x;i++){
        
        for(int j=1;j<=x*2-1;j++){
            if( i==x or j==x-i+1 or j==i+x-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}