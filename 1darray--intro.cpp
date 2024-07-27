#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[5] = {1,2,3,4,5};  //make it 2,4,6,8,10
    cout<< "The base address of the array is "<< arr <<endl;
    
    
    for(int i = 0; i < 5; i++){
        cout<<arr+i<<endl;       //arr+i is a pointer thing. so for value do *(arr+1)
        cout<< *(arr+i)<<endl;
        *(arr+i) = *(arr+i)*2;
        cout<< *(arr+i)<<endl;
    }
    
    return 0;
}