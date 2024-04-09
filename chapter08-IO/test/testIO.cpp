/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/4/2 19:43
 * @Author Kenton
 */

#include <iostream>
#include <iomanip>
#include "fstream"
#include "string"
#include <sstream>
#include <iomanip>


int main() {
//    union {
//        int x;
//        float y;
//    };
//
//    // 针对不同的外部设备 终端 文件 内存 引入不同的处理逻辑
//    x = 100;
//    std::cout << x << std::endl;
//    std::cout << y << std::endl;

//    int x;
//    std::cin.read(reinterpret_cast<char*>(&x),sizeof(x));
//    std::cout << x << std::endl;
//    char x = '0';
//    std::cout.setf(std::ios_base::showbase);
//    std::cout << x << std::endl;
//    int y = static_cast<int>(x);
//    std::cout << y << std::endl;


//    char x = '1';
//    int y = static_cast<int>(x);
//
//    std::cout.setf(std::ios_base::showpos);
//    std::cout.width(10);
//    std::cout.fill('.');
//    std::cout << x << std::endl;
//    std::cout.width(10);
//    std::cout << y << std::endl;

//    char x[5];
//    std::cin >> std::setw(5) >> x;
//    std::cout << x << std::endl;

//    std::ofstream outFile;
//    std::cout << outFile.is_open() << '\n';
//    outFile.open("my_file");
//    std::cout << outFile.is_open() << '\n';
//    outFile.close();
//    std::cout << outFile.is_open() << '\n';

// outFile << "Hello\n";

//std::ifstream inFile("my_file");
//std::string x;
//inFile >> x;
//std::cout << x << '\n';
//
//    std::ofstream outFile("my_file", std::ios_base::out | std::ios_base::trunc);
//    outFile << "World\n";

//    std::ostringstream obj1;
//    obj1 << std::setw(10) << std::setfill('.') << 10;
//    std::string res = obj1.str();
//    std::cout << res << std::endl;

//    std::ostringstream obj1;
//    obj1 << 10;
//    std::string res =  obj1.str();
//
//    std::istringstream obj2(res);
//    int x;
//    obj2 >> x;
//    std::cout << x << std::endl;

//std::ostringstream buf2("test");
//buf2 << '1';
//std::string res = buf2.str();
//auto c_res = res.c_str();
////std::cout << c_res << std::endl;
//std::cout << buf2.str().c_str() << std::endl;
//
//    std::string x;
//    x += "Hello";
//    x += "world";
//    x += "Hello";
//    x += "world";
//    std::cout << x << std::endl;
//
//    std::ofstream outFile;
//    outFile << 10;

//    int x;
//    std::cin >> x;
//
//    std::cout << std::cin.good() << std::cin.fail() << std::cin.bad() << std::cin.eof() << static_cast<bool>(std::cin)
//              << std::endl;

//std::ofstream outFile("example.txt");
//outFile << "Hello World" << std::endl;
//outFile << "This is a  test" << std::endl;
//outFile.close();
//
//std::ifstream inFile("example.txt");
//
//// 读取第一行
//std::string line;
//std::getline(inFile,line);
//std::cout << line << std::endl;
//
//// 使用seekg跳转到文件的开始位置
//inFile.seekg(0,std::ios::beg);
//
//// 再读取第一行
//std::getline(inFile,line);
//std::cout << line << std::endl;
//
//// 使用seekg跳转到文件尾
//inFile.seekg(0,std::ios::end);
//
//// 获取文件的总大小 不是字符数是字节数
//std::streampos fileSize = inFile.tellg();
//std::cout << "File Size:" << fileSize << "bytes" << std::endl;
//
//inFile.close();

//std::cout << "What's your name\n" << std::flush;
//std::string name;
//std::cin >> name;

//std::cerr << "What's your name" << std::endl;

//    std::ios_base::sync_with_stdio(false);
//
//    std::cout << "Hello from std::cout" << std::endl;
//
//    printf("Hello from printf\n");

// 不能对IO对象赋值
    std::ofstream out1, out2;
// ou1 = out2;

// 不能初始化oftream参数
std::ofstream print(std::ofstream);
// 不能拷贝流对象
//out2 = print(out2);

// 进行IO操作的函数通常以引用方式传递和返回流 读写一个IO对象会改变其状态
// 因此传递和返回的引用不能是const

// 确定一个流对象的状态的最简单的方法是将它当作一个条件来用
//    char world;
//
//    while (std::cin >> world){
//
//    }
//    auto old_state = std::cin.rdstate();
//    std::cin.clear();
//    process_input(std::cin);
//    std::cin.setstate(old_state);

// 我们可以使用unitbuf设置流的内部状态 来清空缓冲区
// 默认情况下 对cerr是设置unitbuf的因此写到cerr的内容都是立即刷新
// 一个流可能会被关联到另一个流。在这种情况下 当读写被关联的流时 关联到的流的缓冲区会被刷新
// 例如cin和cerr都关联到cout 因此读cin或写cerr都会导致cout的缓冲区被刷新

/*
 * unitbuf告诉流在接下来的每次写操作之后都进行一次flush操作
 * 而nounitbuf操作符则重置流 使其恢复使用正常的管理习题的缓冲区刷新机制*/
//std::cout << std::unitbuf;
//std::cout << std::nounitbuf;

// 如果程序奔溃 输出缓冲区不会被刷新

//int a = 5;
//int b = 10;
//
//std::tie(a,b) = std::make_tuple(b,a);
//std::cout << "a = " << a << " b = " << b << std::endl;

/*
 * tie有两个版本
 * 1.不带参数
 * 返回指向输出流的指针 如果本对象当前关联到一个输出流 则返回的就是指向这个流的指针
 * 如果未关联到输出流对象 则返回空指针
 *
 * 2.接收ostream的指针
 * 将自己关联到ostream*/

//std::cin.tie(&std::cout);
//std::ostream *old_tie = std::cin.tie(nullptr);
//std::cin.tie(&std::cerr);
//std::tie(old_tie);

// 当一个fstream对象被销毁时 close会自动被调用

//std::string str = "123 456 789";
//std::istringstream iss(str);
//int a,b,c;
//
//iss >> a >> b >> c;
//
//std::cout << "a: " << a << ",b:" << b << ",c" << c << std::endl;


std::ostringstream oss;
int a = 123,b = 456,c = 789;

oss << a << ' ' << b << ' ' << c;

std::string str = oss.str();

std::cout << "str:" << str << std::endl;
}