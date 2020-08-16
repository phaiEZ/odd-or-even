#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

int x, i, num;
int y[1000];

int check_ood(int num) {
    if (num % 2 == 1) {
        return(1);
    }
    else {
        return(0);
    }
}

int main() {
    cin >> x;

    for (i = 0; i < x; i++)
    {
        cin >> y[i];
    }

    for (i = 0; i < x; i++) {
        if (check_ood(y[i]) == 1) {
            printf("[x]");
        }

        else {
            printf("[ ]");
        }

        printf("%d", y[i]);
        printf(" ");
        printf("\n");
    }
    return(0);
}