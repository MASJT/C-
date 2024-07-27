#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2][2][3] = {{ 
        {1,2,3},{4,5,6}},
        {{1,2,3},{4,5,6}
    }};
    
    int (*ptr)[2][3] = arr;
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                
                cout<<*(*(*(ptr+i)+j)+k)<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
    
    return 0;
}