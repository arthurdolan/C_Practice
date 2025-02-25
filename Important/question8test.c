#include <stdio.h>

void merge_sort(int a[], int aLen, int b[], int bLen, int output[])
{
    int outputIndex = 0, aIndex =0, bIndex = 0;
    while(aIndex<aLen&& bIndex<bLen){
        if(a[aIndex]<b[bIndex]){
            output[outputIndex++]=a[aIndex++];

        }
        else{
            output[outputIndex++]=b[bIndex++];
        }
    }
    while(aLen>aIndex){
        output[outputIndex++]= a[aIndex++];
    }
    while(bLen>bIndex){
        output[outputIndex++]= b[bIndex++];
    }
}
void print_output(int output[], int oLen){
    for(int i=0; i<oLen; i++){
        printf("%d - %d\n", i+1, output[i]);
    }
}


int main()
{
    int inA[] = { 1, 2, 4 },
        inB[] = { 3,5,7,8,9 },
        output[4];

    // output is an array that is modified and displayed within the function
    // inA, inB are the input arrays
    // 3 and 1 are the lengths of inA and inB respectively

    merge_sort(inA, 3, inB, 5, output);
    print_output(output, 8);

    return 0;
}
