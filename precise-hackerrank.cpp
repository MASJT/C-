#include <bits/stdc++.h>
using namespace std;

void precise(float a, float b)
{
    //perform a/b
    float c = a/b;
    
    cout << c << " " << fixed << setprecision(3) << c << endl;
    /*output the result of a/b here*//*use setprecision(3) here*//*use fixed here*//*Output c here*/
    
    cout<<endl;
}

void precise(float , float );//prototype


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b; //Taking input of a and b in floating types
	    precise(a,b);
	    
	}
	return 0;
}