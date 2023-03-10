#ifndef PRINT_STL_RANGE_CONTAINER
#define PRINT_STL_RANGE_CONTAINER

#include <iostream>
#include <iterator>
#include <algorithm>
#include <string_view>

template <class Iterator>				// 迭代器类型
void print(Iterator beg, Iterator end, 	// 待输出区间[beg,end)
	std::string_view msg = "",			// 提示信息
	std::string_view delim = "\t")		// 元素之间的分隔符
{
	using val_type = typename std::iterator_traits<Iterator>::value_type;
	std::ostream_iterator<val_type> screen { std::cout, delim.data() };
	
	std::cout << msg;						// 首先输出提示信息
	std::copy(beg, end, screen);			// 接着输出区间信息
	std::cout << std::endl;					// 最后输出换行
}

template <class Container>					// 容器类型
void print(const Container& c,				// 待输出容器
	std::string_view& msg = "",				// 提示信息
	std::string_view& delim = "\t")			// 元素之间的分隔符
{
	print(c.begin(), c.end(), msg, delim);	// 化为区间输出
}

#endif // PRINT_STL_RANGE_CONTAINER