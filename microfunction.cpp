
#include <iostream>
using namespace std;
  
// macro with parameter
#define MAXIMUM(a, b) (a > b) ? a : b


// now creating the inline function 

inline void maximum (int a , int b ){

    // creating the condition 
    int m = (a>b)?a:b ; 
    cout<<m<<endl ; 
}

  
// Main function for the program
int main()
{
    cout << "Max (100, 1000):";
    int k = MAXIMUM(100, 1000);
    cout << k << endl;
  
    cout << "Max (20, 0):";
    int k1 = MAXIMUM(20, 0);
    cout << k1;

    // now calling the function 
    maximum(40 ,50) ; 
  
    return 0;
}