#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int hello,i,sum;   	
 printf("請輸入一個整數:");
 scanf("%d",&hello);
 sum=(hello*(hello+1)/2);
 printf("答案");
  for(i =1; i<=hello; i++)
  {
    if(i!=hello)
     printf("%d+",i);
	else  
     printf("%d=%d",i,sum);
  }
 return 0;
    

}


