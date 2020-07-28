#include <stdio.h>
int main()
{

    int i = 0 , resultArr[10] = {0};
    char buffer = 0;

    do
    {
        scanf("%c",&buffer);
        if ( buffer >= '0' && buffer <= '9' )
          ++resultArr[buffer-'0'];
    }
    while(buffer != '\n');


    for ( i = 0 ; i < 10 ; i++)
        printf("%d ",resultArr[i]);

    return 0;
}
