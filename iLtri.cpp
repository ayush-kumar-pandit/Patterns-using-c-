#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int s=1;s<i;s++){
            cout<<"  ";
        }
        for(int j=1;j<=x-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}