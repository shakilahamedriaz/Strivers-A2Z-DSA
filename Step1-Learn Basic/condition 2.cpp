#include<bits/stdc++.h>
using namespace std;

int main()
{

   int marks;
   cin>>marks;

   if(marks<25){
    cout<< "F"<<endl;
   }

   else if(marks<=44){

       cout<< "E"<<endl;
   }
   else if(marks <= 49){
      cout<< "C";
   }
   else if(marks<59){

    cout<< "B"<<endl;
   }
   else if(marks<=79){

    cout<< "A"<<endl;
   }
   else if(marks<=100)
   {
       cout<< "A+"<<endl;
   }

    return 0;
}
