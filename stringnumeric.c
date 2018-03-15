#include <stdio.h>
int main()
 {
	  char s[20];
	  int n,i;
	  printf("enter the string");
	   scanf("\n %s",s);
     n=strlen(s);
	  for(i=0;i<n;i++)
	  {
		  if(s[i]>='0' && s[i]<='9')
		  {
			  printf("\n given string is numeric");
		   }
		  else
      {
		   printf("\n given string is not numeric");
	     }
      }
	return 0;
}
