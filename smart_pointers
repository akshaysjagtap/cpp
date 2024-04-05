#include<bits/stdc++.h>

using namespace std;

int main()
{
	auto p = make_unique<int[]>(5);
	cout << typeid(p).name() << endl;
	
	unique_ptr<int[]> ptr (new int[5]{0, 1, 2, 3, 4});
	cout << ptr[1] << endl; 
	
	auto shr = make_shared<int[]>(5);
	cout << shr[1] << shr.use_count() << endl;
	
	shared_ptr<int> sp = make_shared<int>(42);
    weak_ptr<int> wp = sp;
	weak_ptr<int> wp1 = sp;
	cout << "wp: " << *wp.lock() << endl;
    cout << "uc: " << sp.use_count() << endl;
    
	return 0;
}
