#include "Header.h"

size_t simple_search(size_t arr_lengh, int* arr_ptr, int value)
{
    for(size_t index = 0; index < arr_lengh; index++)
    {
        if(arr_ptr[index] == value)
        {
            return index;
        }
    }
    return -1;
}
