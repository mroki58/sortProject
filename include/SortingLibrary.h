#ifndef SORTING_LIBRARY_H
    #define SORTING_LIBRARY_H
    #include <iostream>
    #include <cmath>                    
    #include <cstdlib>
    #include <ctime>

    class ArrayToSort{
        ArrayToSort();

        void print();

        void selection_sort();

        private:
            int array[100];
    };

#endif