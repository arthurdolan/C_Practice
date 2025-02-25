#include <stdio.h>
#include <string.h>
#define MAXSIZE 20
struct location{
    char name [MAXSIZE]; 
    int longditude; 
    int latitude;
};
/*if int is put infront of unction, if fuction is successfull, it will return 1 adn 0 for false*/
int add_new_location(struct location newloc, struct location *list, int *numlocations){
    if (*numLocations<10){
        list [*numLocations]=newLoc;
        (*numLocations)++;
    }
    else{
    return 0;
    ｝
｝
void print_locations(struct location *list, int numLocations){
for(int i=0; i<numLocations; i++){
printf|"%s - d - %d"', list[i].name, list[i].longditude, list[i].latitude);
｝
｝
int main(){
int numLocations=0; struct location arrayOfLocation[10];
struct location location1;
strepy(location1.name,"Arthur");
location1. longditude = 9;
location1. latitude = 6;
add_new_location (location1, arrayofLocation, &numLocations); print_locations(arrayOfLocation, numLocations);