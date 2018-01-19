#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    int p=0,t=0;
    char s[101];
    char *p1,*p2;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%s",&s);
        int p=0,t=0,a=0,pat=0;
        /* 对s进行遍历，记录PAT三个字母出现的次数，
        若出现其他字符直接结束测试 */
        for(j=0;s[j]!='\0';++j){
            if(s[j]=='P') ++p;
            else if(s[j]=='T') ++t;
            else if(s[j]=='A') ++a;
            else goto end1;

        }
        /* 当P和T都只有1个，A至少1个时，
        计算是否符合规律 */


        if(p==1&&t==1&&a!=0){
            p1=strchr(s,'P');
            p2=strchr(s,'T');
            if((p1-s)*(p2-p1-1)==strlen(p2)-1){
                pat=1;
            }
        }
        end1:

        if(pat) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
