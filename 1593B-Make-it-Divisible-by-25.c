#include<stdio.h>

int main(){

    unsigned int t, n;

    scanf("%u", &t);

    for (t; t>0; t--){


        scanf("%u", &n);

        unsigned int m, lastdigit, count = 0;

        while ((n%10)!=0 && (n%10)!=5){
            n/=10;
            count+=1;
        }

        
        lastdigit=n%10;
        
        while ((n%25)!=0){
            
            m=n/10;
            m=m/10;
            count+=1;
            
            n=(m*10)+lastdigit;
            
        }

        printf("%u\n",count);


    }

    return 0;
}