#include <bits/stdc++.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

bool bRunning = true;

short sCnt = 0;

unsigned uWriteIndex = 0, uReadIndex = 0;
 
array<unsigned long, 2> ulAPktCnt;


void readProcess()
{
	sCnt = 0;
	cout << __PRETTY_FUNCTION__ << ", thread id: " << this_thread :: get_id() << ", process id: " << getpid() << endl;
	while(sCnt < 11)
	{
		this_thread::sleep_for(1s);
		uWriteIndex = (uWriteIndex + 1) % 2;
		uReadIndex = (uWriteIndex + 1) % 2; 
		cout << "[" << __DATE__ << ", " << __TIME__ << "]# " << "Write Index: " << uWriteIndex << ", Read Index: " << uReadIndex << " " << ulAPktCnt[uReadIndex]<< endl;
		sCnt++;
	}
	bRunning = false;	
}

int main()
{
	ulAPktCnt[0] = 0;
    ulAPktCnt[1] = 0;
    cout << __PRETTY_FUNCTION__ << ", thread id: " << this_thread :: get_id() << ", process id: " << getpid() << endl;
	thread th(readProcess);
	while(bRunning) ulAPktCnt[uWriteIndex]++;
	th.join();
	return 0;
}
