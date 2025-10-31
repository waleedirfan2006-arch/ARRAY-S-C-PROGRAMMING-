#include <stdio.h>
int main()
{
    int a[3][3]={{19,29,3},{40,53,6},{7,8,97}};
    int sum=0;


sum+=a[0][0]+a[1][1]+a[2][2];

printf("Diagonal Sum= %d",sum);
}
// 19  29  3
// 40  53  6
// 7   8   97
// Diagonal Sum= 169
