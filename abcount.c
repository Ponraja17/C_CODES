// #include<stdio.h>
// #include<string.h>
// int main()
// {
// int l,i,j;
//     char str[100];
//     scanf("%s",str);
//     l=strlen(str);
// for(i=0;i<l;i++)
// {
//     for(j=0;j<l;j++)
//     {
//         if(str[i]!='')
//         {

//         }
//     }
// }
//     return 0;

// }







#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int  i,j,count=0,n;
 
    printf("Enter  the string : ");
    scanf("%s",s);
     
   n=strlen(s);
     
	printf(" frequency count character in string:\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
	
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);
 
	       
	   
       }
	   
	   
 	} 
 	 
     
    return 0;
}