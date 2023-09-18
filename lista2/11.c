#include <stdio.h>

#define MAX 1000

int main() {
    int N, Xi, Xf, Yi, Yf;
    int i, j;
    int area = 0;
    int mar[MAX][MAX] = {0};

    scanf("%d", &N);

    for (int n = 0; n < N; n++) {
        scanf("%d %d %d %d", &Xi, &Xf, &Yi, &Yf);
        for (i = Xi; i < Xf; i++) {
            for (j = Yi; j < Yf; j++) {
                if (mar[i][j] == 0) {
                    mar[i][j] = 1;
                    area++;
                }
            }
        }
    }

    printf("%d\n", area);

    return 0;
}
