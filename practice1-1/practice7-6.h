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
����д��������һ���ǳ���Ȥ�����⣬����һ��Ŭ��������Ū�������ԭ�򡣸�̾�Լ�����������ʵ֮�࣬���Ǻú������ܽᣬ�����������װɡ�

һ����ͷ�ļ��ж���ȫ�ֱ����Ǹ�Σ����Ϊ����Ϊ������ͷ�ļ������Դ�ļ����õĻ������ᵼ��LNK2005���Ӵ�����VS2008�����б��������������������Ϣ��
error LNK2005: "char const * * g_strFrameConfigKeyNames" (?g_strFrameConfigKeyNames@@3PAPBDA) already defined in XXX.obj
Ҫ���������������¼���������
1����ȫ�ֱ������嵽Դ�ļ��У����������Ͳ������ڱ����ö�ζ������ظ��������⣻
2����ʱ��Ҫ��ͷ�ļ�������������ʹ�����Ķ�����������������ʱֻҪ��ͷ�ļ�������ʱ���������ϡ�extern���ؼ������μ��ɣ�ע��ͷ�ļ���ֻ��������������Դ�ļ�����ɱ����Ķ��壻
3��������ʱ���ǵ�ȷ��Ҫȫ�ֱ�����ͷ�ļ��ж��壬��������һ���ַ��������ʾһЩ����������Ϣ������ŵ�Դ�ļ��ж��ڴ����Ķ��Ǹ��ϰ������������ȫ��������Ҫ�������䶯��ʱ����ʱ���ǿ����ڱ����Ķ���ǰ���ϡ�static���ؼ��֣���static��ָ�����������������ӣ�����LNK2005���󣻣����ڱ����������Ӻ������ӵ�ϸ�ڣ����Լ�����������ϡ���
4��ʹ�á�const���ؼ��֣�ԭ��ͬ�ϣ���const����C++��Ĭ��Ϊ�ڲ����ӣ�
5��ʹ�á�selectany����MSDN�ϸ����ķ�����û����ϸ�о���
֪�����������������ǾͿ��Խ�����ڹ�����ȫ�ֱ����������Ͷ������⣬��������ͷ�ļ�����������ȫ�ֱ�����Ӧ�ûᾭ������������⡣����LNK2005����ϸ��Ϣ�����Բο�������ƪ���£�
MSDN ���������ߴ��� LNK2005
VC++�����Ӵ���LNK2005

����������������йء�����һ��ͷ�ļ��ж�����ȫ�ֵ��ַ���ָ�����飬������£�
const TCHAR* g_strings [] = { _T("test1"), _T("test2")};  ------------- ��1��
��LNK2005���󣬵�������ĳ��������䣺
const PTCHAR g_strings [] = { _T("test1"), _T("test2")};  ------------- ��2��
�Ϳ������ӳɹ�����ô�����أ���һ��PTCHAR�Ķ��壨Unicode����
typedef WCHAR TCHAR, *PTCHAR;
����ȥPTCHAR����TCHAR*�������˺ܾã�������������ԭ���䣨1���;䣨2���ǲ�ͬ�ġ��䣨1���е�g_strings��һ��ָ�����飬�����е�ָ��ָ��const���ַ��������ַ��������ݲ��ɱ䣻�䣨2���е�g_stringsҲ��һ��ָ�����飬ֻ���������е�ָ����const��ָ�룬ָ����ַ����ɱ䡣��˾䣨1�������ȫ�ֱ���������ʵ������const�͵ģ����Ծ䣨1�������
���Ͻ������漰����const��typedef�ȹؼ��ֵ���⣬����������ʱ����ĺ���Ҫ��������ϸ�о�һ�¡�

const����ָ���д��������4�֣�
1�� const type * p;
2�� type const * p;
3�� type * const p;
4�� const type * const p;
����1��2����ʾָ��const�����ָ�룬3��ʾconstָ�룬4��ʾָ��const�����constָ�롣��ʵֻҪ��const���ε��Ƕ�����˭�Ϳ����ˣ�const��*֮ǰ���ε��ǣ�*p���������ε���pָ��Ķ���const��*֮�����ε���p��������pָ�롣
��const��typedefһ����ʱ������������ô��⡣���ӣ�
typedef int * PINT;
const PINT p;
����㽫PINT�Ķ���ֱ��չ����������У�������Ϊ���¾��ͬ��
const int * p;
��ʵ��typedef�����Ͷ���ؼ��֣�PINT�Ѿ���һ���µ����ͣ���ôconst��ʱ���ε���p��������*p�ˣ������p��һ��const���͵�ָ�롣

C++�Ǹ��ӵģ�����֪ʶ����Ҫ�����ι̣�������ʱ��Կ�������Ӱ�졣һ����˼��������⣬��������Ϊ��û��ע�⵽������Ĵ���
*/

static const int seasons = 4;
static const char *Snames[seasons] = { "��", "��", "��", "��" };//���ȥ��static���ͻᱨ��LINK2005
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

double calculate(double a, double b, double (*pf)(double fa, double fb));//�ú������ò�ͬ�ĺ���������a,b
double add(double x, double y);
double mult(double x, double y);
double maxdob(double x, double y);
int test_caldob();