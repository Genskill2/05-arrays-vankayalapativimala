#include <stdio.h>
#include <assert.h>


int max(int marks[], int n);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int max(int marks[], int n){
 
int maximum;
     /**n=get_int("no of integer");
     **/
maximum=marks[0];
   for (int i=0;i<n;i++){
        /* marks[i]=get_int("\n enter mark");*/
        if(marks[i]>maximum){
             maximum=marks[i];
             }
             
             }
         return maximum;
      }
