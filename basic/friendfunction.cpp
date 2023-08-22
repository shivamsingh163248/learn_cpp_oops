

// creating 
#include<iostream>
using namespace std ; 

// creating the call 


 class shivam {

    // creating the private protecct variavle 
    public:
      string user_name ; 
      // creating the another varaivle 
      private : 
       int user_id ; 

    protected:
       string company_name ; 

       // now creating the constocret 

       public:
          shivam(string  user_name , int user_id , string company_name){
     

     user_name = this->user_name ; 
     user_id = this->user_id ; 
     company_name = this->company_name ;       

          }

          // now calling the friend calls 
          friend class shivamfriendclass ;
        





 };


 // now creating the freind calls 

 class shivamfriendclass {

    // creating the function in this class 
    public:
      void print(){

        cout<<"this is the fried call working " ; 
      }





    //   friend void  printowner_neme(); 
 };


int main(int argc, char const *argv[])
{
   /* code */
   return 0;
}

int main()
{
   

shivam object1("shivam", 2343 ,"cucode") ; 

   return 0;
}
