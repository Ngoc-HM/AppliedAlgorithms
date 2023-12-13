#include <stdio.h>

int main() {
  int n, i;
  long long sum = 0;
  
  scanf("%d", &n);
  
  int a[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  
  for(i = 0; i < n; i++) {
    sum += a[i];
  }
  
  printf("%lld", sum);
  
  return 0;
}
