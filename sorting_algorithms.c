#include<stdio.h>
#include<stdlib.h>
#include "sorting_algorithms.h"
#include "def.h"

/*
 *********************************************************************************************************
 * Swap: swaping of two elements, here in this function arg1 and arg2 will accept the adress of the element
 *		 and interchanging the both values. (with the address)
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
#ifdef SWAP
int swap(int *arg1,int *arg2)
{
	int temp;
	temp=*arg1;
	*arg1=*arg2;
	*arg2=temp;
	return 0;
}
#endif

/*
 *********************************************************************************************************
 * Bubble Sort: it may be defined as the sorting algorithm that follows the approch of replacing the 
 *				value in the array and keep it repeating untill the list is sorted. Its is simple way of 
 *				performing sorting. At first smallest value found in the array has been moved to the first 
 *				index of the array and then the search begins again to find the other smallest number.   
 *				it will replaces until the array consists of a sorted list. internally after founding the 
 *				least value in the next index it will swap(eg: a(a,b) to (b,a) till all the elements to
 *				be sort).
 *				Bubble Sort works by comparing each element of the list with the element next to it and swapping them if required.
 *		    	With each pass, the largest of the list is �bubbled� to the end of the list whereas the smaller values sink to the bottom. 
 *				It is similar to selection sort although not as straight forward. 
 *				Instead of �selecting� maximum values, they are bubbled to a part of the list. An implementation in C.
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
 #ifdef BUBBLESORT
int bubbleSort(int *arr,int arr_n)					// (array_elements, arr_size)
{
	int i,j;	
	printf("\nBubble Sorting Proceeds!");
	for(i=0;i<arr_n;i++)
	{
		for(j=0;j<arr_n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap(&arr[j],&arr[j+1]);
			}
		}
	}
	printf("\nSorted Array is: ");
	for(i=0;i<arr_n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nBubble Sort Algorithm Completed!");
}
#endif

/*
 *********************************************************************************************************
 * Selection Sort: 	Repeatedly finding the minimum element and swapping (checks the complete array
 *					from first to last when first element gets it will store in first index and so on.
 *					once the min/max is sorted then it will shift to row of sorted array.
 * 					It basically determines the minimum (or maximum) of the list and swaps it with the 
 *					element at the index where its supposed to be. 
 *					The process is repeated such that the nth minimum (or maximum) element is swapped 
 *					with the element at the n-1th index of the list. 
 *					The below is an implementation of the algorithm in C.
 *					hint:	it minimize the time complexity of the program bcoz it doesn't check the sorted
 *							element again.
 *					
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
#ifdef SELECTIONSORT
int selectionSort(int *arr,int arr_n)
{
	int i,j,min;
	printf("\nSelection Sorting Proceeds!");
	for(i=0;i<arr_n-1;i++)
	{
		for(j=i+1;j<arr_n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		//above for loop(here j,) finds the min value in the complete array elements. and place the min in first of the index
		//	and so on. first, and second and third(placing the sorted values like this)
		swap(&arr[min],&arr[i]);
	}	
	printf("\nSorted Array is: ");
	for(i=0;i<arr_n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nSelection Sort Algorithm Completed!");
}
#endif

/*
 *********************************************************************************************************
 * Insertion Sort:  Shift elements one by one
 *					taking one by one element and shifing /placing the values in the ascending order.
 *					eg: taking elements in the array and place in the correct order first checks the all 
 * 					elements in the array and place the taken element in the  order (min <element> max)
 * 					starting from right to left.
 *					Insertion Sort is a sorting algorithm where the array is sorted by taking one element at a time. 
 *					The principle behind insertion sort is to take one element, 
 *					iterate through the sorted array & find its correct position in the sorted array.		
 *					Step 1 - If the element is the first one, it is already sorted.
 *					Step 2 � Move to next element
 *					Step 3 - Compare the current element with all elements in the sorted array
 *					Step 4 � If the element in the sorted array is smaller than the current element, iterate to the next element. Otherwise, shift all the greater element in the array by one position towards right
 *					Step 5 - Insert the value at the correct position
 *					Step 6 - Repeat until the complete list is sorted	
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
 #ifdef INSERTIONSORT
 int insertionSort(int *arr,int arr_n)
 {
	printf("\nInsertion Sorting Proceeds!");
 	int i,j,val,ind;
 	for(i=1;i<arr_n;i++)
 	{
 		val=arr[i];
 		ind=i;
 		while(ind>0 && arr[ind-1]>val)
 		{
 			arr[ind]=arr[ind-1];
			ind--;	
		}
		arr[ind]=val;
	}
 	return 0;
 }
 #endif
 
 /*
 *********************************************************************************************************
 * Merge Sort:
 *	
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
 #ifdef MERGESORT
 int mergeSort(int *arr,int arr_n)
 { 
	int i,j;
	printf("\nMerge Sort Proceeds!");
 	
 }
 #endif
 
 /*
 *********************************************************************************************************
 * Quick Sort:
 *	
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
 #ifdef QUICKSORT
 int quickSort(int *arr,int arr_n)
 {
	int i,j;
	printf("\nQuick Sort Proceeds!");
		
 } 
 #endif
 
 /*
 *********************************************************************************************************
 * Heap Sort:
 *	
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
 #ifdef HEAPSORT
 int heapSort(int *arr,int arr_n)
 {
 	int i,j;
	printf("\nHeap Sort Proceeds!");	
 } 
 #endif





