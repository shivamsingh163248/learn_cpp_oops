// creating the simple function 
// now then creating the overloding function ]

#include <iostream> 
// now using  the standerd name space 

using namespace std ; 

// now deleeration the function 

 void sweping(int , int) ; 


// creatung the function 

void shivam (){

    // printing the my name is shivam 
    cout <<"my name is shivam " ; 
}

// now creating the main fucntion 

 int main()
{
    /* code */

shivam() ; 


// now calling the sweping function 
int a = 56 ; 
int b = 76 ; 

// calling the sweping function 
sweping(a , b) ; 



    return 0;
}


// again writing the second function of the call by refrence 


void sweping(int a , int b){

    // creating a temporry function 
    int temp ; 
    temp = a ; 
    a = b ; 
    b = temp ; 

    // now cout the value 
    cout << a << " "<< b << endl ; 

}
