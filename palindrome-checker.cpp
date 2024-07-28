#include <bits/stdc++.h>
using namespace std;


int main(){
    string input;
    cin>>input;

    int length = input.length();
    int a = 0;

    for(int i=0;i<length;i++){
        
        if(input[i]==input[(length-1-i)]){
            a = a+1;
        }   
    }
    if(a==length){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}