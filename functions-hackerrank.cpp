#include <bits/stdc++.h>
using namespace std;


int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int max1 = max(a, b);
    int max2 = max(c, d);
    int max3 = max(max1, max2);
    cout << max3;
}
