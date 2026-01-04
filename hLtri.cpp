//Hollow right angle triangle
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int s=1;s<=x-i;s++){
            cout<<"";
        }
        for(int j=1;j<=x;j++){
            if(j==x-i+1 or i==x or j==x)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}