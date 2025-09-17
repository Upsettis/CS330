#include <stdio.h>
#include <string.h>



int sumOfDigits(int n){
    if(n <= 0) return -1;
    char chars[32];
    sprintf(chars, "%d", n);
    int total = 0;
    for(int i = 0; i < strlen(chars); i++){
        total = total + (chars[i] - '0');
    }
    return total;
}

int UABMaxMinDiff(int input[], int size){
    int max = input[0];
    int min = input[0];
    for(int i = 0; i < size; i++){
        int temp = input[i];
        if( max < temp) max = temp;
        if( min > temp) min = temp;
    }
    return max-min;

}

int replaceEvenWithZero(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            arr[i] = 0;
        }
    }
    return arr;
}

char* perfectSquare(int n){
    if (n < 0) return "False";
    int temp = 1;
    while(temp < n){
        temp = temp + 1;
        if(temp * temp == n) return "True";
    }
    return "False";
}

int countVowels(char* s) {
    int total = 0;
    char vowels[] = {'A','E','I','O','U','a','e','i','o','u'};
    int num_vowels = sizeof(vowels) / sizeof(vowels[0]); 
    for (int i = 0; i < strlen(s); i++) {
        for (int j = 0; j < num_vowels; j++) {
            if (s[i] == vowels[j]) {
                total++;
            }
        }
    }
    return total;
}

int main() {
    
    printf("%d\n", sumOfDigits(123));
    printf("%d\n", sumOfDigits(405));
    printf("%d\n", sumOfDigits(0));
    printf("%d\n", sumOfDigits(7));
    printf("%d\n", sumOfDigits(-308));
    printf("\n");

    int arr1[] = {3,7,2,9};
    printf("%d\n", UABMaxMinDiff(arr1,4));
    int arr2[] = {5,5,5,5,5,5};
    printf("%d\n", UABMaxMinDiff(arr2,6));
    int arr3[] = {-2,4,-1,6,5};
    printf("%d\n", UABMaxMinDiff(arr3,5)); // Using letters to demonstrate ASCII logic
    printf("\n");


    int arr4[] = {1,2,3,4};
    replaceEvenWithZero(arr4,4);
    for(int i = 0; i < 4; i++){
    printf("%d", arr4[i]);
    }
    printf("\n");
    int arr5[] = {2,4,6};
    replaceEvenWithZero(arr5,3);
    for(int i = 0; i < 3; i++){
    printf("%d", arr5[i]);
    }
    printf("\n");
    int arr6[] = {1,3,5};
    replaceEvenWithZero(arr6,3);
    for(int i = 0; i < 3; i++){
    printf("%d", arr6[i]);
    }
    printf("\n");
    printf("\n");


    printf("%s\n", perfectSquare(16));
    printf("%s\n", perfectSquare(15));
    printf("%s\n", perfectSquare(25));
    printf("%s\n", perfectSquare(36));
    printf("\n");

    
    printf("%d\n", countVowels("Hello World"));
    printf("%d\n", countVowels("UAB CS"));
    printf("%d\n", countVowels("Python"));
    printf("%d\n", countVowels("aeiou"));

    return 0;
}