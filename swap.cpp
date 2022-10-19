// Using the concept of pointers, write a function that swaps the private data values of
// two objects of the same class type.

#include<iostream>
using namespace std;

class Swap{
 private:
   int a;
 public:
   Swap(){
    a = 0;
   }

   void setData(int a){
    this->a = a;
   }

   void showData(){
    cout<<a<<endl;
   } 

};

int main(){
   Swap *ptr1,*ptr2,*ptr3,obj1,obj2;
     
   ptr1 = &obj1;
   ptr2 = &obj2;
   
   ptr1->setData(4);
   ptr2->setData(5);

   ptr3 = ptr1;
   ptr1 = ptr2;
   ptr2 = ptr3;
   

   ptr1->showData();
   ptr2->showData();

   return 0;
}