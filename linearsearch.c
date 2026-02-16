#include<stdio.h>
void main(){
    int i, n, target, flag = 0;
    scanf("%d", &n);
    int A[n];
    
    
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);  
    }
    
    
    scanf("%d", &target); 
    
    
    for(i=0; i<n; i++){
        if(target == A[i]){
            printf("found at position %d\n", i);
            flag = 1;
            break;
        }
    }
    
    if(flag == 0){
        printf("%d not found\n", target);  
    }
}
