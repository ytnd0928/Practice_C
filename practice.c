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