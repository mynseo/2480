#include <stdio.h>

int main() {
  int a, b, c;
  int point=0, same=0;
  scanf("%d %d %d", &a, &b, &c);
  if(a==b){
    same=a;  
    point++;
  }
  if(b==c){
    same=b;  
    point++;
  }
  if(a==c){
    same=c;  
    point++;
  }
  if(point==0){
    if(a>=b&&a>=c)
      printf("%d", a*100);
    else if(b>=a&&b>=c)
      printf("%d", b*100);
    else if(c>=b&&c>=a)
      printf("%d", c*100);
  }
  if(point==1)
    printf("%d", 1000+same*100);
  
  if(point==3)
    printf("%d", 10000+same*1000);
  return 0;
}
  