#include<stdio.h>
int main()
{
    char *A[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int  B[100]={};

    int i,j;
    int sum=0;
    int add=0;
    int t=0;
    //scanf("%d",&i);
    char str[100];
    gets(str);
    int len;
    len=strlen(str);
    for(i=0;i<len;i++)
   {
        sum+=str[i]-'0';
   }
   //printf("%d\n",sum);

/*    for(i;i!=0;i=i/10)
   {
        sum+=i%10;
    }
   printf("%d\n",sum);
*/
   add=sum;
   for(sum;sum!=0;sum=sum/10)
   {
       t++;
   }

   for(j=0;j<t;j++)
   {
       B[j]=add%10;
       add=add/10;
   }


  /*for(i=0;i<t;i++)
   {
    printf("%d",B[t-i-1]);
   }
  */
   for(i=0;i<t;i++)
   {
    printf("%s",A[B[t-i-1]]);
    if(i!=t-1)
        printf(" ");
   }

return 0;
}
