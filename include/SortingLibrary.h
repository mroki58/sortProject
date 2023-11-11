#ifndef SORTING_LIBRARY_H
    #define SORTING_LIBRARY_H
    #include <iostream>
    #include <cmath>                    
    #include <cstdlib>
    #include <ctime>

    // swapping integers
    void swap(int *a,int *b);
    void swap(int &a,int &b);

    //Return pointer to minimum value in array which has pointer to it - array, and number of elements equal numberOfElems
    int * minimumInArray(int *array, int numberOfElem);

    class ArrayToSort{
        public:
        //default constructor initializing random values in array
        ArrayToSort();
        
        //print array
        void print();

        //Selection sort using minimum 
        void selection_sort();

        private:
            int array[100];
    };

#endif