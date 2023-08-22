// creating the header file 
#include <iostream>
// creating the staderd name spcae 
using namespace std ; 



// creating  the function decleration 
void sweping(int& , int&) ; 

// creating the main function 
int main (){

    // now creating the varaivale 
    int a = 120 ; 
    int b = 34 ; 

    // now printing the both statement 
    cout<< a <<" "<< b << endl ; 

    // now calling the function 
    sweping(a , b) ; 
    cout<< a <<" "<< b << endl ; 


return 0 ; 

}


// creating the sweping function 
void sweping(int& a , int& b){

// creating the changed according to the addresss 
int temp ; 
// now address of the stored a variable 
temp = a ; 
a = b ; 
b = temp ; 


}