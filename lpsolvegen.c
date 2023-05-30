#include <stdio.h>

int main(){
    int n;
    int m;
    // printf("Insira a quantidade de produtos e compostos\n");
    scanf("%d %d\n", &n, &m);
    float v[n];
    for (int i = 0; i < n; i++){
        scanf("%f ", &v[i]);
    };
    float p[m];
    int q[m];
    float custo;
    float lucro;
    for (int j = 0; j < m; j++){
        scanf("%f %d\n", &p[j], &q[j]);
    };
    float c[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%f ", &c[i][j]);
        };
    };
    
    printf("max: ");
    for (int i = 0; i < n; i++){
        custo = 0;
        for (int j = 0; j < m; j++){
            custo = custo + (p[j]*c[i][j]);
        };
        lucro = v[i] - custo;
        printf("%.1fx%d", lucro, i+1);
        if (i < n - 1){
            printf(" + ");
        };
    };
    printf(";\n\n");
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            printf("%.1fx%d", c[i][j], i+1);

            if (i < n - 1){
                printf(" + ");
            }else{
                printf(" <= %d;\n", q[j]);
            };
        };
    };

    for (int i = 0; i < n; i++){
        printf("x%d >= 0;\n", i+1);
    };
}