#include <stdio.h>

int findMaxSum(int a[], int n) {
  int maxSum = 0, curSum = 0;
  int i;
  
  for(i = 0; i < n; i++) {
    curSum += a[i];
    if(curSum > maxSum) {
      maxSum = curSum; 
    }
    if(curSum < 0) {
      curSum = 0;
    }
  }
  
  return maxSum;
}

int main() {

  int n, i;
  scanf("%d", &n);
  int a[n];
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  int maxSum = findMaxSum(a, n);

  printf("%d", maxSum);
  
  return 0;
}
