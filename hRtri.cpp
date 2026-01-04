#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if(j==i or j==1 or i==x)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}