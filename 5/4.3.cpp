#include <iostream>
using namespace std;

int main(){
    unsigned short int n;
    cout<<"Enter the number of rows.";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= 1; j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}