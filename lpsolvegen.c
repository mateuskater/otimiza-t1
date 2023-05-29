#include <stdio.h>

int main(){
    int n;
    int m;
    printf("Insira a quantidade de produtos e compostos\n");
    scanf("%d %d\n", &n, &m);
    int v[n];
    for (int i = 0; i < n; i++){
        scanf("%d ", &v[i]);
    }
    int p[m];
    int q[m];
    for (int j = 0; j < m; j++){
        scanf("%d %d\n", &p[j], &q[j]);
    }
    int c[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d ", &c[i][j]);
        }
    }
    
}