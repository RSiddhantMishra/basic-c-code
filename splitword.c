#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s[100],ans[10][20],ban[10][20],temp[10];
    int k=0,i,j;
    scanf("%s",s);
    for (i=0;i<strlen(s);i++)
    {   
        for ( j=i;j<strlen(s);j++) 
        {
            //printf("%c", s[j]);
            ans[i][k]=s[j];
            k++;
        }
        strcpy(ban[i],ans[i]);
        k=0;
    }
        
         for (i = 0; i < strlen(s) - 1 ; i++)
        {
            for (j = i + 1; j < strlen(s); j++)
            {
                if (strcmp(ans[i], ans[j]) > 0) 
                {
                    strcpy(temp, ans[i]);
                    strcpy(ans[i], ans[j]);
                    strcpy(ans[j], temp);
                }
            }
        }
        for ( i = 0; i < strlen(s); i++) 
        {
         for(j=0;j<strlen(s);j++)
         {
             if(strcmp(ans[i], ban[j]) == 0)
             printf("%d\n",j);
         }
        }
    
}
    

