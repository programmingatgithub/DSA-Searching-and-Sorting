//Pair With Difference

/*
Given an array, arr[] and an integer x,
return true if there exists a pair of elements in the array whose absolute difference is x,
otherwise, return false.
*/
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        unordered_set<int> seen;
        for(int i=0;i<arr.size();i++){
            if(seen.find(arr[i] - x) != seen.end() ||seen.find(arr[i] + x) != seen.end()){
                return true;
            }
            seen.insert(arr[i]);
            
        }
        return false;
        
    }
};