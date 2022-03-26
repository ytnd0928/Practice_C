/*---------------------------------------------------
                名前と年齢を表示する
-----------------------------------------------------*/

#include <stdio.h>

int main(void)

{
    printf("my name is Taro. \n");      //名前の表示
    printf("i am 18 years old .\n");    //年齢の表示
}

/*---------------------------------------------------
                welcome....
                hello worldの出力
-----------------------------------------------------*/

#include <stdio.h>

int main(void)
{
    printf("Welcome to C programing ! \n");
    printf("Hello World \n");
}

/*---------------------------------------------------
                列挙型 enum 列挙型　{列挙子並び}
-----------------------------------------------------*/
enum house { chair, table=0, bed, window=10, door};

/*---------------------------------------------------
                例
-----------------------------------------------------*/

int score ;         //int型の変数scoreを宣言
unsigned char moji; //unsigned char型の変数mojiを宣言

enum house {chair, table=0,bed, window=10, door};   //
enum house myHouse; //enum house型の変数myHouseを宣言

/*---------------------------------------------------
                初期化
                型名　識別子 = 初期化子

                型名　識別子 = {初期化子}
-----------------------------------------------------*/

int score = 10;     //初期値は10
unsigned char moji = 0x41;  //初期値は0x41

enum house{chair, table=0, bed, window = 10, door };
enum house myHouse = door; //初期値は11

/*---------------------------------------------------
                年齢・性別・身長
-----------------------------------------------------*/

#include <stdio.h>
#define MAN 'M'  //男性を定義
#define WOMAN 'W' //女性を定義

int main(void)
{
    //変数の宣言
    int age =20 ; //年齢  int型→整数を格納する
    char sex = MAN;    //性別　char型→文字を扱う型
    double height = 177.5 ; //身長　double型→倍精度の浮動小数点(実数)を表す型

    //表示
    printf("年齢: %d歳\n性別:%c\n", age, sex);
    printf("性別: %fcm\n", height);
}

/*---------------------------------------------------
                配列の宣言　
                型指定子 配列名 [サイズ] = {初期値子並び}
-----------------------------------------------------*/

/*---------------------------------------------------
                配列の利用
                配列の宣言と表示
-----------------------------------------------------*/

#include <stdio.h>
#define NINZUU 5
#define KAMOKU 4

int main(void)
{
    int bango[NINZUU]={1001, 1002, 1003, 1004, 1005};//学生番号
    int ten[NINZUU][KAMOKU] = {
        {95, 83, 45, 56},
        {25, 36, 66, 48},
        {89, 80, 79, 90},
        {78, 64, 69, 62}, 
        {55, 89, 92, 51}
    };

    char seiseki[NINZUU]= {'B', 'C', 'A', 'B', 'B'}; //成績評価

    printf("No. kokugo sansu rika syakai hyouka\n")
    printf("%d %d %d %d %d %c\n",
    bango[0], ten[0[]0], ten[0[]1], ten[0[]2], )
}


/*---------------------------------------------------
                文字列の定義と初期化
-----------------------------------------------------*/


#include <stdio.h>

int main(void) 
{
    char name[] = "山田";
    char kamokuName[] [10] = {"国語", "数学", "英語"};

    //表示

    //文字列が1次元配列に格納されているときは%sに対応する識別子として配列全体を指定

    //%s→変換子指定→文字列を表示

    printf("氏名" : "%s\n", name);
    printf("%s\n", "科目1", kamokuName[0]);
    printf("%s\n", "科目2", kamokuName[1]);
    printf("%s\n", "科目3", kamokuName[2]);
}

//実行結果
//氏名：山田
//科目1:国語
//科目2:数学
//科目3:英語



/*---------------------------------------------------
                文字列とprintf関数の書式指定
-----------------------------------------------------*/

//printf関数では表示したい文字を""で囲っていたが、この部分をchar型配列に納め%sに対応させることも可能
#include <stdio.h>

int main (void)

{
    int age = 20;
    char form1[]="MynameIsTaro.\n"; //書式を配列に初期化
    char form2[] = "年齢:%d歳\n"; //書式を配列に初期化

    printf(form1)
    printf(form2,age)
}


/*---------------------------------------------------
             算術演算、オペランド
-----------------------------------------------------*/
#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 2;

    printf("%d + %d = %d\n" , x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    //小数点以下は切り捨てられる
}


/*---------------------------------------------------
             算術演算、型変換
-----------------------------------------------------*/


/*---------------------------------------------------
             異なった型の算術演算
-----------------------------------------------------*/
#include <stdio.h>

