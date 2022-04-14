//Write a C++ program to search an element in an array using linear search.
//In this C++ program we have to search an element in a given array using linear search algorithm. If given element is present in array then we will print it's index otherwise print a message saying element not found in array.

//For Example :
//Input Array : [2, 8, 4, 2, 14, 10, 15]
//Element to search : 4

//Output : 
//Element found at index 2 
#include <iostream>
using namespace std;
   
int main(){
    int input[100], count, i, num;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array\n";
    cin >> num;
      
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }
 
    return 0;
}