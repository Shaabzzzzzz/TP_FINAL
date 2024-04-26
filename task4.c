#include<stdio.h>

 int list[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int element_to_find = 25;
    int low, high, mid;
    int found = 0;

    int low = 0;
    int high = 49;
int main(){
    while (low <= high)
        {
            mid = (low + high) / 2;

            if (list[mid] == element_to_find)
            {
                found = 1;
                break;
            }
            else if (list[mid] < element_to_find)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (found)
        {
            // Print the result
            printf("Element found\n");
        }
        else
        {
            // Print the result
            printf("Element not found\n");
        }
}