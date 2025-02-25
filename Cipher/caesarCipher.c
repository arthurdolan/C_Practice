#include <stdio.h>
#include <stdlib.h>
int vowels_to_numbers(FILE *plain, FILE *cipher) {
    if (plain == NULL || cipher == NULL) {
        return 0;
    }

    int character;
    while ((character = fgetc(plain)) != EOF) {
        switch (character) {
            case 'a':
                putc('2', cipher);
                break;
            case 'e':
                putc('3', cipher);
                break;
            case 'i':
                putc('1', cipher);
                break;
            case 'o':
                putc('0', cipher);
                break;
            case 'u':
                putc('4', cipher);
                break;
            default:
                putc(character, cipher);
        }
    }

    if (ferror(plain)) {
        perror("Error reading from plain file");
        return 0;
    }

    if (ferror(cipher)) {
        perror("Error writing to cipher file");
        return 0;
    }

    // Flush the output buffer
    if (fflush(cipher) != 0) {
        perror("Error flushing buffer");
        return 0;
    }

    return 1;
}
/*int vowels_to_numbers(FILE *plain, FILE *cipher)
{
    char character;
    if(plain == NULL){
        return 0;
    }
    while((character = fgetc(plain))!= EOF)
    {
        switch(character)
        {
            case 'a':
                putc('2',cipher);
                break;
            case 'e':
                putc('3',cipher);
                break;
            case 'i':
                putc('1',cipher);
                break;
            case 'o':
                putc('0',cipher);
                break;
            case 'u':
                putc('4',cipher);
                break;
            default:
                putc(character, cipher);
        }
    }

}
*/
int main(){
/*FILE *plain;
plain = fopen("plain.txt","r");
FILE *cipher;
cipher = fopen("cipher.txt","w");
vowels_to_numbers(plain, cipher);
*/
    FILE *plain;
    FILE *cipher;
    
    plain = fopen("plain.txt", "r");
    if (plain == NULL) {
        perror("Error opening the plain file");
        return 1;
    }

    cipher = fopen("cipher.txt", "w");
    if (cipher == NULL) {
        perror("Error opening the cipher file");
        fclose(plain);
        return 1;
    }

    vowels_to_numbers(plain, cipher);

    fclose(plain);
    fclose(cipher);
    return 0;
}

