#include <iostream>
#include <vector>

using namespace std;
  
int main() {
	vector<int> v={1,2,3,4,5,6,7,8,9,0};
	vector<int>::iterator it=v.begin()+5;
	for (int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
	v.erase(it,it+3);
	for (int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
    return 0;  
}
