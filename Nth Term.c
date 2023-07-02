/*
*By:- Ali Ashraf
*aliashrafali0155239@gmail.com
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//int term=0;
int find_nth_term(int n, int a, int b, int c) {
    return (n<=3) ? ((n==1) ? a : ((n==2) ? b : c)) : find_nth_term(n-1,b,c,a+b+c);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}