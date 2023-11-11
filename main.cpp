#include "SortingLibrary.h"

int main(){

    //Random seed 
    srand(time(NULL));

    ArrayToSort Arr;
    Arr.print();
    Arr.selection_sort();
    std::cout<<"\n\n";
    Arr.print();


    return 0;
}