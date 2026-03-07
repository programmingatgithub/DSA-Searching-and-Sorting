//First and Last Occurrences

/*
Given a sorted array arr with possibly some duplicates, 
the task is to find the first and last occurrences of an element x in the given array.
Note: If the number x is not found in the array then return both the indices as -1.
*/


#include <iostream>
using namespace std;
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int first = -1, last = -1;
        int n = arr.size();
        
        int low = 0,high = n-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == x){
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] < x){
                low = mid + 1;
                
            }
            else {
                high = mid - 1;
                
            }
        }
        
        
        low = 0, high = n-1;
        while (low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == x){
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] < x){
                low = mid + 1;
                
            }else{
                high = mid - 1;
                
            }
        }
        return {first , last};
    }
};