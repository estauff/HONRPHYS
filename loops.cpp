#include <iostream>
 
using namespace std;

int main() {

  // this is the slow (or outer) loop
  for(int n=0; n<10; n++) {
    cout << "n is " << n << ": ";

    // this is the fast (or inner) loop
    // in this loop, the slow loop variable (n) is a constant
    // this loop must run to completion before the slow loop
    // can progress (during every iteration of the slow loop!)
    for(int m=0;m<=n;m++) {
      cout << m;
    }

    // now the fast loop has finished and the slow loop can
    // continue with the current iteration
    cout << endl;
  }
 
  return 0 ;
}  
