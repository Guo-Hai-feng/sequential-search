#include"search.h"
int Search_Bin1(SSTable ST, KeyType key)
{
	int low = 1, high = ST.length;//ÖÃÇø¼ä´¦ÖÃ
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (ST.R[mid].key == key)
			return mid;
		else if (key < ST.R[mid].key)
			high = mid - 1;
		else low = mid + 1;
	}
	return 0;
}

int Search_Bin2(SSTable ST, KeyType key,int low,int high)
{
	if (low > high)
		return 0;
	int mid = (low + high) / 2;
	if (key == ST.R[mid].key)
		return mid;
	else if (key < ST.R[mid].key)
		Search_Bin(ST, key, low, mid - 1);
	else
		Search_Bin(ST, key, mid + 1, high);
}

