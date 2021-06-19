
#include <stdio.h>
#include <assert.h>


int min(int a[], int n);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
 int min(int a[], int n){
 int minimum;
minimum=a[0];
for (int i=0;i<n;i++){
    if (a[i]<minimum){
      minimum=a[i];
    }
}
return minimum;
}
