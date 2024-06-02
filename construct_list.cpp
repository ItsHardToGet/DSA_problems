// Given a list s that initially contains only a single value 0. There will be q queries of the following types:

// 0 x: Insert x in the list
// 1 x: For every element a in s, replace it with a ^ x. ('^' denotes the bitwise XOR operator)
// Return the sorted list after performing the given q queries.

#include<bits/stdc++.h>
using namespace std;


 vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int>v;
        int h=0;
        int p=queries.size();
        p--;
        
        int i=0;
        while(p>=0){
            if(queries[p][0]==0){
                v.push_back(queries[p][1]^h);
            }
            else if(queries[p][0]==1){
                h=h^queries[p][1];
            }
            p--;
        }
        v.push_back(0^h);
         sort(v.begin(),v.end());
         return v;
    }




    /*
   solution 2




    class Solution {
public:
    vector<int> constructList(vector<vector<int>>& Q, int N) {
        // Initialize the result list with 0
        vector<int> result = {0};

        // Process each query
        for (int i = 0; i < N; ++i) {
            if (Q[i][0] == 0) {
                // For query type 0, add the given value to the list
                result.push_back(Q[i][1]);
            } else if (Q[i][0] == 1) {
                // For query type 1, update each element in the list with their respective Bitwise XOR with the value
                for (int j = 0; j < result.size(); ++j) {
                    result[j] ^= Q[i][1];
                }
            }
        }

        // Sort the final list in increasing order
        sort(result.begin(), result.end());

        return result;
    }
};
*/