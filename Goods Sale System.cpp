//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//定义商品结构体
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
//初始化



//添加商品
int inputGoods(int k,int m){
    printf("----添加商品----\n");
    printf("请输入你要添加的商品信息：\n");
    printf("温馨提示:请不要输入商品编号为空的商品\n");

    //首次输入
    if(m == 0){
        printf("商品编号:\n");
        scanf("%s",goods[m].num);
        getchar();

        printf("商品名称:\n");
        scanf("%s",goods[m].name);
        getchar();


        printf("商品进价:\n");
        int a1;
        cin>>a1;
        goods[m].inp = a1;


        printf("商品售价:\n");
        int b1;
        cin>>b1;
        goods[m].outp = b1;


        printf("进货量:\n");
        int a;
        cin>>a;
        goods[m].innum = a;


        printf("销售量:\n");
        int b;
        cin>>b;
        goods[m].outnum = b;


        goods[m].remainingnum = goods[m].innum - goods[m].outnum;


     }

//特殊处理：不能输入同样的商品编号
    if(m > 0){
        printf("商品编号:\n");
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



            printf("商品编号:\n");
            scanf("%s",goods[m].num);
            getchar();

            printf("商品名称:\n");
            scanf("%s",goods[m].name);
            getchar();

        //    printf("%s\n",goods[m].name);

            printf("商品进价:\n");
            int a1;
            cin>>a1;
            goods[m].inp = a1;
        //    printf("%s\n",goods[m].inp);

            printf("商品售价:\n");
            int b1;
            cin>>b1;
            goods[m].outp = b1;
        //    printf("%s\n",goods[m].outp);

            printf("进货量:\n");
            int a;
            cin>>a;
            goods[m].innum = a;
        //    printf("%d\n",goods[m].innum);

            printf("销售量:\n");
            int b;
            cin>>b;
            goods[m].outnum = b;
        //    printf("%d\n",goods[m].outnum);

            goods[m].remainingnum = goods[m].innum - goods[m].outnum;

        //    printf("%d\n",goods[m].remainingnum);
        }

        if(temp == 10){
            printf("错误！重复编号！");
        }
    }


//    printf("商品编号:\n");
////    gets(goods[m].num);
//    scanf("%s",goods[m].num);
//    getchar();
//
//    printf("商品名称:\n");
////    gets(goods[m].name);
//    scanf("%s",goods[m].name);
//    getchar();
//
//    printf("商品进价:\n");
//    int a1;
////    cin>>a1;
//    scanf("%d",&a1);
//    goods[m].inp = a1;
//
//
//    printf("商品售价:\n");
//    int b1;
////    cin>>b1;
//    scanf("%d",&b1);
//    goods[m].outp = b1;
//
//    printf("进货量:\n");
//    int a;
////    cin>>a;
//    scanf("%d",&a);
//    goods[m].innum = a;
//
//
//    printf("销售量:\n");
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
        printf("----是否继续添加？----\n");
        printf("1.是的\n");
        printf("2.不是\n");
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
            printf("请重新输入\n");

    }



    return k;
}


//删除商品
int delGoods(int k){
    printf("----删除商品----\n");
    printf("请输入你要删除的商品编号:\n");
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
//            cout<<"没找到啊！"<<endl;
            printf("没找到啊！");
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
//            cout<<"删除成功!"<<endl;
            printf("删除成功!");
            break;
        }

    }

//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----是否继续删除？----\n");
        printf("1.是的\n");
        printf("2.不是\n");
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
            printf("请重新输入\n");

    }



    return k;

}



//统计销售情况
int sales(int k){
    printf("----统计销售情况----\n");
    printf("总盈利:\n");
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
    printf("剩余商品统计:\n");
    printf("商品编号\t");
    printf("商品名称\t");
    printf("剩余数量\n");
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
        printf("----是否退出？----\n");
        printf("1.是的\n");
        printf("2.不是\n");
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
            printf("请重新输入\n");

    }



    return k;

}







//查询商品信息
int searchGood(int k){
    printf("----查询商品信息----\n");
    printf("请输入你要查询的商品编号:\n");
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
//            cout<<"没找到啊！"<<endl;
            printf("没找到啊！");
        }
        if(temp == 1){
            printf("商品编号\t");
            printf("商品名称\t");
            printf("商品进价\t");
            printf("商品售价\t");
            printf("进货量\t\t");
            printf("销售量\t\t");
            printf("剩余数量\n");
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
        printf("----是否继续查找？----\n");
        printf("1.是的\n");
        printf("2.不是\n");
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
            printf("请重新输入\n");

    }



    return k;




}





//显示所有商品信息
int showGoods(int k){
    printf("----显示所有商品信息----\n");
    printf("商品编号\t");
    printf("商品名称\t");
    printf("商品进价\t");
    printf("商品售价\t");
    printf("进货量\t\t");
    printf("销售量\t\t");
    printf("剩余数量\n");
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
        printf("----是否退出？----\n");
        printf("1.是的\n");
        printf("2.不是\n");
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
            printf("请重新输入\n");

    }



    return k;

}



//关于
int others(int k){

//    cout<<"-----------------------------------------------------"<<endl;
    printf("-----------------------------------------------------");
    printf("\n");

//    cout<<"本次实验仅完成基本功能的实现，可能会有小bug，还需调试"<<endl;
    printf("本次实验仅完成基本功能的实现，可能会有小bug，还需调试");
    printf("\n");
//    cout<<"----版权所有：吴睿凌----"<<endl;
    printf("----版权所有：吴睿凌----");
    printf("\n");

//    cout<<"-----------------------------------------------------"<<endl;
    printf("-----------------------------------------------------");
    printf("\n");
//    cout<<endl;
    printf("\n");
    int l = 1;
    while(l){
        printf("----是否退出？----\n");
        printf("1.是的\n");
        printf("2.不是\n");
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
            printf("请重新输入\n");

    }

    return k;

}



//主函数
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
        printf("----欢迎进入商品管理系统-----\n");
        printf("1.添加商品\n");
        printf("2.删除商品\n");
        printf("3.统计销售情况\n");
        printf("4.查询商品信息\n");
        printf("5.显示所有商品信息\n");
        printf("6.退出系统\n");
        printf("7.关于\n");
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
//                cout<<"输入有误，请重新输入编号"<<endl;
                printf("输入有误，请重新输入编号");
                k = 0;
            }
        }



    }
return 0;
}
