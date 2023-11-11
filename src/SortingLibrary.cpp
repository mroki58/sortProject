#include "SortingLibrary.h"

ArrayToSort::ArrayToSort()
{
    for(int i=0;i<100;++i)
    {
        array[i]=rand()%100;
    }
}

void ArrayToSort::print()
{
    for(int i=0;i<100;++i)
    {
        std::cout << array[i] << " ";
    }
}
