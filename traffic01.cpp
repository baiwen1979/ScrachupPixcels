#include <cstdlib>
#include <cstdio>
#include <cstring>

int main(int argc, char ** argv)
{
   srand48(13);
   int numSims = 1000000;
   int numBins = 100;
   int bins[numBins];
   memset(bins, 0x0, sizeof(int) * numBins); // set all the bins to 0
   const float dist = 10; // 10 km
   for (int i = 0; i < numSims; ++i) {
       float diff = (2 * drand48() -1) * 5; // random var between -5 and 5
       int whichBin = (int)(numBins * (diff / 5 + 1) * 0.5);
       bins[whichBin]++;
       float time = 30 + diff;
       float speed = 60 * dist / time;
   }
   float sum = 0;
   for (int i = 0; i < numBins; ++i) {
       float r = bins[i] / (float)numSims;
       printf("%f %f\n", 5 * (2 * (i /(float)(numBins)) -1), r);
       sum += r;
   }
   fprintf(stderr, "sum %f\n", sum);
   return 0;
}