#include <stdio.h>
int hash_mult(char key[])
{
    int L1 = key[0] - 'a' + 1;;
    int L2 = key[1]- 'a' + 1;;
    int L3 = key[2]- 'a' + 1;;
    int hash = L1 + L2 * 32 + L3 * (32*32);
    return hash;
}
int hash_bitwise(char key[])
{
    int L1 = key[0] - 'a' + 1;;
    int L2 = key[1]- 'a' + 1;;
    int L3 = key[2]- 'a' + 1;;
    int hash = L1 | (L2 << 5)| (L3 <<10);
    return hash;
}
int hash_normalized(char key[], int array_size)
{
    int hashVal = hash_bitwise(key);
    int index = hashVal % array_size;
    return index;

}
void test_hash_normalized() {
    // Test case
    char key[] = "what";
    int array_size = 10; // Example array size
    
    // Compute hash value using hash_normalized
    int index = hash_normalized(key, array_size);

    // Print index
    printf("Index for key '%s': %d\n", key, index);
}
void test_hash_mult() {
    // Test case
    char key[] = "what";

    // Compute hash value
    int hash = hash_bitwise(key);

    // Print hash value
    printf("Hash of %s: %d\n", key, hash);
}
int main()
{
    test_hash_mult();
    test_hash_normalized();

}