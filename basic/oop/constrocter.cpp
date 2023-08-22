// creating the polyforphism 

#include<iostream>
using namespace std ; 

// creating the class 

class frute{

    // now creating the memeber 

    public:
    string fruen_name ; 
    private:
    string frute_value ; 
    protected:
    string frute_color ; 

    // creating the defualt comstocter
    public:  
    frute(){
        cout<<"this is the patent consrocter"<<endl ; 
    }

    // now creating the function 
     public:
    virtual void sum(){
        cout<<"this is the function of the sum of the parent"<<endl ; 
    }

};

// creating childe class 

class childe : public frute {
    
    // creating the constocter 
    public:
    childe(){
        cout<<"this is the default child class "<< endl ; 
    }

public:
   void sum(){
        cout<<"this is the function of the sum of the child" << endl; 
    }
};


// creating  the main fumction 

int main()
{
   

   // creating the object 
   frute object1 ; 
   // creating the ovject of child class 
   childe object2 ; 


   // creating the polymorphosm 

   frute *test ;

   childe name ; 

test = &name ; 

   test->sum() ;


    return 0;
}
