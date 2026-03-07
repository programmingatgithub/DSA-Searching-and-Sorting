//Middle of Three
/*
Given three distinct numbers a, b and c.
 Find the number with a value in the middle (Try to do it with minimum comparisons).
*/

#include <iostream>
using namespace std;
class Solution {
  public:
    int middle(int a, int b, int c) {
        if((a < b && b < c) || (c < b && b < a))
        return b;
        if((b < c && a < c) || (c < a && a <b))
        return a;
        return c;
        
    }
};