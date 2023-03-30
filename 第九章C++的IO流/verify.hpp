#ifndef VERIFY_FILE
#define VERIFY_FILE

#include <iostream>
#include <fstream>
#include <cassert>

namespace xr {
	bool verify_file(std::ifstream& ifs) {	// 校验文件输入流对象
		if (!ifs) {							// 若文件操作失败
			std::cout << "Error: failed to open file!";	// 输出提示信息
			return false;					// 返回false表示失败
		}
		return true;						// 返回true表示成功
	}
	
	bool verify_file (std::ofstream& ofs) {	// 校验文件输出流对象
		if (!ofs) {							// 若文件操作失败
			std::cout << "Error: failed to open file!";	// 输出提示信息
			return false;					// 返回false表示失败
		}
		return true;						// 返回true表示成功
	}
	
	bool verify_file (std::fstream& fs) {	// 校验文件流对象
		if (!fs) {							// 若文件操作失败
			std::cout << "Error: failed to open file!";	// 输出提示信息
			return false;					// 返回false表示失败
		}
		return true;						// 返回true表示成功
	}
}

#define verify(fs) assert(xr::verify_file(fs))	// 定义校验宏进行分发

#endif // VERIFY_FILE