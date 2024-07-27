#include <bits/stdc++.h>
using namespace std;

int main()
{

// how to define a 2D array

int arr[2][2][2];

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++){
                arr[i][j][k]= i*j*k;
                cout<<arr[i][j][k]<<" ";
           }
           cout<<endl;
        }
        cout<<endl<<endl;
    }
    
    return 0;
}