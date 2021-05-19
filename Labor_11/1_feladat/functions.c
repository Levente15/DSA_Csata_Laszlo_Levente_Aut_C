//
// Created by Legion on 5/12/2021.
//

#include "functions.h"
#include <stdlib.h>
#include "stdio.h"

Money *creatMoney() {
    Money *money = (Money *) malloc(sizeof(Money));

    if (!money) {
        printf("Error#1");
        return NULL;
    }
    money->year = 0;
    money->month = 0;
    money->forint = 0;
    money->peni = 0;

    return money;

}

bool compare(Money *m1, Money *m2) {
    if (m1->forint > m2->forint)
        return true;
    else if (m1->forint < m2->forint)
        return false;

    if (m1->peni > m2->peni)
        return true;
    else if (m1->peni < m2->peni)
        return false;

    return false;
}

