#include<stdio.h>
int main(){
    int i,n,f1,f2,f3,c=0,t=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d %d",&f1,&f2,&f3);
        t=f1+f2+f3;
        if (t>=2)
            c+=1;
        t=0;
    }
    printf("%d",c);
    return 0;
}
