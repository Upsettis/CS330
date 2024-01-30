#include <stdio.h>
#include <stdbool.h> 
#include <math.h>
//Function: cubeOfOdd(n)
//this function takes in a non negative integer and prints every odd integer up to n
//first checks if 0 or less if so prints 0 and returns
//then loops 1-n printing i^3 and iterating by 2

void cubeOfOdd(int n){
    if(n <= 0) {
        printf("%d", 0);
        return;
    }
    for(int i = 1; i <= n; i = i + 2){
        int j = i * i* i;
        printf("%d", j);
        printf(" ");
    }
}


//Function isPrime(int n)
//This function determines if a number n is prime by looping 1 - n and seeing if any number leaves a remained of 0 when n mod i is called
//returns false if not prime, returns true if prime

bool isPrime(int n){
    for(int i =1; i < n; i++){
        if((n % i) == 0) return false;
    }
    return true;
}

//Function: introToCS330(int n)
//This function takes in a postive integer n and prints strings based off of the criteria stated in the pdf file.
//The function runs three bools that check for divisible by 3, 7, and prime number
//The function isPrime(int n) is a helper function that determines if a number is a prime

void introToCS330(int n){
    if(n <= 0) {
        printf("%d", 0);
        return;
    }

    bool div3 = ((n % 3) == 0);
    bool div7 = ((n % 7) == 0);
    bool prime = isPrime(n);

    if(prime) printf("GO BLAZERS");
    else if (div3 && div7) printf("UAB CS 330");
    else if (div7) printf("UAB");
    else if(div3) printf("CS");
    else printf("%d", (n * n *n));
    printf(" ");
}

//Helper function for printHello(int n)

bool isPowerTwo(int n){
    while(n != 1) {
        n = n /2;
        if((n % 2) != 1 && n != 1) return false;
    }
    return true;
}

//Function printHello(int n)
//This function prints 1-n except every power of 2 is replaced by HELLO
//uses isPowerTwo function for help determining if number is power of two
//POWER OF TWO FUNCTION IS NOT WORKING AS EXPECTED AND I CANT FIGURE IT OUT

void printHello(int n){
    if(n <= 0) {
        printf("%d", 0);
        return;
    }
    printf("%d", 0);
    for(int i = 1; i <n; i++){
        if(isPowerTwo(i)) printf("HELLO");
        else printf("%d", i);
    }
    printf(" ");
}




//Function paintGallons(int length, int width, int height)
//This function determined number of gallons of paint based off of surface area of a room
//uses the ceil function to find the ceiling of the total / 400
// RUNNING INTO ERRORS AND NOT RECIEVING EXPECTED OUTPUT CANAT FIGURE IT OUT

double paintGallons(int length, int width, int height){
    int total = 0;
    total += length * height * 2;
    total += width * height * 2;
    total += length * width;
    return ceil((total/400));
}

//Function grader(float avg_exams, float avg_hw, int attendance)
//This function takes in avg_exams, avg_hw, and attendance and determines if student pass(true) or fail (false)

bool grader(float avg_exams, float avg_hw, int attendance){
    if(attendance <= 20) return false;
    if( avg_exams <= 70 && avg_hw <= 70) return false;
    if(!( avg_exams > 85 || avg_hw > 85)) return false;
    return true;
}

