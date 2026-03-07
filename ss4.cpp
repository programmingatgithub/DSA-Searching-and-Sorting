//Count Squares
/*
Given a positive integer n, find the number of perfect squares that are less than n in the sample space of perfect squares. 
The sample space consists of all perfect squares starting from 1 (i.e., 1, 4, 9, 16, 25, …)
*/

#include <iostream>
using namespace std;
class Solution {
  public:
    int countSquares(int n) {
       if(n <= 1)return 0;
       return floor(sqrt(n-1));
        
    }
};