int main(void)
{
    int xi = 5;
    int yd = 2.0;

    printf("%d / %.0f = %.1f\n" , xi, yd, xi / yd);
}
//xiはdouble型に変換されて閣下もdouble方に変わる


/*---------------------------------------------------
             キャスト演算子
             (型名)オペランド
-----------------------------------------------------*/

int main(void )
{
    int i1 = 5 , i2 = 2;
    double x1 = 5.5 , x2 = 2.0;

    printf("&d / %d = %d\n", i1, i2, i1 / i2); //int型 / int型　→結果もint型  5 / 2 = 2
    printf("%d / %d = %f\n", i1, i2, (double)i1 / i2); // doduble型に変換　/ int型　→　double型　　5 / 2 = 2.5000
    printf("%f / %d = %d\n", x1, i2, (int)x1 / i2); // int型に変換　/ int型　→　int型　　5.5000 / 2 = 2

    //演算の結果をint型にキャスト
    printf("%f / %d = %d\n", x1, i2, (int)(x1 / i2)); //double型 /　int型　→　結果をin型に変換　　　5.50000 / 2 = 2
}

/*---------------------------------------------------
             確認

             定食メニューを一覧表示する。3種類　名前、定価、カロリーを出力
-----------------------------------------------------*/

#include <stdio.h>
#define N 3   //定食の種類

int main(void) 
{
    char name[N][20] = 
        {"カレー", "焼き肉", "魚"};
    int price[N] = {780, 920, 890};
    double cal[N] = {782.4, 910.6, 536.3};
}

printf("        定価　カロリー\n");
printf("%-16s %5d円 %7.1flcal\n ", name[0], price[0], cal[0]) 


/*---------------------------------------------------
             増分、減分演算子
            カウントアップ、カウントダウン
-----------------------------------------------------*/
#include <stdio.h>

int main(void)
{
    int a[]= {10,11,12,13,14,15,16,17,18};
    int i = 0;

    printf("a[%1d]=%2d\n", i, a[i]);
    i ++;       //iは1になる
    printf("a[%1d]=%2d\n", i, a[i]);
    i ++;       //iは2になる
     printf("a[%1d]=%2d\n", i, a[i]);
    i --;       //iは1になる
}

//出力
//10
//11
//10


/*---------------------------------------------------
             式の値
             配列と添字
-----------------------------------------------------*/
#include<stdio.h>

int main(void)
{
    int data[]={10,11,12};
    int i;      //添字

    //前置演算子
    i = 0;
    printf("data1[i] = %d\n", data[i ++]);

    後置演算子
    i = 0;
    printf("data[i] = %d\n ", data[i --]);
}

//実行結果
//11
//10


/*---------------------------------------------------
             seize of 演算子
             変数や配列のサイズ(バイト数)を求める
-----------------------------------------------------*/

#include <stdio.h>

int main(void)
{
    int n;
    int data [3];
    double x;

    printf("char型のサイズは%d\n", seize of (char));
    printf("変数ｎのサイズは%d\n", seize of (n));
    printf("配列dataのサイズは%d\n", seize of (data));
    printf("変数xの値は%d\n", seize of (x));
}

//実行結果
//char型のサイズは１                char方のサイズは仕様で1バイトと決められている
//変数nのサイズは4                  この処理系ではint型は4バイト
//配列dataのサイズは12              int型が3個
//配列xのサイズは8                  この処理系ではdouble型は8バイト


//よくわからん......orz


/*---------------------------------------------------
             ビット単位の演算子
        特定のビットのセット、リセット　、反転
-----------------------------------------------------*/
#include<stdio.h>

int main(void)
{
    unsigned char  data;

    data = 0xea;
    printf("0x%2xの下位4ビットは0x%02x\n", 
                data , data & 0x0f);

    data = 0x0a;
    printf("0x%02xの上位4ビットに0xe0を付加すると0x%02x\n" , 
                data , data | 0xe0);

    data = 0xea ;
    printf("0x%02xの下位4ビットを反転させると0x%02x\n" , 
                data , data ^ 0x0f)
}

//実行結果
//0xeaの下位4ビットは0x0a



/*---------------------------------------------------
             
-----------------------------------------------------*/

/*---------------------------------------------------
             
-----------------------------------------------------*/

/*---------------------------------------------------
             
-----------------------------------------------------*/

/*---------------------------------------------------
             
-----------------------------------------------------*/

/*---------------------------------------------------
             
-----------------------------------------------------*/

/*---------------------------------------------------
             
-----------------------------------------------------*/

/*---------------------------------------------------
             
-----------------------------------------------------*/