#include <stdio.h>
#include <assert.h>


float average(int a[],int n){
  float sum=o,average;
  for (int i=0;i<n;i++){
    sum=sum+a[i];
  }
  average=sum/n;
  return average;
}
