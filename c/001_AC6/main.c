#include <stdio.h>
int prime(int num){
    int j=num-1;
    while(j>1){
        if(num%j==0){
            return 0;
        }
        j--;
    }
    return 1;
}
int main(){
    int n=0,l1=2,l2=1;
    printf("How many Lucas Primes de you want? ");
    scanf("%d",&n);
    for(int i=0,t=0;n>0;i++){
        if(i==0){
            printf(" %d ",l1);
            n--;
        }else{
            if(i>1){
                if(t==0){
                    t=1;
                    l1=l1+l2;
                    if(prime(l1)!=0){
                        printf(" %d ",l1);
                        n--;
                    }
                }else{
                    if(t==1){
                        t=0;
                        l2=l1+l2;
                        if(prime(l2)!=0){
                            printf(" %d ",l2);
                            n--;
                        }
                    }
                }
            }
        }
    }
    return 0;
}