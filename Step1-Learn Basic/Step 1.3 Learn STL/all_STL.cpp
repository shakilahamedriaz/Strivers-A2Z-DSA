#include<bits/stdc++.h>
using namespace std;

//--------------------------------------------

// STL devided into 4 parts
//1. container
//2. iterator
//3. algorithm
//4. function object

//---------------------------------------------


//--Container: 
//--pairs 
//#include <utility>

void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl; // Output: 5
}






//--vector
//vector is a dynamic container we can change the size
void explainVector(){
       
       vector<int> v;

       v.push_back(1);   // {1}
       v.emplace_back(2)  // {1,2}

       vector<pair<int, int> vec;
       vec.push_back({1,2});
       vec.emplace_back(1,4); //no need carlibrace

       vector<int> v (5,100);
       //100, 100, 100, 100, 100 (5 size , 5 times 100)
       vector<int> v(5);
       //5 times zero-0 , 0, 0, 0, 0, 0;

       vector<int> v1(5, 20);
       // 5 times 20;
       
       //--copy vector
       vector<int> v1(5,20);
       vector<int> v2(v1);

       //--iterator
       // {1,2,3}
       vector<int> :: iterator it= v.begin(); //1
       it++; //2
       cout<< *(it)<< " "; //output 2

       it = it+2;
       cout<< *(it) <<endl;

       vector<int>:: iterator it= v.end();


       vector<int>:: iterator it= v.end(); 
       //{10,20,30,40} :location: after 40
       //if it-- then location will at 40

       vector<int>:: iterator it= v.rend();
       //reverse end
       //{10,20,30,40} :location: before 10 ,cz reverse wise agabe
       //it-- 10
       vector<int>:: iterator it = v.rbegin();
       //{10,20,30,40} :location: 40, cz reverse wise location 40 at first
       //it++ then location: 30


       //v{5,3,,5,6,4,6}
       cout<< v[0]<< " "<<v.at(0); // output 5
       cout<<v.back()<< " ";       //output 6
       

       for(vector<int>::iterator it = v.begin(); it != v.end(); it++){

          cout<< *(it)<< " ";

       } //output all elements
       //now we can see the shortcut of avobe method;

       for(auto it = v.begin(); it != v.end(); it++){

         cout<< *(it)<<" ";

       } //automatic define the data_type
       

       //more shortcut
       for(auto it: v){
         cout<<it<< " ";
       }
  

      //--vector-Deletion

      //for single element
      //{10,20,12,23}
      v.erase(v.begin()+1); //delete the element 20 , now vector will: {10,12,23};

      
      //erase multiple elements
      //{10,20,12,33,23}
      v.erase(v.begin() + 2, v.begin()+4); //delete: 12,33
    /*
     v.begin() returns an iterator pointing to the beginning of the vector.

     v.begin() + 2 points to the element at index 2, which is 12.

     v.begin() + 4 points to the element at index 4, which is 23.

     The erase function removes the elements within the range [v.begin() + 2, v.begin() + 4), excluding the element at index 4.

     After executing v.erase(v.begin() + 2, v.begin() + 4), the elements 12 and 33 are removed from the vector v. The updated vector v will contain the elements {10, 20, 23}.
     */

    

    //--Insert function

    vector<int> v(2,100);     // {100, 100}
    v.insert(v.begin(), 300);  // {300, 100, 100}
    v.insert(v.begin()+1,2,10);    // {300, 10,10, 100, 100}
    //for copy the vector into avobe vector
    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());  // {50,50,300, 10,10, 100, 100}


    // {10,20};
    cout<<v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    //v1 -> {10, 20};
    //v2 -> {30, 40};
    v1.swap(v2); 
    //ans:
    //v1 ->{30, 40};
    //v2 ->{10, 20};

    v.clear(); //erase the entire vector
    cout<<v.empty();
}






//-- List 

void explainList(){

    list<int> ls;
    
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5);   // {5,2,4}
    ls.emplace_front(9); // {9,2,4}
    ls.emplace_front(8); // {8, 9, 2,4}

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap


}


//--Deque

void explainDeque() {

    deque<int> dq;

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}

    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    //delete : pop
    dq.pop_back();  // {3, 4, 1}
    dq.pop_front(); // {4, 1}


    dq.back();
    dq.front();
            

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}
 




//-- Stake
//lifo-last in first out

void explainStake() {

    
}



int main()
{
   
    explainPair();
    explainVector();
    explainList();
    explainDeque();

    return 0;
}