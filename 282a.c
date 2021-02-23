#include <stdio.h>
 
int main()
{
    int n,x=0,i;
    char c[5];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s",c);
        if(c[1]=='+')
            x++;
        else
            x--;
        
 
    }
    printf("%d",x);
 
}