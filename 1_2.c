//세 값의 촤솟값을 구하는 min3 함수를 작성하시오
#include <stdio.h>
int min3(int a,int b,int c){
  if(a>b)
    a=b;
  if(a>c)
    a=c;
  return a;
}
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("최솟값은:%d",min3(a,b,c));
  
}