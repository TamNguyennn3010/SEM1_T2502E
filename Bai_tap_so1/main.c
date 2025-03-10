#include <stdio.h>
int main()
{
    int a = 0;
    printf("Nhap 1 so tu ban phim :");
    scanf("%d",&a);
    if( a%2==0 ){
        printf("Day la so chan");
    }
    else{
        printf("day la so le");
    }
    return 0;
}