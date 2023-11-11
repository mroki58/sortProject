#include "SortingLibrary.h"

void ArrayToSort::selection_sort()
{
    for(int i=0;i<100;++i)
    {
        swap(array+i,minimumInArray( array + i , 100 - i ));
    }
}

void swap(int *firstInt,int *secondInt)
{
    int sum = *firstInt + *secondInt;
    *firstInt = sum - *firstInt;
    *secondInt = sum - *secondInt;
}

void swap(int &firstInt,int &secondInt)
{
    int sum = firstInt + secondInt;
    firstInt = sum - firstInt;
    secondInt = sum - secondInt;
}

int *minimumInArray (int * array,int numberOfElems)
{
    int *min = array;
    for(int j=1;j<numberOfElems;++j)
        {
            if(*min > array[j])
            min = array+j;
        }
    return min;
}