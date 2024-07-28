#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;

    int a = 0;
    for(int i=0;i<input.length();i++){
        while(input[i] != '\0'){
            input[a]= toupper(input[a]);
        }
    }
    cout<<input;
}