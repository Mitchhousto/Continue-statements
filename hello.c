/* Hello World program */

#include<stdio.h>

main()
{
    int x;
        for(x = 0; x < 10; x++)
        if(x%2==0)
            continue;
            
    printf("%d is odd\n",x);

}
