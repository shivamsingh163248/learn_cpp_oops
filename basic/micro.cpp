// creating the documentation 
// creating the link section 
// creating the difination secrtion 
// creating the globle deceation 
#include<iostream>

// creating the standerd name space 
using namespace std ; 

// function decleatation 
#define bignumber(a , b) (a > b)? a:b 

///main functnction 
int main (){

    int a = 20 ; 
    int b = 30 ; 

    // calling the function 
    int c = bignumber (a , b) ; 
    cout<< c << endl ; 
    return 0 ; 
}