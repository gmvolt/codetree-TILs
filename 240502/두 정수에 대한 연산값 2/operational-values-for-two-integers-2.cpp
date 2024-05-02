#include <iostream>
int small(int n){
    return n+10;
}
int big(int n){
    return n*2;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("%d %d",big(a),small(b));
    else
        printf("%d %d",small(a),big(b));
    return 0;
}