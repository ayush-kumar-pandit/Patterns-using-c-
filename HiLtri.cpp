#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(j==i or i==1 or j==x)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}