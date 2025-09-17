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

int UABMaxMinDiff(char* input){
    int max = -10;
    int min = 10;
    for(int i = 0; i < strlen(input); i++){
        int temp = input[i];
        if( max < temp) max = temp;
        if( min > temp) min = temp;
    }
    return max-min;

}

char* replaceEvenWithZero(char* arr){
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] % 2 == 0) arr[i] = '0';
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

