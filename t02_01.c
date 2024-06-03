// 12S23017 - Andrey jonathan nathaniel nainggolan
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
int P,Q,M,N;
 scanf("%d",&N);
 
 for (int i =0; i<N; i++){
  scanf("%d%d%d", &P,&Q,&M);}

 for (int j=0; j<M; j++);{
  if (P%2 ==1 ){P=(P-1)/2;}
  else {P=P/2;}
 }
 if (Q%2 ==1) {Q=(Q-1)/2;}
 else {Q = Q/2;}
 printf("%d%d\n",P,Q);


  
  

  
  return 0;
  
}

