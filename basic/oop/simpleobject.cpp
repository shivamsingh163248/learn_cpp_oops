#include <iostream>
using namespace std ; 

// creating the class 
class frute{

    public:
    string color ; 
    string  name ; 
};

// creating the main funcrion 

int main()
{
    /* code */
 // creating the noraml object set the valye 

 frute mango ; 
 mango.color = "yellow" ; 
 mango.name = "sweet" ; 

 // now printing 
 cout<< mango.color << endl ; 

 // creating the point constocter 

 frute *apple = new frute() ; 

 // creaaingg the set the value 
 apple->color = "red" ; 
 apple->name = "sweet"  ;

 // now printing the obhect 
 cout<<apple->color<<endl ; 
 



    return 0;
}
