#include "Header.h"

size_t binary_search(size_t arr_size, int* arr, int value)
{
    size_t mid_index  = (arr_size - 1) / 2;
    size_t low_index  = 0;
    size_t high_index = arr_size - 1;

    size_t needed_index = 0;

    while(low_index == high_index)
    {
        if(arr[mid_index] == value)
        {
            return mid_index;
        }
        else if(arr[mid_index] > value)
        {
            high_index = mid_index -1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }

    return -1;
}
