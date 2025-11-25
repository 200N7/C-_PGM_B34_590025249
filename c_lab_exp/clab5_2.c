

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of values\n");
    scanf("%d",&n);
    int num[n],h;
    int c=0;
    for(i=0;i<n;i++){
        printf("Enter values %d ",i+1);
        scanf("%d",&num[i]);
        num[i]=h;
            if(num[i]==num[i+1]){
                
                printf("%d",num[i]);
            }
        }
//printf("%d",c);
    return 0;
}