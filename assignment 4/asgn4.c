#include "asgn4.h"



int main(){
    int test[] = {9,3,1,4,2,51,5,1};
    selectionSort(test);
    for(int i = 0; i < sizeof(test); i++) printf("%d", *(test + i));
    int test[] = {9,3,1,4,2,51,5,1};
    insertionSort(test);
    for(int i = 0; i < sizeof(test); i++) printf("%d", *(test + i));
}