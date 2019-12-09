
#include <iostream>
using namespace std;
#include "quicksort.hpp"

int main(){
    int arrInt[] = {12, 11, 2, 13, 5, 6,7};
    int sizeIntArray = sizeof(arrInt)/sizeof(arrInt[0]);
    
    char arrChar[] = {'z','d','g','a','f','b','c','y'};
    int sizeCharArray = sizeof(arrChar)/sizeof(arrChar[0]);
    
    cout << "This shows the quick sort for a char type array. " << endl;
    cout << "Unsorted Array: ";
    printArray(arrChar,sizeCharArray);
    quicksort(arrChar, 0, sizeCharArray - 1 );
    cout << "Sorted Array: ";
    printArray(arrChar,sizeCharArray);
    
    cout << "This shows the quick sort for a Int type array. " << endl;
    cout << "Unsorted Array: ";
    printArray(arrInt,sizeIntArray);
    quicksort(arrInt, 0, sizeIntArray - 1 );
    cout << "Sorted Array: ";
    printArray(arrInt,sizeIntArray);
}
    
