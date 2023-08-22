// now creating the inline  functrion 

#include<iostream>
// creating the standerd name space 
using namespace std ; 

// crating the inline function 

inline int bingnumber(int a , int b){

    return (a>b)? a:b ; 

    
}


// now creating the main function and the calling the fuction 
int main()
{
    
    int c =10 ; 
    int d = 12 ; 

    int a = bingnumber( c ,d) ;
    cout<< a << endl  ;  
    return 0;
}
