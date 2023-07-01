#include<bits/stdc++.h>
using namespace std;

void primeBruteForce(int number)
{
    int count = 0;
    if(number==1){
    	
    	count=3;
	}
    for(int i=0; i<=number; i++)
    {
        if(number % 2 == 0)
        {
            count++;
        }
    }
    
    if(count<3) 
	{
	    cout<< "Prime Number"<<endl;
    }
    else 
    {
    	cout<< "Not prime"<<endl;
	}
  
}
int main()
{
    int testCase;
    cin >> testCase;
    while(testCase)
    {
        int number;
        cin >> number;

        primeBruteForce(number);
    }


    return 0;
}
