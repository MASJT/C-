#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin,input);
    char find;
    cin>>find;

    int count = 0;

    for(int i=0;i<input.length();i++){
        if(input[i] == find){
            count = count+1;
        }
    }
    cout<<"Total instances of "<<find<<"->"<<count;
}