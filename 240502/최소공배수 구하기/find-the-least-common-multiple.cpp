#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,temp,min;
    scanf("%d %d",&n,&m);
    if(n>m){
        temp = n;
        n=m;
        m=temp;
    }
    for(int i=n;i>=1;i--){
        if(n%i==0 && m%i==0){
            min = i;
            break;
        }
    }
    printf("%d",n*m/min);
    return 0;
}