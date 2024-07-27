#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,g,h,i;
    int j,k,l,m,n,o,p,q,r;

    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    cin>>j>>k>>l>>m>>n>>o>>p>>q>>r;

    int arr[3][3] = {{a,b,c},{d,e,f},{g,h,i}};
    int arr_1[3][3] = {{j,k,l},{m,n,o},{p,q,r}};
    int arr_sum[3][3] = {{a+j,b+k,c+l},{d+m,e+n,f+o},{g+p,h+q,i+r}};

    int (*ptr_sum)[3] = arr_sum;

    cout<<endl;
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++ ){
            cout<< *(*(ptr_sum+i)+j)<<" ";
            
        }
        cout<<endl;
    }

}