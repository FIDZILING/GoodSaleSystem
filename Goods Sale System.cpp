//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//������Ʒ�ṹ��
struct Goods{

char num[10];
char name[10];
int inp;
int outp;
int innum;
int outnum;
int remainingnum;

};

struct Goods goods[1000];
//��ʼ��



//�����Ʒ
int inputGoods(int k,int m){
    printf("----�����Ʒ----\n");
    printf("��������Ҫ��ӵ���Ʒ��Ϣ��\n");
    printf("��ܰ��ʾ:�벻Ҫ������Ʒ���Ϊ�յ���Ʒ\n");

    //�״�����
    if(m == 0){
        printf("��Ʒ���:\n");
        scanf("%s",goods[m].num);
        getchar();

        printf("��Ʒ����:\n");
        scanf("%s",goods[m].name);
        getchar();


        printf("��Ʒ����:\n");
        int a1;
        cin>>a1;
        goods[m].inp = a1;


        printf("��Ʒ�ۼ�:\n");
        int b1;
        cin>>b1;
        goods[m].outp = b1;


        printf("������:\n");
        int a;
        cin>>a;
        goods[m].innum = a;


        printf("������:\n");
        int b;
        cin>>b;
        goods[m].outnum = b;


        goods[m].remainingnum = goods[m].innum - goods[m].outnum;


     }

//���⴦����������ͬ������Ʒ���
    if(m > 0){
        printf("��Ʒ���:\n");
        char N[10] = {0};
        gets(N);
        int temp = 0;
        for(int i = 0;i < 1000;i++){

            for(int j = 0;j < 10;j++){
                if(N[j] == goods[i].num[j]){
                    temp += 1;
                }
                if(temp == 10){
                    break;
                }
                if(j == 9){
                    temp = 0;
                }
            }
        }
        if(temp != 10){
            for(int j = 0;j < 10;j++){
                goods[m].num[j] = N[j];
            }



            printf("��Ʒ���:\n");
            scanf("%s",goods[m].num);
            getchar();

            printf("��Ʒ����:\n");
            scanf("%s",goods[m].name);
            getchar();

        //    printf("%s\n",goods[m].name);

            printf("��Ʒ����:\n");
            int a1;
            cin>>a1;
            goods[m].inp = a1;
        //    printf("%s\n",goods[m].inp);

            printf("��Ʒ�ۼ�:\n");
            int b1;
            cin>>b1;
            goods[m].outp = b1;
        //    printf("%s\n",goods[m].outp);

            printf("������:\n");
            int a;
            cin>>a;
            goods[m].innum = a;
        //    printf("%d\n",goods[m].innum);

            printf("������:\n");
            int b;
            cin>>b;
            goods[m].outnum = b;
        //    printf("%d\n",goods[m].outnum);

            goods[m].remainingnum = goods[m].innum - goods[m].outnum;

        //    printf("%d\n",goods[m].remainingnum);
        }

        if(temp == 10){
            printf("�����ظ���ţ�");
        }
    }


//    printf("��Ʒ���:\n");
////    gets(goods[m].num);
//    scanf("%s",goods[m].num);
//    getchar();
//
//    printf("��Ʒ����:\n");
////    gets(goods[m].name);
//    scanf("%s",goods[m].name);
//    getchar();
//
//    printf("��Ʒ����:\n");
//    int a1;
////    cin>>a1;
//    scanf("%d",&a1);
//    goods[m].inp = a1;
//
//
//    printf("��Ʒ�ۼ�:\n");
//    int b1;
////    cin>>b1;
//    scanf("%d",&b1);
//    goods[m].outp = b1;
//
//    printf("������:\n");
//    int a;
////    cin>>a;
//    scanf("%d",&a);
//    goods[m].innum = a;
//
//
//    printf("������:\n");
//    int b;
////    cin>>b;
//    scanf("%d",&b);
//    goods[m].outnum = b;
//
//
//    goods[m].remainingnum = goods[m].innum - goods[m].outnum;


//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----�Ƿ������ӣ�----\n");
        printf("1.�ǵ�\n");
        printf("2.����\n");
        int c;
//        cin>>c;
        scanf("%d",&c);
        getchar();
        if(c == 1){

            k = 1;
            l = 0;
        }
        else if(c == 2){
            k = 0;
            l = 0;
        }
        else
            printf("����������\n");

    }



    return k;
}


