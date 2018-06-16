#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
int main(int argc, char **argv) 
{ 
    int numIter = 10; 
    float minBound = -5, maxBound = 5; 
    float cdf = 0, dx = (maxBound - minBound) / (float) numIter; 
    for (int i = 0; i < numIter; ++i) { 
        float x = minBound + (maxBound - minBound) * (i + 0.5) / (float)numIter; 
        float g_x = 1 / sqrtf(2 * M_PI) * exp(-(x * x) / 2); 
        printf("%f %f\n", x, g_x); 
        cdf += g_x * dx; // add current sample to all previous samples 
        printf("CDF at %f: %f\n", x, cdf); 
    } 
    printf("Sum: %f\n", cdf); // the final sum should be 1 
    return 0; 
} 