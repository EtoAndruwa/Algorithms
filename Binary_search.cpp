#include "Header.h"

int binary_search(size_t arr_size, int* arr, int value)
{
    int low_index  = 0;
    int high_index = arr_size - 1;
    int mid_index  = (high_index + low_index)/ 2;

    int needed_index = 0;

    while(low_index < high_index + 1) // this statement is needed in order to check value if low_index == high_index(the last value in the array)
    {
        mid_index = (high_index + low_index)/ 2;
        // printf("mid_index: %d\n", mid_index);
        // printf("low_index: %d\n", low_index);
        // printf("high_index: %d\n\n", high_index);

        if(arr[mid_index] == value)
        {
            return mid_index;
        }
        else if(arr[mid_index] > value)
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }

    return -1;
}
