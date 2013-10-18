#include <iostream>
#include <vector>

using namespace std;

// http://jessicarbrown.com/images/ft-cpp-loop.gif
int main()
{
    
    // non-c++11 syntax:
    
    // 1. create a for loop that prints numbers 1 to 5

    countFive();
    
    // 2. create a for loop that iterates through a vector of strings and print
    // them
    
    // 3. create a for loop that gets a map of <string, float> and returns a
    // new map of of (char*, int)
    
    // 3. create a for loop that gets a map of <string, float> and updates the
    // same map so that it adds "yeah!" to each string and rounds the float
    // number. transform it in place.
      
      
    //----------------------------------------------------------------------
        
    // 4. transform every previous exercise to ranged for loops. use as much
    // c++11 syntax as you can
    
    // 5. write a for loop that prints a pyramid of height N, like this:    
    //	
    //	               **
    //	              ****
    //	             ******
    //	            ********
    //	           **********
    //	          ************
    
}

void countFive()
{
    // bucle for que cuenta de 1 a 5 //
    for(int c=1;c<=5;c++)
    {
        cout << c << "\n";
    }

}


