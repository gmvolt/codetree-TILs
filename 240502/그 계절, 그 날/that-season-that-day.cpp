#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);
    if((m==4 || m==6 || m==9 || m==11) && d>=31)
        printf("-1");
    else if(m>=3 && m<=5)
        printf("Spring");
    else if(m>=6 && m<=8)
        printf("Summer");
    else if(m>=9 && m<=11)
        printf("Fall");
    else if(m>=12 && m<=1)
        printf("Winter");
    else if(m==2 && d<=28){
        printf("Winter");
    }
    else if(y%4==0 && m==2 && d==29){
        if(y%100!=0 && y%400==0)
            printf("Winter");
        else
            printf("-1");
    }
    else
        printf("-1");
    return 0;
}