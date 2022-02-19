#include<stdio.h>
int main() {
    int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;

    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ; // pm and hours !=12 [24 format ]
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ; // [12] oclock format

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
