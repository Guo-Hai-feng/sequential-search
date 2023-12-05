#include"search.h"
int Search_Bin(SSTable ST, KeyType key)
{
	int low = 1, high = ST.length;//�����䴦��
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