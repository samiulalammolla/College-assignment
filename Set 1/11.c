#include <stdio.h>
#include <math.h>
double fi_n[101];
int main()
{
    fi_n[0] = 0;
    fi_n[1] = 1;
    fi_n[2] = 1;
    for (int a = 3; a <= 100; a++)
    {
        fi_n[a] = fi_n[a - 1] + fi_n[a - 2];
    }
    int x;
    scanf("%d", &x);
    double ans1 = fi_n[x];
    double ans2 = (1 / sqrt(5)) * pow((1 + sqrt(5)) / 2, x) - (1 / sqrt(5)) * pow((1 - sqrt(5)) / 2, x);
    printf("Actual Output : %f\n",ans1);
    printf("Formula Output : %f\n",ans2);
    printf("Difference : %e\n",ans2 - ans1);
    return 0;
}