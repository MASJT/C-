#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;

    int sum = 0;

    for(int i=0;i<input.length();i++){
        if(input[i] == 'a'||input[i] == 'e'||input[i] == 'i'||input[i] == 'o'||input[i] == 'u'||input[i] == 'A'||input[i] == 'E'||input[i] == 'I'||input[i] == 'O'||input[i] == 'U'){
            sum= sum+1;
        }
    }
    cout<<"Number of vowels: "<<sum;
}
