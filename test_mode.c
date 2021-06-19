#include <stdio.h>
#include <assert.h>


int mode(int x[], int n);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
int mode(int x[], int n)
{   int p[20]={0};
    int count;
    for(int i=0;i<n;i++)
    {   count=0;
        for(int j=0; j<n; j++)
        { if(x[j]==x[i])
           {count++;}
        }
        p[i]=count;
    }
    int index=0;
    int mx=p[0];
    for(int i=1;i<n;i++)
    {
       if(p[i]>mx)
       {
           mx=p[i];
           index=i;
       }
    }
 return x[index];
}
