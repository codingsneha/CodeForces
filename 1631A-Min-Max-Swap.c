#include<stdio.h>

int main(){
    
    int t;
    int n;
    unsigned int a[200];
    unsigned int b[200];
    unsigned int maxa;
    unsigned int maxb;
    unsigned int temp;

    //input number of test case
    scanf("%d",&t);

    for ( t ; t>0 ; t--){
        
        //input number of elements
        scanf("%d",&n);

        //input elements of first array
        for ( int i=0 ; i<n ; i++ ){
            scanf("%u",&a[i]);
        }

        //input elements of second array
        for ( int j=0 ; j<n ; j++ ){
            scanf("%u",&b[j]);
        }

        maxa=a[0];
        maxb=b[0];

        //assuming global maximum is in b swap a & b elements
        for ( int k =0; k<n ; k++){
            if (a[k] > b[k]){
                temp=a[k];
                a[k]=b[k];
                b[k]=temp;
            }
            
        }

        //find maximum of first array
        for (int i = 0; i < n; i++){
            if (a[i]>maxa){
                maxa=a[i];
            }
        }
    
        //find maximum of second array
        for (int i = 0; i < n; i++){
            if (b[i]>maxb){
                maxb=b[i];
            }
        }

        printf("%u\n",maxa*maxb);
    }
    

    return 0;
}