#include <stdio.h>
int main()
{
    int arr[10] = {0}; 
    
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;               
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}