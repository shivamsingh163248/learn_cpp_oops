#include<iostream>
using namespace std ; 

// creating the class 

class frue{

    string name ; 
    int roll_number ; 

    // creating the constocret 
public:
    frue(){
        cout<<"this is the preant class " ; 
    }


};


// creatig the clidf 

class child : public frue {
public :
    child(){

    }


};

// creating the main function 

int main()
{
    /* code */

    child shivam ;
    return 0;
}
