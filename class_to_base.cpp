#include<bits/stdc++.h>

class CTB
{
	int val {};
	
	public :
		operator int()
		{
			return val;
		}	
};

int main()
{
	CTB c;
	int a = c;
	std :: cout << a << std :: endl;
	return 0;
}
