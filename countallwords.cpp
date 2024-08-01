#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin,input);

    int count = 0;

    if(input[0]!='\0'){
            count = 1;
            for(int i=0;i<input.length();i++){
            if(input[i] == ' '){
                count = count+1;
            }
        }
    }
    else{
        count = 0;
    }
    cout<<"Number of words: "<<count;
}