//Majority Element
/*
Given an array arr[]. Find the majority element in the array.
 If no majority element exists, return -1.

Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.
*/

#include <iostream>
using namespace std;
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int candidate = -1, count = 0;
        
        for(int num : arr){
            if(count == 0){
                candidate = num;
            }
            if(num == candidate){
                count++;
            }else{
                count--;
            }
        }
        count = 0;
        for(int num : arr){
            if(num == candidate){
                count++;
            }
        }
        return(count > arr.size() / 2) ? candidate : -1;
        
        
    }
};