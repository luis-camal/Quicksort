//
//  quicksort.hpp
//  quicksort
//  Template functions to implement quicksort to any data type
//  that implements the comparision operators. 
//  Created by Luis Camal on 12/8/19.
//  Copyright © 2019 Luis. All rights reserved.
//

#ifndef quicksort_hpp
#define quicksort_hpp

#include<iostream>
using namespace std;
/**
 * Prints the elements of of array arr.
 * @param arr - array whose elements will be printed.
 * @param arrSize - The size of the array based on the number of elements.
 *
 */
template<class T>
void printArray(T arr[], int arrSize){
 
 for ( int i = 0; i < arrSize; i++){
  
  cout<< arr[i];
  
  if( i < (arrSize - 1) ){
   cout <<", ";
  }
  else{
   cout << "" << endl;
  }
 }
}
/**
 * Sets all elements smaller than the pivot value, which here is the last element
 * at index r, towards the left of the pivot.
 *
 *  @param arr - The array which contains all the elements that will be sorted.
 *  @param l - The left most index of a subarray.
 *  @param r - The right most index of a subarray
 */
template <class T>
int partition(T arr[], int l, int r){
    int i = l-1;
    int j = l;
    T pivot = arr[r];
    
    while(j<r){
        if(arr[j] < pivot){
            i++;
            T tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
        
        j++;
        
    }
    i++;
    // In the end place the pivot
    // in the correct location
    T tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    
    return i;
}
/**
 * This sorts an array by the quick sort algorithm.
 *
 * @param arr - The array which contains the element of the array which we want to sort.
 * @param l - The left most index of a subarray.
 * @param r - The right most index of a subarray.
 */
template <class T>
void quicksort(T arr[], int l, int r){
    if( l < r){
        int  p = partition(arr, l, r);
    
        quicksort(arr, l, p-1);
        quicksort(arr, p+1, r);
    }
}


#endif /* quicksort_hpp */
