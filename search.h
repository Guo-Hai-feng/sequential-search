#include<stdio.h>
typedef int KeyType;
typedef struct
{
	KeyType key;//�ؼ�����
	//...������
}ElemType;

typedef struct
{
	//˳���ṹ����
	ElemType* R;//���ַ
	int length;//��

}SSTable;//Sequential Search Table

SSTable ST;//����˳���ST
int Search_Seq1(SSTable ST, KeyType key);
int Search_Seq2(SSTable ST, KeyType key);
int Search_Seq3(SSTable ST, KeyType key);
int Search_Seq4(SSTable ST, KeyType key);
int Search_Bin(SSTable ST, KeyType key);