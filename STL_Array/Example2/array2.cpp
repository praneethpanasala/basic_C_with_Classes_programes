#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> n;
    
    //taking values of elements from user
    for(int i = 0; i < n.size() ; i++)
    {
		cout << "Enter value of n[" << i << "]"<< endl;
    	cin >> n.at(i);
  	}
 	
 	/* printing the values of elements of array */
  	for (int j = 0; j < n.size(); j++ ) 
  	{
    	       cout << "n[" << j << "] = " << n.at(j) << endl;
  	}
    return 0;
}