#include<stdio.h>

int main()
{
	  
     int  ans,num;
     printf("Enter the value of N \n");	
     scanf("%d",&num);
     ans=factorialn(num);
     printf("The value of factorial %d = %d\n",num,ans);
     return 0;


} 

int factorialn(int num)

{
	 if((num == 0))
          {
		  return 1;
	  }
	 return n*factorialn(n-1);

}	 
