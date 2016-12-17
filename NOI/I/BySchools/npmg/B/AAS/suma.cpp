#include <cstdio>

int main(int argc, char** argv)
{
    int n, i, sum_left=0, sum_right=0, count_max=0;
    scanf("%d", &n); // PRODUCTION

    /**n=9;
    int a[] = {1,1,2,3,10,9,9,6,1};
    works */ // DEBUG

    /**n=5;
    int a[]={1,2,3,4,5};
    works */ // DEBUG

    int a[10];
    for(i=0; i<n; ++i) scanf("%d", &a[i]);

    /*for(int i=0; i<10; ++i) {a[i]=(rand()%8)+1; printf("%d ", a[i]);}
    printf("\n"); //random generator*/

    int left = 0;
    int right = n-1;

    sum_left=a[left];
    sum_right=a[right];

    while(left<right)
    {
        //printf("\t%d %d; %d %d\n", left, right, sum_left, sum_right); // DEBUG
        if(sum_left<sum_right)
        {
            sum_left+=(a[++left]);
            continue;
        }

        if(sum_left>sum_right)
        {
            sum_right+=(a[--right]);
            continue;
        }

        count_max=(n-right+left+1);
        sum_left+=a[++left];
    }

    printf("%d\n", count_max);
    return 0;
}
