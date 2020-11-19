/* 
moneyBook Program
moneyWrite()
moneyRead()
moneyPlan()
download()

struct write {
    char *category[] //traffic, food, etc
    char date
    int money
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int sum = 0;

struct moneyBook
{
    /* data */
    char * category[10];
    char date;
    int money;
};

int option() {
    int opt;

    printf("===== input option =====\n");
    printf("1. write\n");
    printf("2. read\n");
    printf("3. plan\n");

    scanf("%d", &opt);
    return opt;
}

void moneyWrite() {
    // 11/19 entertain 1000
    // 11/20 tax 5000
    // moneyBook
    FILE *wfp;
    int c;

    char str[50];
    char *a[3];

    int i = 0;

    printf("===== CATEGORY =====\n");
    printf("entertain     tax\n");

    printf("input your money spend\n");
    scanf("%s", str);
    a[0] = strtok(str, " ");
    a[1] = strtok(NULL, " ");
    a[2] = strtok(NULL, " ");
    sum = atoi(a[2]);

    //FILE* write

    if((wfp = fopen("moneyWrite.txt", "a")) == NULL) {
        perror("fopen");
        exit(1);
    }

    fputs(str, wfp);
}

void moneyRead() {
    // FILE *
    // print_total_spend()
    // advice()
}

void moneyPlan() {
    // write my plan
}



void download() {
    // download moneyRead
    // download moneyPlan
}

int main(void) {
    int opt;

    opt = option();

    switch(opt) {
        case 1:
            moneyWrite();
            break;
        case 2:
            moneyRead();
            break;
        case 3:
            moneyPlan();
            break;
        case 4:
            download();
            break;
    }


}