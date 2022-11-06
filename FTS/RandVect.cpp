//Tollot Cristiano 3C
//Per il generatore la guida che ho seguito è questa https://www.youtube.com/watch?v=oW6iuFbwPDg
#include <iostream>
#include <random>

void RandVect(long long vector[], unsigned long n){

    std::random_device rand;
    std::uniform_int_distribution< long long int> dist(-9223372036854775808LL, 9223372036854775807LL);

    for (unsigned long i = 0; i < n; i++){
        vector[i] = dist(rand);
    }
}
