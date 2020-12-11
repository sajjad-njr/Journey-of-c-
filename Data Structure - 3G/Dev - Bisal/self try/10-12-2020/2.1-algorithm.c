//find maximum value
#include<stdio.h>

int main()
{
    int DATA[5] = {67,89,999,554,32};
    int K , LOC = 0 ,  MAX = DATA[0];

    for(K = 0 ; K < 5 ; K++)
    {
        if(DATA[K] > MAX)
        {
             MAX = DATA[K];
             LOC = K;
        }
    }

    printf("\n\tThe maximum value is = %d and found the position = %d",MAX,LOC+1);
    return 0;
}
