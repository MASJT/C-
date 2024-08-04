#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;

    for(int i=0; i<input.length(); i++){
        if(input[i] == tolower(input[i]) && input[i+1] == toupper(input[i+1])){
            input.insert(input[i],",");
        }
    }
    cout<<input;
}