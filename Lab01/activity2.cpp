#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{10,11},{12,13},{14,15},{16,17}};
    cout<<"Printing 2d array :\n";
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}