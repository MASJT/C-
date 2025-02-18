//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        if(A>B){
             return {A+B, A*B, A-B, A/B};
        } 
        else if(B>A){
            return {B+A, B*A, B-A, B/A};
        }
        else {
            // Handle case where A == B (could return any default values or handle differently)
            return {B+A, B*A, B-A, B/A};
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends