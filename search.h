#include<stdio.h>
typedef int KeyType;
typedef struct
{
	KeyType key;//关键字域
	//...其他域
}ElemType;

typedef struct
{
	//顺序表结构定义
	ElemType* R;//表基址
	int length;//表长

}SSTable;//Sequential Search Table

SSTable ST;//定义顺序表ST
int Search_Seq1(SSTable ST, KeyType key);
int Search_Seq2(SSTable ST, KeyType key);
int Search_Seq3(SSTable ST, KeyType key);
int Search_Seq4(SSTable ST, KeyType key);
int Search_Bin(SSTable ST, KeyType key);