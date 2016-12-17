#include <cstdio>
#include <cstdlib>

int abs(int a)
{
    return a>0?a:-a;
}

void swap(int& a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int min(int a, int b)
{
    return a<b?a:b;
}

int main(int argc, char** argv)
{
    int alx, aly, arx, ary;
    int blx, bly, brx, bry;
    int ia, ib;

    scanf("%d %d %d %d", &alx, &aly, &arx, &ary);
    scanf("%d %d %d %d", &blx, &bly, &brx, &bry);

    bool horisontal_a = (aly == ary), horisontal_b = (bly==bry);

    if(horisontal_a)
    {
        if(alx>arx)
        {
            swap(alx, arx);
            swap(aly, ary);
        }
    }
    else if(aly<ary)
    {
        swap(aly, ary);
        swap(alx, arx);
    }

    if(horisontal_b)
    {
        if(blx>brx)
        {
            swap(blx, brx);
            swap(bly, bry);
        }
    }
    else if(bly<bry)
    {
        swap(bly, bry);
        swap(blx, brx);
    }

    if(horisontal_a!=horisontal_b)
    {

        if(horisontal_a)
        {
            ia=(blx > alx && brx < arx)?0:min(abs(blx - alx), abs(brx - arx));
            ib=(ary > bry && aly < bly)?0:min(abs(aly - bly), abs(ary - bry));
        }
        else
        {
            ib=(alx > blx && arx < brx)?0:min(abs(alx - blx), abs(arx - brx));
            ia=(bry > ary && bly < aly)?0:min(abs(bly - aly), abs(bry - ary));
        }
    }
    else
    {
        if(horisontal_a) {
            if(alx>blx) {
                swap(alx, blx);
                swap(aly, bly);
            }

            if(arx>blx) {
                ia = abs(arx-blx);
                ib = abs(bly-aly);
            }
        }

        if(!horisontal_a) {
            if(aly<bly) {
                swap(alx, blx);
                swap(aly, bly);
            }

            if(ary<bly) {
                ia = abs(aly-bry);
                ib = abs(blx-alx);
            }
        }
    }
    printf("%d\n", ia+ib);
}
