#include <stdio.h>
void merge_sort(int a[], int aLen, int b[], int bLen, int output[])
{
    int indexA = 0;
    int indexB = 0;
    int index = 0;
    while(aLen>0 && bLen>0)
    {
        if(a[indexA]<=b[indexB])
        {
            output[index] = a[indexA];
            aLen--;
            indexA++;
            
        }
        else
        {
            output[index] = b[indexB];
            bLen--;
            indexB++;
        }
        index++;
    }
    while(aLen>0)
    {
        output[index] = a[indexA];
        indexA++;
        aLen--;
        index++;
    }
      while(bLen>0)
    {
        output[index] = b[indexB];
        indexB++;
        bLen--;
        index++;
    }
}

int main() {
    // Test arrays
    int a[] = {2, 4, 6, 8, 10};
    int aLen = 5;
    
    int b[] = {1, 3, 5, 7, 9};
    int bLen = 5;
    
    // Output array size
    int outputLen = aLen + bLen;
    int output[outputLen];
    
    // Call the merge_sort function
    merge_sort(a, aLen, b, bLen, output);
    
    // Display the sorted output
    printf("Merged and sorted array: ");
    for (int i = 0; i < outputLen; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");
    
    return 0;
}