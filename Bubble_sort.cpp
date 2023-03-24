#include "Header.h"

void bubble_sort(int* arr_ptr, size_t arr_size)
{
    for(size_t index_i = 0; index_i < arr_size; index_i++)
    {
        swap(arr_ptr, arr_size);
    }
}

void swap(int* arr_ptr, size_t arr_size)
{
    for(size_t index_i = 0; index_i < arr_size; index_i++)
    {
        if(index_i == arr_size - 1)    
        {
            break;
        }
        else if(arr_ptr[index_i] > arr_ptr[index_i + 1])
        {
            int temp = arr_ptr[index_i + 1];
            arr_ptr[index_i + 1] = arr_ptr[index_i];
            arr_ptr[index_i] = temp;
        }
    }
}
