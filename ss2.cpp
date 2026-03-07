//Value equal to index value

/*
Given an array arr[]. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).

Note: There can be more than one element in the array which have the same value as its index.
 You need to include every such element's index. Follows 1-based indexing of the array.


*/
#include <iostream>
using namespace std;
class Solution {
  public:
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> result;
        for(int i = 0;i < arr.size();i++){
            if(arr[i] == i+1){
                result.push_back(i + 1);
            }
        }
        return result;
    }
};