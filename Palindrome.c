#include <stdio.h> 
int main()
 {
  int a,b,rev=0,t;
   scanf("%d",&a);
    t=a;
	 while(a>0)
	  {
	   b=a%10;
	    rev=rev*10+b;
		 a=a/10;
		  }
		   if(rev==t)
		    {
			 printf("Palindrome");
			  }
			   else
			    {
				 printf("Not Palindrome");
				  }
				   }