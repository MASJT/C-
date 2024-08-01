#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin,input);

    input[0] = toupper(input[0]);
    for(int i=0;i<input.length();i++){
        if(input[i] == ' '){ 
            input[i+1] = toupper(input[i+1]);
        }
    }
    cout<<input;
}