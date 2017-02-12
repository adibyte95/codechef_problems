#include <stdio.h>
 
int main(void) {
    // your code goes here
    int t;
    float q, p;
    
    scanf ("%d", &t);
    
    while (t--) {
        scanf ("%f %f", &q, &p);
        
        if (q >= 1000) {
            printf ("%.6f\n", q * p * 0.9);
        } else {
            printf ("%.6f\n", q * p);
        }
    }
    return 0;
} 
