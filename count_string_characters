#include<iostream>

using namespace std;
int main()
{
	char arr[] = "Hello";
	int ht[256] {0};
	int size = sizeof(arr);
	
	for(int i = 0;i < size; i++)
		++ht[(int)arr[i]];
	
	for(int i = 1; i < 256; i++)
	{
		if(ht[i] != 0)
			cout << (char)i << ": " << ht[i]  << endl;
	}
	
	return 0;
}
