#include<stdio.h>

int main(){
    
    int t;
    int n;
    unsigned int a[n+1];
    unsigned int b[n+1];
    unsigned int maxa=a[0];
    unsigned int maxb=b[0];
    unsigned int temp;

    //input number of test case
    scanf("%d",&t);
    //input number of elements
    scanf("%d",&n);

    for ( t ; t>0 ; t--){
            
        //input elements of first array
        for ( int i=0 ; i<n ; i++ ){
            scanf("%u",&a[i]);
        }

        //input elements of second array
        for ( int j=0 ; j<n ; j++ ){
            scanf("%u",&b[j]);
        }

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