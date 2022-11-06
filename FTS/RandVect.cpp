//Tollot Cristiano 3C

#include <iostream>
#include <random>

void RandVect(long long vector[], unsigned long n){

    std::random_device rand;
    std::uniform_int_distribution< long long int> dist(-9223372036854775808LL, 9223372036854775807LL);

    for (unsigned long i = 0; i < n; i++){
        vector[i] = dist(rand);
    }
}
