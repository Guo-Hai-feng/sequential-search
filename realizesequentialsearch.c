#include"search.h"
//˳����˳����ң�����
int Search_Seq1(SSTable ST, KeyType key)
{
	//�±��1��ʼ
	for (int i = ST.length; i >= 1; i--)
	{
		if (ST.R[i].key == key)
		{
			return i;
		}
	}
	return 0;

	
	
}
int Search_Seq2(SSTable ST, KeyType key)
{
	int i = 0;
	for (i = ST.length; ST.R[i].key != key; i--)
	{
		if (i <= 0)
			break;
	}
	if (i > 0)
		return i;
	else return 0;	
}

int Search_Seq3(SSTable ST, KeyType key)
{
	int i = 0;
	for (i = ST.length; ST.R[i].key != key && i > 0; i--);//�����
	if (i > 0)
		return i;
	else return 0;
}

int Search_Seq4(SSTable ST, KeyType key)
{
	ST.R[0].key = key;
	int i = 0;
	for (i = ST.length; ST.R[i].key != key; i--);
	return i;	
}
