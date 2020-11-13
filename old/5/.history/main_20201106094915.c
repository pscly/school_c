#include <stdio.h>

void main() {

    int num_1, num_2;

    printf(">>>:");
    scanf("%d", &num_1);
    int n_shuang_l1[num_1 / 2];
    if (num_1 % 2) {
        num_2 = num_1 / 2 + 1;
    } else{
        num_2 = num_1 / 2 + 1;
    }
    int n_dan_l1[num_2 + 1];



    int dan = 0, shuang = 0;
    for (int i = 1; i < num_1 + 1; ++i) {
        if (i % 2) {
//            todo 单数
            n_dan_l1[dan] = i;
            dan += 1;
        } else {
//            todo 双数
            n_shuang_l1[shuang] = i;
            shuang += 1;
        }
        printf("");
    }


    printf("单数");
    for (int i = 0; i < num_2; ++i) {
        printf("%d, ", n_dan_l1[i]);
    }
    printf("\n");
    printf("双数");
    for (int i = 0; i < num_1 / 2 + 1; ++i) {
        printf("%d, ", n_shuang_l1[i]);
    }

}

