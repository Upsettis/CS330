#ifndef __asgn4__
#define __asgn4__


void insertionSort(int arr[]){
    int key;
    int j;
    for(int i = 1; i < sizeof(arr); i++){
        key = *(arr + i);
        j = i - 1;
        while(j >=0 && key < *(arr + j)){
            *(arr + j + 1) = *(arr + j);
            j -= 1;
        }
        *(arr + j + 1) = key;
    }
}


void selectionSort(int arr[]){
    int minVal;
    int temp;
    for(int i = 0; i < sizeof(arr); i++){
        minVal = i;
        for(int j = i+1; j < sizeof(arr); j++){
            if(*(arr + j) < *(arr + minVal)) minVal = j;
        }
        if(minVal != i){
            temp = *(arr + i);
            *(arr + i) = *(arr + minVal);
            *(arr + minVal) = temp;
        }
    }
}



#endif