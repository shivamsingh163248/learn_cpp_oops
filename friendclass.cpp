// creating the friend class 
#include<iostream>
// creating the standerd name space 
using namespace std ; 

// now creating the class 

class shivam {

// now creating the private  member 
private : 

int user_id ; 

// now creating the protected member 
protected: 
string user_name ; 

// now creating the constocter 

public:
// creating the same name as the class 
shivam(){

    // now inisalization the variable 
    user_id = 23434 ; 
    user_name = "shivam singh ";
}

// now creating the friend function for the printing 
 friend class itisha ; 

    // creating the access modifire 
  


};



// now creating the friend classs 
class itisha {

// creating the access modife '
public:
void printng (shivam  t){  // creating the refrence for the printng 


// fatech all the deta from the shivam class 
cout<<"this is the user id"<<" "<<t.user_id<<endl ; 
// again print the user name 
cout<<"this is the user name"<<" "<<t.user_name << endl ; 
}
} ;

// now creating the main function 
int main (){

// now creating the object 
shivam s ; 
itisha g ; 

g.printng(s) ;

// now checking for the printng 
return  0 ; 



}

