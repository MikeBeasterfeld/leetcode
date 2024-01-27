#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("Position %i\n", j);
        printf("value %i\n", nums2[j]);
        int i = 0;
        while (nums1[i] < nums2[j] && i < nums1Size - (n - j))
        {
            printf("Looking at index %i\n", i);
            printf("Value - %i\n", nums1[i]);
            i++;
        }
        printf("Found index %i\n", i);
        int k = nums1Size - 1;

        while (k > i)
        {
            printf("Move %i to %i\n", k - 1, k);
            nums1[k] = nums1[k - 1];
            k--;
        }

        printf("Copy %i to position %i\n", nums2[j], i);
        nums1[i] = nums2[j];
        printf("Done\n");
    }
}

int main()
{
    int nums1[6] = {1, 2, 3};
    int m = 3;
    int nums2[3] = {2, 5, 6};
    int n = 3;

    merge(nums1, 6, 3, nums2, 3, 3);

    printf("Expected: 1 2 2 3 5 6\nGot:      ");

    for (int i = 0; i < 6; i++)
    {
        printf("%i ", nums1[i]);
    }

    printf("\n");

    return 0;
}