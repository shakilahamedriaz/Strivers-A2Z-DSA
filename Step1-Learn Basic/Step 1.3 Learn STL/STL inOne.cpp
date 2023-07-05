#include<bits/stdc++.h>
using namespace std;

//--------------------------------------------

// STL devided into 4 parts
//1. container
//2. iterator
//3. algorithm
//4. function object

//---------------------------------------------


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
 




//-- Stack
//lifo-last in first out
// stack has 3 function [push, pop, top]
//push - input
//pop -delete
//top -upper value

void explainStack() {
    
    stack<int> st;

    st.push(1);  // {1}
    st.push(2);  // {2,1}
    st.push(3);  // {3,2,1}
    st.push(3);   // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout<< st.top(); //print 5 "**invalid st[2]"
    st.pop();    // st looks like {3, 3, 2, 1}

    cout<<st.top();  //output : 3
    cout<<st.size()  //output : 4  

    cout<< st.empty(); //false cz values ar availabe
    stack<int>st1, st2;
    st1.swap(st2);



     //TC ---> 0(1)
}




//--Queue
//Fifo- first in first out

void explainQueue() {

    queue<int> q;
    
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}


    q.back() +=5; 
    cout<<q.back(); // output: 4+5=9

    // q= {1,2,9}

    q.pop();  // {2,9}

    cout<< q.front(); // print  : 2

    //size, swap, empty, same as stack;


    //TC-----------> 0(1)'

}


//--Priority_queue
//values are store in sequently like small/large wise

void explainPQ() {
      
      //Maximum Heap
      Priority_queue<int>pq;

      pq.push(5);  // {5}
      pq.push(2);  // {5,2} 
      pq.push(8);   // {8,5,2}
      pq.emplace(10); // {10, 8, 5, 2}

      cout<<pq.top();  // print 10 , largest value
      pq.pop();   // {8,5,2}
      //size swap empty function same as others


      //Minimum Heap
      Priority_queue<int, vector<int> ,greater<int>> pq;
     
      pq.push(5); // {5}
      pq.push(2); // {2,5}
      pq.push(8); // {2,5,8}
      pq.emplace(10); // {2,5,8,10}

      cout<<pq.top();  //print 2  

     
     //TC---> push,pop  ->log(n)  ||  top -> 0(1)

}




//--Set
// store sorted order
// store unique value

void explainSet() {

    set<int> st;

    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    //functionality of insert in vector
    //can be used also, that only increases
    //efficiency

    //begin(),end,rebgin,rend,seize
    //emtpy,swap, are same as those of above

    // {1,2,3,4,5}
    auto it = st.find(3);  //return ->it
    
    // {1,2,3,4,5}
    auto it = st.find(6);  //return -> st.end(); no value


    // {1,4,5}
    st.erase(5); //erase 5 .. takes lograitmic time

    int cnt= st.count(1);

    auto it = st.find(3); 
    st.erase(it);  //takes constant time



    // {1, 2, 3, 4, 5}
    auto it1= st.find(2); //return it(point)
    auto it2= st.find(4); //return it(point)
    st.erase(it1, it2); //after erase {1, 3 ,5} {first,last}

    //lowar bound() and upper_bound() function works in the same way
    // -as the vector it does
    //this is the syntax:
    auto it =it.lowar_bound(2);
    auto it=st.upper_bound(3);


}



//--MultiSet
// everything is same as set
// only stores duplicate elements

void explainMultiSet() {

    multiset<int>ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1);  //all 1's will erased

    int cnt = ms.count(1);


    //when erase address are defined then spacefic delation occors
    //only single same value erased
    ms.erase(ms.find(1));

    //multiple value erase
    ms.erase(ms.find(1), ms.find(1)+2);

    //rest all function same as Set.


}


//--Unordered Set
void explainUset() {
      
      Unordered_set<int> st;

      //lower bound and upper bound function do not works
      //rest all function are same as above
      //do not store any particular order
      //it has better complexity better then set in most cases,except some when some collision happens


}


//--Map
//key,value
//store unique key

void explainMap() {


    map<int, int>mpp;  //key,value

    map<int, pair<int, int>> mpp;  //key,value

    map<pair<int, int>, int> mpp;  //key,value

    mpp[1]= 2;    //key 1,value 2
    mpp.emplace({3,1});  //k,v
    mpp,insert({2,4});   //k,v
   
    //now mpp= {{1,2}, {2,4}, {3,1}}
   
    mpp[{2,3}] =10;      //k,v

    for(auto it: mpp) {
        cout<<it.first<< " "<<it.second<<endl;
    }
    

    //mpp= {{1,2}, {2,4}, {3,1}}
    cout<<mpp[1];  //{1,2}
    cout<<mpp[5];  //return mpp.end ->mean after the map --(mal nai lol)

    //mpp= {{1,2}, {2,4}, {3,1}}
    auto it =mpp.find(3);  // {3,1}
    cout<< *(it).second;   // 1

    auto it = mpp.fine(5);  //if not found --. mpp.end(); that mean after the map

    auto it=mpp.lowar_bound(2);
    auto it=mpp.upper_bound(3);
    //erase,swap,size,empty,are same as above.

}


//-Multi Map
//duplicate keys {1,2} and {1,3},,here 1 is duplicate in 2nd map
//sorted order
void explainMultiMap() {
  
  //everything same as map,only it can store multiple keys
  //only mpp[key] cannot be used here

}


//--Unordered Map
//not sorted
//unique keys
void explainUnorderedMap() {

    //same as set and unordered_set diffrence.

}



//--compare with pair
//the rules are given below:
bool com(pair<int,int>p1, pair<int,int>p2){

    if(p1.second<p2.second){
        return true;
    }
    else if(p1.second==p2.second){
        if(p1.first>p2.first)  return true;
    }
    reurn false;
}
//after completing containers and iterators we will jump on some imporant algorithm(stl).






//** 3. algorithm **//

//all important and necessary algorithm is here.

void explainExtra() {
   

   // a[n]= {1,3,2,5,4}
   sort(a, a+n);  // n=size of array, a=arry_name
   sort(v.begin(), v.end());  //start and ending

   //for sort specefic  portion 
   sort(a+2, a+4);  // 
    
    //deccending order
    sort(a, a+n, greater<int>);
    pair<int, int> a[]= {{1,2}, {2,1}, {4,1}};

    //sort it according to second element
    //if second element is same, then sort it according to first but in descneding
    
    sort(a, a+n, comp)
    // {4,1}, {2,1}, {1,2}


    //binary no.
    int num= 7;
    int cnt= __builtin_popcount(); //binary of 7;

    long long num=165786578687;
    int cnt= __builtin_popcountll();



    //all permutation for string

    string s= "123";
    do{

        cout<<s<<endl;
    }while(next_permutatioin(s.begin(), s.end()));



   //to find max elemet from an Array:
    int maxi= *max_element(a, a+n);
    int min= *min_element(a, a+n);
}




int main()
{
   

    return 0;
}