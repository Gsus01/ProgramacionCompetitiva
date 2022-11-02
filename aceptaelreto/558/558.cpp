#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void toLowerCase(char *a, char *res)
{
    for (size_t i = 0; i < strlen(a); i++)
    {
        res[i] = tolower(a[i]);
    }
}
void keepUpperCase(const char *a, char *b)
{
    
    for (size_t i = 0; i < strlen(a); i++)
    {
        b[i] = a[i] < b[i] ? a[i] : b[i];
    }
}

int main()
{
    int N;
    char variable[51];

    while (scanf("%d", &N) != EOF)
    {

        string palabras[N];
        unordered_map<string, string> m;
        for (int i = 0; i < N; i++)
        {
            scanf("%s", variable);
            char aux[51] = {0};
            toLowerCase(variable, aux);
            string auxS = string(aux);
            // printf("-> %s\n", aux);
            string clave = string(aux);

            palabras[i] = clave;

            if (m.find(clave) != m.end())
            {
                keepUpperCase(m[clave].c_str(), variable);
            }
            m[clave] = string(variable);
            

            // for (auto const &pair : m)
            // {
            //     std::cout << "{" << pair.first << ": " << pair.second << "}\n";
            // }
            // cout << endl;

            // for (int j = 0; j < (int) strlen(variable); j++) {
            //     if (!isupper(res[j]) && isupper(variable[j])) {
            //         res[j] = variable[j];
            //     }
            // }
            // printf("%s\n", variable);
        }

        for (int i = 0; i< N; i++) {
            printf("%s\n", m[palabras[i]].c_str());
        }

        printf("---\n");
    }

    return 0;
}