#include <iostream>
using namespace std;

//int lista[5000] = {0};
//int indice = 0;

struct cakita{
    int a;
    int max;
}

bool check(cakita info)
{
    bool sol = true;
    if (info.a < 0)
    {
        return true;
    }
    else
    {
        int i;
        scanf("%d", &i);
        // lista[indice++] = i;

        if (info.a <= i)
        {
            // printf("-> 1\n");
            check(i);
            sol = false;
        }
        else if (!check(i))
        {
            // printf("-> 2\n");
            sol = false;
        }

        int d;
        scanf("%d", &d);
        // lista[indice++] = d;

        if (d < 0)
        {
            return sol;
        }
        else
        {
            if (info.a >= d)
            {
                // printf("-> 3\n");
                check(d);

                sol = false;
            }
            else if (!check(d))
            {
                // printf("-> 4\n");
                sol = false;
            }
        }
        return sol;
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int x;
        scanf("%d", &x);
        // lista[indice++] = x;
        printf("%s\n", check(x) ? "SI" : "NO");

        /*
        for (int i = 0; i < indice; i++)
        {
            printf("%d, ", lista[i]);
        }
        printf("\n");
        indice = 0;*/
    }

    return 0;
}
