//You are given an integer k and matrix mat. Return a matrix where it is rotated Left k times.
// Input: k=1, mat=[[1,2,3],[4,5,6],[7,8,9]]
// Output:
// 1 2 3
// 4 5 6
// 7 8 9
// Explanation: Rotate the matrix by one
// 1 2 3       2 3 1
// 4 5 6  =>  5 6 4
// 7 8 9       8 9 7

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {

        int i=0,j=0;
        int m = mat.size();
        int n = mat[i].size();
        vector<vector<int>>v(m, vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                v[i][(j+n-(k%n))%n] = mat[i][j];
            }
        }
        return v;
    }
};


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void rotate(int k,vector<vector<int>>&v,int i){
      k=k%v[i].size();
     int j=0,e=k-1;
    
      while(j<e){
          int p=v[i][j];
          v[i][j]=v[i][e];
          v[i][e]=p;
          
          j++;
          e--;
      }
      j=k;
      e=v[i].size()-1;
     
      
       while(j<e){
          int p=v[i][j];
          v[i][j]=v[i][e];
           v[i][e]=p;
          j++;
          e--;
      }
      j=0;
      e=v[i].size()-1;
       while(j<e){
          int p=v[i][j];
          v[i][j]=v[i][e];
           v[i][e]=p;
          j++;
          e--;
      }
  }
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        for(int p=0;p<mat.size();p++){
           rotate(k,mat,p) ;
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends


//solution 2

// class Solution {
//   public:
  
//   void rotate(int k,vector<vector<int>>&v,int i){
//       k=k%v[i].size();
//      int j=0,e=k-1;
    
//       while(j<e){
//           int p=v[i][j];
//           v[i][j]=v[i][e];
//           v[i][e]=p;
          
//           j++;
//           e--;
//       }
//       j=k;
//       e=v[i].size()-1;
     
      
//        while(j<e){
//           int p=v[i][j];
//           v[i][j]=v[i][e];
//            v[i][e]=p;
//           j++;
//           e--;
//       }
//       j=0;
//       e=v[i].size()-1;
//        while(j<e){
//           int p=v[i][j];
//           v[i][j]=v[i][e];
//            v[i][e]=p;
//           j++;
//           e--;
//       }
//   }
//     vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
//         // code here
//         for(int p=0;p<mat.size();p++){
//            rotate(k,mat,p) ;
//         }
//         return mat;
//     }
// };
