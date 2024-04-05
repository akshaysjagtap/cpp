#include <bits/stdc++.h>

using namespace std;
string str = "ABCDEFGHIJKL";

int nxt = 4, divs = 3;
void print(int pos, int id)
{
	while(true)
	{
		while(nxt != id) ;
		cout << "Thread" << id << ": " << str.substr(pos, 3) << endl ;
		if(id == divs - 1) cout << endl;
		pos = pos + 3;
		nxt = (nxt + 1) % divs;
		if(pos > 11) 
		{
			divs = divs - 1;
			break;
		}
	}
}

int main()
{
	thread t1(print,0,0);
	thread t2(print,3,1);
	thread t3(print,6,2);
	nxt = 0;
	t1.join();
	t2.join();
	t3.join();
	return 0;	
}
