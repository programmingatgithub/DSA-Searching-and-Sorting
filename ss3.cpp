//Search an element in sorted and rotated array
/*
Given a sorted and rotated array A of N distinct elements which are rotated at some point, and given an element K.
The task is to find the index of the given element K in array A.
*/

#include <iostream>
using namespace std;
int Search(vector<int> vec, int K) {
    int n = vec.size();
    int left = 0, right = n - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(vec[mid] == K) return mid;
        
       
        if(vec[left] <= vec[mid]) {
            
            if(K >= vec[left] && K < vec[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        else {
            if(K > vec[mid] && K <= vec[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return -1;
}
