#include <stdio.h>
#include "SqList.h"
#include "MergeSqList.h"                //**?02 ???**//

// ?????????
void PrintElem(ElemType e) {
    printf("--%d ", e);
}


int main(int argc, char** argv) {
    ElemType a[4] = {3, 5, 8, 11};
    ElemType b[7] = {2, 6, 8, 9, 11, 15, 20};
    
    SqList La, Lb, Lc1, Lc2;

    printf("??????????&La=%p\n",&La);
    printf("??????????&Lb=%p\n",&Lb);
    printf("??????????&Lc1=%p\n",&Lc1);
    printf("??????????&Lc2=%p\n",&Lc2);


    int i;
    
    // ???La
    InitList(&La);
    for(i = 1; i <= 4; i++) {
        ListInsert(&La, i, a[i - 1]);
    }
    
    // ???Lb
    InitList(&Lb);
    for(i = 1; i <= 7; i++) {
        ListInsert(&Lb, i, b[i - 1]);
    }
    
    // ??La
    printf("La = ");
    ListTraverse(La, PrintElem);
    
    // ??Lb
    printf("Lb = ");
    ListTraverse(Lb, PrintElem);
    
    // ?????La?Lb???2.2
    MergeSqList_1(La, Lb, &Lc1);
    printf("??La?Lb?Lc1 = ");
    ListTraverse(Lc1, PrintElem);
    
    // ?????La?Lb???2.7
    MergeSqList_2(La, Lb, &Lc2);
    printf("??La?Lb?Lc2 = ");
    ListTraverse(Lc2, PrintElem);
    
    return 0;
}
