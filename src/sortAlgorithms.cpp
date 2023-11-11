#include "SortingLibrary.h"

void ArrayToSort::selection_sort()
{
    for(int i=0;i<100;++i)
    {
        int *min = array+i;
        for(int j=i+1;j<100;++j)
        {
            if(*min > array[j])
            min = array+j;
        }
        swap(array+i,min);
    }
}

void swap(int *firstInt,int *secondInt)
{
    int sum = *firstInt + *secondInt;
    *firstInt = sum - *firstInt;
    *secondInt = sum - *secondInt;
}