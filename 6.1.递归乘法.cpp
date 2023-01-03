class Solution {
  public:    
                int multiply(int A, int B) {        
  if( A == 0 || B == 0)        return 0;        if( A == 1)        return B;        
                                                       if( A == 1)        return B;        if ( A > B)        return multiply (A, B - 1) + A;        else        return multiply (B, A - 1) + B;    }};
