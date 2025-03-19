#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

/*短短几行代码 包含了 容器 算法 分配器 仿函数 迭代器 适配器
vector 容器
allocator 分配器
count_if 算法
begin() end() 迭代器
not1 bind2ne 仿函数
*/
int main()
{
	int ia[6] = { 27,120,23,123,52,422 };
	vector<int, allocator<int>> vi(ia, ia+6);

	cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40)));



	return 0;
}

