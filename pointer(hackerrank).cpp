#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b) {
    int original_a = *a;
    int original_b = *b;
    
    *a = original_a + original_b;
    

    if (original_a >= original_b) {
        *b = original_a - original_b;
    } else {
        *b = original_b - original_a;
    }
}

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl << b;

    return 0;
}