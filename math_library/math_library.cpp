#include <math_library.h>


bool is_prime(int num){
    if (num <= 1) return false;
    if (num <= 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; i * i <= num; i += 6){
        if (num % i == 0 || num % (i + 2) == 0){
            return false;
        }
    }
    return true;
}


int factorial(int n){
    if (n <= 1 || n >= 12) return -1;
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}


int gcd(int a, int b){
    int ost = a % b;
    if(ost == 0) return b;
    else{
        a = ost;
        return gcd(b, ost);
    }
}


int lcm(int a, int b){
    if(a == 0 || b == 0) return 0;
    return abs(a * b) / gcd(a, b);
}