/* Enter your solutions in this file */
#include <stdio.h>

float average(int a[],int n){
  float sum=o,average;
  for (int i=0;i<n;i++){
    sum=sum+a[i];
  }
  average=sum/n;
  return average;
}

int factors(int n, int ret[])
{  int p=0;
    while(n!=1)
  {
    for( int i=2;i<=n;i++)
    {
        if(isprime(i)) 
        {
            while (n%i==0)
            { n=n/i;
              ret[p]=i;
              p++;
            }
        }
    }
  }
  return (p);
}


int isprime(int n)
{ int i, flag = 1;
for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
    
      flag = 0;
      break;
    }
  }
 return flag;
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




 
