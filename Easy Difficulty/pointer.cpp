#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    // Complete this function 
   int c, d;
    c = *a + *b;
    d = abs(*a - *b);
    *a = c; // Update the value pointed to by a
    *b = d; // Update the value pointed to by b
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
