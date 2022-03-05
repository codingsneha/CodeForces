#include<stdio.h>
int main(){

    int t;
    int n;
    char s[100];

    scanf("%d",&t);

    for(t; t>0; t--){

        scanf("%d",&n);
        scanf("%s",&s);

        if ( n>2 || ( s[0] == '1' && s[1] == '1') || ( s[0] == '0' && s[1] == '0' ))
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    return 0;
}