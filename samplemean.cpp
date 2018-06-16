#include <random> 
#include <cstdlib> 
#include <cstdio> 
 
int main(int argc, char **argv) 
{ 
    std::mt19937 rng; 
    rng.seed(2013); 
    std::uniform_int_distribution<uint32_t> die(1,6); 
    int sum = 0; 
    for (int n = 1; n <= 1000; n++) { // number of trials = n 
        int rnd = die(rng); // result of our random variable X 
        sum += rnd; // update sum 
        printf("%d %f\n", n, float(sum) / n); // print out sample mean 
    } 
 
    return 0; 
} 