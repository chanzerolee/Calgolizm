//네 값의 최댓값을 구하는 함수
#include <stdio.h>
int max4(int a,int b,int c,int d){
  if(a<b)
    a=b;
  if(a<c)
    a=c;
  if(a<d)
    a=d;
  return a;
}
int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  printf("최댓값은:%d",max4(a,b,c,d));
  
}