//ɾ����Ʒ
int delGoods(int k){
    printf("----ɾ����Ʒ----\n");
    printf("��������Ҫɾ������Ʒ���:\n");
    char a[10] = {0};
    gets(a);
    for(int i = 0;i < 1000;i++){
        int temp = 1;
        for(int j = 0;j < 10;j++){

            if(goods[i].num[j] != a[j]){
                temp = 0;break;
            }
        }
        if(temp == 0&&i == 999){
//            cout<<"û�ҵ�����"<<endl;
            printf("û�ҵ�����");
        }
        if(temp == 1){
            for(int j = 0;j < 10;j++){
                goods[i].num[j] = 0;
                goods[i].name[j] = 0;

            }
            goods[i].inp = 0;
            goods[i].outp = 0;
            goods[i].innum = 0;
            goods[i].outnum = 0;
            goods[i].remainingnum = 0;
//            cout<<"ɾ���ɹ�!"<<endl;
            printf("ɾ���ɹ�!");
            break;
        }

    }

//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----�Ƿ����ɾ����----\n");
        printf("1.�ǵ�\n");
        printf("2.����\n");
        int c;
//        cin>>c;
        scanf("%d",&c);
        getchar();
        if(c == 1){

            k = 1;
            l = 0;
        }
        else if(c == 2){
            k = 0;
            l = 0;
        }
        else
            printf("����������\n");

    }



    return k;

}



//ͳ���������
int sales(int k){
    printf("----ͳ���������----\n");
    printf("��ӯ��:\n");
    int maxn = 0;
    for(int i = 0;i < 1000;i++){
        int temp = 1;
        for(int j = 0;j < 10;j++){
            if(goods[i].num[j] != 0){
                temp = 0;
            }
        }

        if(temp == 0){
            maxn += (goods[i].outp-goods[i].inp)*goods[i].outnum;

        }
    }
//    cout<<maxn<<endl;

    printf("%d",maxn);
    printf("\n");
    printf("ʣ����Ʒͳ��:\n");
    printf("��Ʒ���\t");
    printf("��Ʒ����\t");
    printf("ʣ������\n");
    for(int i = 0;i < 1000;i++){
        int temp = 1;
        for(int j = 0;j < 10;j++){
            if(goods[i].num[j] != 0){
                temp = 0;
            }
        }

        if(temp == 0){

            printf("\t%s\t\t",goods[i].num);
            printf("%s\t\t",goods[i].name);
            printf("%d\n",goods[i].remainingnum);
        }
    }

//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----�Ƿ��˳���----\n");
        printf("1.�ǵ�\n");
        printf("2.����\n");
        int c;
//        cin>>c;
        scanf("%d",&c);
        getchar();
        if(c == 1){

            k = 0;
            l = 0;
        }
        else if(c == 2){
            k = 1;
            l = 0;
        }
        else
            printf("����������\n");

    }



    return k;

}







//��ѯ��Ʒ��Ϣ
int searchGood(int k){
    printf("----��ѯ��Ʒ��Ϣ----\n");
    printf("��������Ҫ��ѯ����Ʒ���:\n");
    char a[10] = {0};
    gets(a);
    for(int i = 0;i < 1000;i++){
        int temp = 1;
        for(int j = 0;j < 10;j++){

            if(goods[i].num[j] != a[j]){
                temp = 0;break;
            }
        }
        if(temp == 0&&i == 999){
//            cout<<"û�ҵ�����"<<endl;
            printf("û�ҵ�����");
        }
        if(temp == 1){
            printf("��Ʒ���\t");
            printf("��Ʒ����\t");
            printf("��Ʒ����\t");
            printf("��Ʒ�ۼ�\t");
            printf("������\t\t");
            printf("������\t\t");
            printf("ʣ������\n");
            printf("\t%s\t\t",goods[i].num);
            printf("%s\t\t",goods[i].name);
            printf("%d\t\t",goods[i].inp);
            printf("%d\t\t",goods[i].outp);
            printf("%d\t\t",goods[i].innum);
            printf("%d\t\t",goods[i].outnum);
            printf("%d\n",goods[i].remainingnum);

            break;
        }

    }

//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----�Ƿ�������ң�----\n");
        printf("1.�ǵ�\n");
        printf("2.����\n");
        int c;
//        cin>>c;
        scanf("%d",&c);
        getchar();
        if(c == 1){

            k = 1;
            l = 0;
        }
        else if(c == 2){
            k = 0;
            l = 0;
        }
        else
            printf("����������\n");

    }



    return k;




}





