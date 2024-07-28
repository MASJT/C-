#include <bits/stdc++.h>
using namespace std;

void print_4darray(int**** arr4d, int dist, int height, int rows, int cols){
    for(int d=0;d<dist;d++){
        for(int h=0;h<height;h++){
           for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    cout<<arr4d[d][h][i][j]<<" ";
                }
                cout<<endl;
            } 
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int dist, height, rows, cols;
    cin>>dist>>height>>rows>>cols;
    
    
    int**** arr4d = new int***[dist];
    
    for(int d=0;d<dist;d++){
        int*** arr3d = new int**[height];
        for(int i=0;i<height;i++){
            int** arr2d = new int*[rows];
            for(int j=0;j<rows;j++){
                arr2d[j] = new int[cols];
            }
            arr3d[i] = arr2d;
        }
        arr4d[d] = arr3d;
    
    }
    
    for(int d=0;d<dist;d++){
        for(int h=0;h<height;h++){
           for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    cin>>arr4d[d][h][i][j];
                }
            } 
        }
    }
    
    
    print_4darray(arr4d, dist, height, rows, cols);
}