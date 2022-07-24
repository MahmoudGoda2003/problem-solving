/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;                                          


int arr[5001],  a1[5001], a2[5001], a3[5001];

int min(int c1, int c2,int c3)
{
    if(c1<=c2 && c1<=c3)
    {
        return c1;
    }
    else if (c2<=c1 && c2<=c3)
    {
        return c2;
    }
    else
    {
        return c3;
    }
}

int main()
{
    int n, i;
    int count1 , count2, count3;
    int index1, index2, index3;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count1=count2=count3=0;
    index1=index2=index3=1;
    for(i=1; i<=n; i++)
    {
        if(arr[i]==1)
        {
            a1[index1++] = i;
            count1++;
        }
        if(arr[i]==2)
        {
            a2[index2++] = i;
            count2++;
        }
        if(arr[i]==3)
        {
            a3[index3++] = i;
            count3++;
        }
    }
    int team = min(count1, count2, count3);
    printf("%d\n", team);
    for(i=1; i<=team; i++)
    {
        printf("%d %d %d\n", a1[i], a2[i], a3[i]);
    }
    return 0;
}