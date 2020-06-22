#include<stdio.h>
#include<stdlib.h>
#include "sorting_algorithms.h"
#include "def.h"

/*
 *********************************************************************************************************
 * Bubble Sort: it may be defined as the sorting algorithm that follows the approch of replacing the 
 *				value in the array and keep it repeating untill the list is sorted. Its is simple way of 
 *				performing sorting. At first smallest value found in the array has been moved to the first 
 *				index of the array and then the search begins again to find the other smallest number.   
 *				it will replaces until the array consists of a sorted list. internally after founding the 
 *				least value in the next index it will swap(eg: a(a,b) to (b,a) till all the elements to
 *				be sort).
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
 #ifdef BUBBLESORT
int bubbleSort(int *arr,int arr_n)					// (array_elements, arr_size)
{
	int i,j;
	int a=2,b=1;	
	printf("\nBubble Sorting Proceeds!");
	printf("Entered array is: ");
	for(i=0;i<arr_n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<arr_n-1;i++)
	{
		for(j=0;j<arr_n-i-1;i++)
		{
			if(arr[j]>arr[j+1])
			{
			swap(&arr[i],&arr[i+1]);
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
 * Selection Sort:
 *	
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
#ifdef SELECTIONSORT
int selectionSort(int *arr,int arr_n)
{
	printf("\nSelection Sorting Proceeds!");
}
#endif

/*
 *********************************************************************************************************
 * Insertion Sort:
 *	
 *				Time complexity :
 *				space complexity:
 *********************************************************************************************************
 */
 #ifdef INSERTIONSORT
 int insertionSort(int *arr,int arr_n)
 {
	printf("\nInsertion Sorting Proceeds!");
 	
 	
 }
 #endif
 
 
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






