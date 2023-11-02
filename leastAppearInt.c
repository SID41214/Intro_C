#include <stdio.h> 

int ctr[101];
int num;

int main()
{
  int i,x,min_num,result;
  printf("What is the number of integers you wish to input? ");
  scanf("%d",&num);
  printf("Input the number(s):\n");
  for(i=0;i<num;i++)
    {
      scanf("%d",&x);
      ctr[x]++;
   }
  min_num = 100;
  for(i=1;i<=100;i++)
    {
    if( ctr[i]>0 && ctr[i]<min_num)
      {  result=i;
	 min_num=ctr[i];
      }
    }
  printf("Smallest among the said integers: %d\n",result);
}
