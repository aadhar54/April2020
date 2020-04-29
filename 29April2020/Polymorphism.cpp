  class A                                  //  base class declaration.  
  {  
       int a;  
       public:  
       void display()  
       {   
             cout<< "Class A ";  
        }  
  };  
class B : public A                       //  derived class declaration.  
{  
    int b;  
    public:  
   void display()  
  {  
        cout<<"Class B";  
  }  
};  