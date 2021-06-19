#include <stdio.h>


int main(){
float average(int a[],int n){
  float average,sum=0;
  for (int i=0;i<n;i++){
    sum=sum+a[i];
  }
  average=sum/n;
  return average;
 }
}
