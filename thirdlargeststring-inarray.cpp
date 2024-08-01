#include <bits/stdc++.h>
using namespace std;

int main(){
   string arr[6] = {"123", "masjv123", "master", "supercool", "4k", "extremeno#1" };

   string first = arr[0];
   string second;
   string third;

   for(int i=1; i<6; i++){
        if(arr[i].length() > first.length()){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i].length() > second.length()){
            third = second;
            second = arr[i];
        }
        else if(arr[i].length() > third.length()){
            third = arr[i];
        }
        
   }
    cout<<"Third largest string is: "<<third;

}