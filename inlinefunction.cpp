// now creating the inline function 
// creating the prepocess and then library 
#include <iostream>
// now creating the standerd name space 
using namespace std ; 




// now creating the macro function 
// now creating the macro with the parameter 
#define MAXI(k, d ) (k > d) ? k : d  













// now creating the inline function 
inline void greaters (int a , int b){

    // creating the unary operator for the checking 
 int min = (a>b)?a:b ; 
 // check another for the return 
 int     shi  = (a<b)? 45:22 ; 
 // now agian creating the trianaty opreator 
  int     iti  = (a>b)? 45:22 ; 

 // now check for the printing if it is the correct then printing the value 

 cout<< min << endl  ;
 cout<< shi << endl  ;
 cout<< iti << endl  ;

  
 
}

// now creating the main function 
int main (){

    // now calling the inline function 
    greaters(20,40) ; 
    

    int m = MAXI(50, 10 ) ; 



    return 0 ; 

}

// now creating the macro function 
