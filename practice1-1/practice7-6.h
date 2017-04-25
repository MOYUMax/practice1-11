#pragma once
#include <string>
double thavg(double a, double b);
int ingolf(double a[], int n);
double cavggolf(double a[], int n);
int outgolf(double avg);

struct box{
	char maker[40];
	float heigh;
	float width;
	float length;
	float volume;
};
int showbox(box b);
int setboxvol(box *b);
int mybox();
long long factor(long long n);
int test_factor();
int lotto();
int Fill_array(double a[], int n);
int Show_array(double a[], int n);
int Reverse_array(double a[], int n);
int test_array();
double * fill_array(double * begin, int limit);
void show_array(double * begin, double * end);
void revalue(double r, double *begin, double *end);
int arrfun3();

/*
今天写程序碰到一个非常有趣的问题，经过一番努力，终于弄清楚问题原因。感叹自己基本功不扎实之余，还是好好作个总结，算是留个案底吧。

一般在头文件中定义全局变量是个危险行为，因为如果这个头文件被多个源文件引用的话，将会导致LNK2005链接错误，在VS2008环境中编译器会输出类似以下信息：
error LNK2005: "char const * * g_strFrameConfigKeyNames" (?g_strFrameConfigKeyNames@@3PAPBDA) already defined in XXX.obj
要解决这类错误，有以下几个方法：
1、将全局变量定义到源文件中，这样变量就不会由于被引用多次而导致重复定义问题；
2、有时需要在头文件中声明变量，使代码阅读起来更加清晰。这时只要在头文件中声明时给变量加上“extern”关键字修饰即可，注意头文件中只是声明变量，在源文件中完成变量的定义；
3、可能有时我们的确需要全局变量在头文件中定义，比如声明一个字符串数组表示一些分类描述信息，如果放到源文件中对于代码阅读是个障碍，尤其是这个全局数组需要经常做变动的时候。这时我们可以在变量的定义前加上“static”关键字，“static”指定编译器采用内连接，避免LNK2005错误；（关于编译器内连接和外连接的细节，请自己查阅相关资料。）
4、使用“const”关键字，原因同上，“const”在C++中默认为内部连接；
5、使用“selectany”，MSDN上给出的方案，没有仔细研究。
知道了上述方法，我们就可以解决关于工程中全局变量的声明和定义问题，尤其是在头文件中声明或定义全局变量，应该会经常遇到这个问题。关于LNK2005的详细信息，可以参考下面两篇文章：
MSDN 链接器工具错误 LNK2005
VC++的链接错误LNK2005

我遇到的问题与此有关。我在一个头文件中定义了全局的字符串指针数组，语句如下：
const TCHAR* g_strings [] = { _T("test1"), _T("test2")};  ------------- （1）
报LNK2005错误，但是如果改成下面的语句：
const PTCHAR g_strings [] = { _T("test1"), _T("test2")};  ------------- （2）
就可以链接成功。怎么回事呢？看一下PTCHAR的定义（Unicode）：
typedef WCHAR TCHAR, *PTCHAR;
看上去PTCHAR就是TCHAR*，纠结了很久，我终于想明白原来句（1）和句（2）是不同的。句（1）中的g_strings是一个指针数组，数组中的指针指向const型字符串，及字符串的内容不可变；句（2）中的g_strings也是一个指针数组，只不过数组中的指针是const型指针，指向的字符串可变。因此句（1）申请的全局变量本身其实并不是const型的，所以句（1）会出错。
以上解释又涉及到了const和typedef等关键字的理解，看来基础有时候真的很重要，下面仔细研究一下。

const修饰指针的写法有如下4种：
1、 const type * p;
2、 type const * p;
3、 type * const p;
4、 const type * const p;
其中1和2都表示指向const对象的指针，3表示const指针，4表示指向const对象的const指针。其实只要看const修饰的是对象是谁就可以了，const在*之前修饰的是（*p），即修饰的是p指向的对象；const在*之后修饰的是p，即修饰p指针。
当const和typedef一起用时，再来看看怎么理解。例子：
typedef int * PINT;
const PINT p;
如果你将PINT的定义直接展开放在语句中，可能认为与下句等同：
const int * p;
其实，typedef是类型定义关键字，PINT已经是一个新的类型，那么const此时修饰的是p（不再是*p了），因此p是一个const类型的指针。

C++是复杂的，基础知识必须要掌握牢固，否则随时会对开发产生影响。一个百思不解的问题，可能是因为你没有注意到最基本的错误。
*/

static const int seasons = 4;
static const char *Snames[seasons] = { "春", "夏", "秋", "冬" };//如果去掉static，就会报错LINK2005
struct expense{
	double  a[seasons];
};
void fill(double a[], int n);
void fill(expense &e);
void show(const double a[], int n);
void show(const expense e);
int arrobj();
static const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display2(const student pa[], int n);
void test_student();

double calculate(double a, double b, double (*pf)(double fa, double fb));//该函数调用不同的函数来计算a,b
double add(double x, double y);
double mult(double x, double y);
double maxdob(double x, double y);
int test_caldob();