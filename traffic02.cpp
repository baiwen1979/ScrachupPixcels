#include <cstdlib> 
#include <cstdio> 
int main(int argc, char ** argv) 
{ 
    srand48(13); // intialize uniform random variable 
    int numSims = 10; 
    const float dist = 10; // 10 km or miles 
    for (int i = 0; i < numSims; ++i) { 
        float time = 25 + drand48() * 10; // any time between 25 and 35' 
        float speed = 60 * dist / time; // km/miles per hour 
        printf("Train travel at speed: %f\n", speed); 
    } 
    return 0; 
} 