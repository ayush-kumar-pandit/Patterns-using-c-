#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=x;i>=1;i--){
        for(int s=1;s<=x-i;s++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}