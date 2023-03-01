#include <stdio.h>

int main(){
    char a[]="AABBBCCCCddd";
    int len=sizeof(a);
    int count=1;
    for(int i=0;i<len;i++){
        if(a[i]==a[i+1]){
            count += 1;
        }
        else{
            printf("%c%d",a[i],count);
            count = 1;
        }
    }
}
