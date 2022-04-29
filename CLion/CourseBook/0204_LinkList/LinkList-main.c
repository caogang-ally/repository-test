#include <stdio.h>
#include "Status.h"
#include "LinkList.h"                        //**��02 ���Ա�**//

// �ж�data>e�Ƿ����
Status CmpGreater(ElemType data, ElemType e) {
    return data > e ? TRUE : FALSE;
}

// ���Ժ�������ӡԪ��
void PrintElem(ElemType e) {
    printf("--%d\n ", e);
}


int main(int argc, char** argv) {
    LinkList L;
    printf("Create LinkList Pointer L=%p  &L=%p\n",L,&L);
    int i;
    ElemType e;
    
    printf("���������������� InitList \n");
    {
        printf("�� ��ʼ�������� L ...\n");
        InitList(&L);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� ListEmpty \n");
    {
        ListEmpty(L) ? printf("�� L Ϊ�գ���\n") : printf("�� L ��Ϊ�գ�\n");
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� ListInsert \n");
    {
        for(i = 1; i <= 8; i++) {
            printf("�� �� L �� %d ��λ�ò��� \"%d\" ...\n", i, 2 * i);
            ListInsert(L, i, 2 * i);
        }
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� ListTraverse \n");
    {
        printf("�� L �е�Ԫ��Ϊ��L = ");
        ListTraverse(L, PrintElem);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� ListLength \n");
    {
        printf("�� L �ĳ���Ϊ %d \n", ListLength(L));
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� ListDelete \n");
    {
        printf("�� ɾ��ǰ��Ԫ�أ�L = ");
        ListTraverse(L, PrintElem);
    
        printf("�� ����ɾ�� L �е� 6 ��Ԫ��...\n");
    
        if(ListDelete(L, 6, &e) == OK) {
            printf("�� ɾ���ɹ�����ɾ��Ԫ���ǣ�\"%d\"\n", e);
        } else {
            printf("�� ɾ��ʧ�ܣ��� 6 ��Ԫ�ز����ڣ�\n");
        }
    
        printf("�� ɾ�����Ԫ�أ�L = ");
        ListTraverse(L, PrintElem);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� GetElem \n");
    {
        GetElem(L, 4, &e);
        printf("�� L �е� 4 ��λ�õ�Ԫ��Ϊ \"%d\" \n", e);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� LocateElem \n");
    {
        i = LocateElem(L, 7, CmpGreater);
        GetElem(L, i, &e);
        printf("�� L �е�һ��Ԫ��ֵ���� \"7\" ��Ԫ���� \"%d\" \n", e);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� PriorElem \n");
    {
        ElemType cur_e = 6;
    
        if(PriorElem(L, cur_e, &e) == OK) {
            printf("�� Ԫ�� \"%d\" ��ǰ��Ϊ \"%d\" \n", cur_e, e);
        } else {
            printf("�� Ԫ�� \"%d\" ��ǰ�������ڣ�\n", cur_e);
        }
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� NextElem \n");
    {
        ElemType cur_e = 6;
    
        if(NextElem(L, cur_e, &e) == OK) {
            printf("�� Ԫ�� \"%d\" �ĺ��Ϊ \"%d\" \n", cur_e, e);
        } else {
            printf("�� Ԫ�� \"%d\" �ĺ�̲����ڣ�\n", cur_e);
        }
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� ClearList \n");
    {
        printf("�� ��� L ǰ��");
        ListEmpty(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");
        
        ClearList(L);
        
        printf("�� ��� L ��");
        ListEmpty(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� DestroyList \n");
    {
        printf("�� ���� L ǰ��");
        L ? printf(" L ���ڣ�\n") : printf(" L �����ڣ���\n");
        
        DestroyList(&L);
        
        printf("�� ���� L ��");
        L ? printf(" L ���ڣ�\n") : printf(" L �����ڣ���\n");
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� CreateList_Head \n");
    {
        LinkList L;
        CreateList_Head(&L, 5, "TestData_Head.txt");
        printf("�� ͷ�巨���������� L = ");
        ListTraverse(L, PrintElem);
    }
    PressEnterToContinue(debug);
    
    
    printf("���������������� CreateList_Tail \n");
    {
        LinkList L;
        CreateList_Tail(&L, 5, "TestData_Tail.txt");
        printf("�� β�巨���������� L = ");
        ListTraverse(L, PrintElem);
    }
    PressEnterToContinue(debug);
    
    return 0;
}
