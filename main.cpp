#include "SortingLibrary.h"

int main(){

    ArrayToSort Arr;
    Arr.print();
    Arr.selection_sort();
    std::cout<<"\n\n";
    Arr.print();


    return 0;
}