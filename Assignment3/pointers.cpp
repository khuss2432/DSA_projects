
#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
   
   int sum= *a;
   *a =*a+*b;
   *b=sum-*b;
   if(*b<0){
       *b=-*b;
   }
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