//��ʾ������Ʒ��Ϣ
int showGoods(int k){
    printf("----��ʾ������Ʒ��Ϣ----\n");
    printf("��Ʒ���\t");
    printf("��Ʒ����\t");
    printf("��Ʒ����\t");
    printf("��Ʒ�ۼ�\t");
    printf("������\t\t");
    printf("������\t\t");
    printf("ʣ������\n");
    for(int i = 0;i < 1000;i++){
        int temp = 1;
        for(int j = 0;j < 10;j++){
            if(goods[i].num[j] != 0){
                temp = 0;
            }
        }

        if(temp == 0){

            printf("%s\t\t",goods[i].num);
            printf("%s\t\t",goods[i].name);
            printf("%d\t\t",goods[i].inp);
            printf("%d\t\t",goods[i].outp);
            printf("%d\t\t",goods[i].innum);
            printf("%d\t\t",goods[i].outnum);
            printf("%d\n",goods[i].remainingnum);
        }
    }

//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----�Ƿ��˳���----\n");
        printf("1.�ǵ�\n");
        printf("2.����\n");
        int c;
//        cin>>c;
        scanf("%d",&c);
        getchar();
        if(c == 1){

            k = 0;
            l = 0;
        }
        else if(c == 2){
            k = 1;
            l = 0;
        }
        else
            printf("����������\n");

    }



    return k;

}



//����
int others(int k){

//    cout<<"-----------------------------------------------------"<<endl;
    printf("-----------------------------------------------------");
    printf("\n");

//    cout<<"����ʵ�����ɻ������ܵ�ʵ�֣����ܻ���Сbug���������"<<endl;
    printf("����ʵ�����ɻ������ܵ�ʵ�֣����ܻ���Сbug���������");
    printf("\n");
//    cout<<"----��Ȩ���У������----"<<endl;
    printf("----��Ȩ���У������----");
    printf("\n");

//    cout<<"-----------------------------------------------------"<<endl;
    printf("-----------------------------------------------------");
    printf("\n");
//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----�Ƿ��˳���----\n");
        printf("1.�ǵ�\n");
        printf("2.����\n");
        int c;
//        cin>>c;
        scanf("%d",&c);
        getchar();
        if(c == 1){

            k = 0;
            l = 0;
        }
        else if(c == 2){
            k = 1;
            l = 0;
        }
        else
            printf("����������\n");

    }

    return k;

}



//������
int main(){

    for(int i = 0;i < 1000;i++){
        for(int j = 0;j < 10;j++){


            goods[i].num[j] = 0;
            goods[i].name[j] = 0;
        }
        goods[i].inp = 0;
        goods[i].outp = 0;
        goods[i].innum = 0;
        goods[i].outnum = 0;
        goods[i].remainingnum = 0;
    }

    int l = 1;
    int m = 0;
    while(l){
        printf("----��ӭ������Ʒ����ϵͳ-----\n");
        printf("1.�����Ʒ\n");
        printf("2.ɾ����Ʒ\n");
        printf("3.ͳ���������\n");
        printf("4.��ѯ��Ʒ��Ϣ\n");
        printf("5.��ʾ������Ʒ��Ϣ\n");
        printf("6.�˳�ϵͳ\n");
        printf("7.����\n");
//        cout<<endl;
        printf("\n");

        int n,k = 1;

//        cin>>n;
        scanf("%d",&n);
        getchar();
        while(k){
            if(n>0&&n<8){
                switch(n){
                case 1:k = inputGoods(k,m);m++;printf("\n");break;
                case 2:k = delGoods(k);printf("\n");break;
                case 3:k = sales(k);printf("\n");break;
                case 4:k = searchGood(k);printf("\n");break;
                case 5:k = showGoods(k);printf("\n");break;
                case 6:l = 0;k = 0;break;
                case 7:k = others(k);printf("\n");break;


                }
            }
            else{
//                cout<<"��������������������"<<endl;
                printf("��������������������");
                k = 0;
            }
        }



    }
return 0;
}
