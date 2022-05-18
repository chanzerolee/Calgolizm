//네 값의 최솟값을 구하는 min4 함수를 작성하세요
#include <stdio.h>
int min4(int a,int b,int c,int d){
  if(a>b)
    a=b;
  if(a>c)
    a=c;
  if(a>d)
    a=d;
  return a;
}
int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  printf("최솟값은:%d",min4(a,b,c,d));
  
}