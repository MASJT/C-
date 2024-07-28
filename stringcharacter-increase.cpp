#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
    
    for(int i=0;i<input.length();i++){
        if(isdigit(input[i])){
            input[i] = input[i];
        }
        else{
            input[i] = input[i]+1;
        }
    }
    cout<<input;

}