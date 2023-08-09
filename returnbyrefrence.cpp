#include <iostream>
using namespace std ; 


void sweping (int& , int&) ; 

// conw creating the functuin 
void cheking(int a , int b){
    // creating the pprint function 
    cout<<"name is a"<<a << endl  ; 
}





// void sweping(int &a , int &b ){


// // creating the temp variable 
// int temp = a ; 
// a = b ; 
// b = temp ; 

// // now sweping in done 


// }

// now creating the main function 
int main (){


    // calling the function 
    cheking(34 , 56) ; 

    // now frist the setup the variable 

    int a = 10 ; 
    int b = 20  ; 

// now  creating the printing statement 

cout<< a<<" "<< b << endl ; 

// now calling the refrence of the value 

sweping(a , b) ; 

// now again checking for the printing number 
cout<< a<<" "<< b << endl ; 


    return 0 ; 
}



// // now creating the function of the all by refrence work 

void sweping(int &a , int &b ){


// creating the temp variable 
int temp = a ; 
a = b ; 
b = temp ; 

// now sweping in done 


 }

  // this is the best example of the call by refrence 
  

