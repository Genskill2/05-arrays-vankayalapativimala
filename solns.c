/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int len)
{
      int max=arr[0];
    for(int i=0; i<len; i++)
    { if (arr[i]>max)
       max=arr[i];
    }
    return max;
}
int min(int arr[], int len)
{
    int min= arr[0];
    for(int i=0; i<len; i++)
    { if (arr[i]<min)
       min = arr[i];
    }
    return min;
}
float average(int arr[], int len)
{
    float average, sum=0;
    for( int i=0; i<len; i++)
    sum+=arr[i];
    average=sum/len;
    return average;
}
int mode(int arr[], int len)
{
    int arrno[len];
    int n,count=0,a;
    for( int i=0; i<len; i++){
    n= arr[i];
    for(int j=0; j<len; j++)
    {    if( arr[i]==arr[j])
        count++;
    }
    arrno[i]=count;
    count =0;
    }
    int max=arrno[0];
    for( int k=0;k<len;k++)
      { if(arrno[k]>max)
          max=arrno[k];}
    for(a=0;a<len; a++)
    { if(max==arrno[a])
         break;
     }
     return arr[a];
}
int factors(int num, int arr[])
{
    int cpy=num;
    int cnt=0;
    int cnt1=0;
    for (int i=2; i<num/2;i++)
    { if(num%i==0){
    for(int j=2; j<=i;j++)
    {if(i%j==0)
    cnt+=1;
    }
    if(cnt==1){
    while(cpy%i==0){
    arr[cnt1]=i;
    cpy/=i;
    cnt1+=1;
    }
    cpy=num;}
    cnt=0;
    }
    else
    continue;}
    return cnt1;
}
