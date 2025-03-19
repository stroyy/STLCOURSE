#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

/*�̶̼��д��� ������ ���� �㷨 ������ �º��� ������ ������
vector ����
allocator ������
count_if �㷨
begin() end() ������
not1 bind2ne �º���
*/
int main()
{
	int ia[6] = { 27,120,23,123,52,422 };
	vector<int, allocator<int>> vi(ia, ia+6);

	cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40)));



	return 0;
}

