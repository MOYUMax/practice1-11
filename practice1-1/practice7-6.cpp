#include "stdafx.h"
#include "practice7-6.h"

double thavg(double a, double b){
	return 2.0*a*b/(a+b);
}
int ingolf(double a[], int n){
	cout << "���������10���߶���ɼ���";
	int i = 0;
	while (i >= 0 && i <= 9 && cin >> a[i]){
		i++;
		if (cin.get() == '\n')
			break;		
	}
	return i;
}
double cavggolf(double a[], int n){
	double avg = 0;
	for (int i = 0; i < n; i++)
		avg += a[i];
	return avg/n;
}
int outgolf(double avg){
	cout << "ƽ��ֵavg = " << avg << endl;
	return 0;
}
int showbox(box b){
	cout << "maker:\t" << b.maker << endl
		<< "height:\t" << b.heigh << endl
		<< "width:\t" << b.width << endl
		<< "length:\t" << b.length << endl
		<< "volume:\t" << b.volume << endl;
	return 0;
}
int setboxvol(box *b){
	b->volume = b->heigh*b->length*b->width;
	return 0;
}
int mybox(){
	box fb = { "��˫˫", 5.5F, 4.5F, 6.5F, 0.0F };
	showbox(fb);
	box *pb = &fb;
	setboxvol(pb);
	showbox(*pb);
	return 0;
}
long long factor(long long n){
	if (n == 0)
		return 1;
	else
		return n*factor(n - 1);
}
int test_factor(){
	long long n = 0;
	cout << "������һ���������������˳�����";
	cin >> n;
	while (n >= 0){
		cout << "�׳�factor = " << factor(n) << endl;
		cout << "��������룺";
		cin >> n;		
	}
	return 0;
}
int lotto(){
	long double rate = 1.0;
	unsigned  fielda = 47, fieldb = 27, numa = 5, numb = 1;
	for (; numa > 0; fielda--, numa--)
		rate = rate*fielda / numa;
	rate = rate*fieldb / numb;
	cout << "47ѡ5��27ѡ1�н�����" << rate <<"��֮һ��"<< endl;
	return 0;
}
int Fill_array(double a[], int n){
	cout << "����������"<<n<<"��double��,��������ֻ������";
	int i = 0;
	while (i < n&& i >= 0){		
		cin >> a[i];
		if (cin.fail()){
			cin.ignore(10000,'\n');
			break;
		}
		i++;
		cout << "��������룺";
	}
	return i;//��������ĳ���
}
int Show_array(double a[], int n){
	cout << "double����a�е�" << n << "��ֵ�ǣ�";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
	return 0;
}
int Reverse_array(double a[], int n){
	for (int i = 0, j = n - 1; i < j; i++, j--){
		double temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	return 0;
}
int test_array(){
	const int n = 100;
	double a[n];
	int length = Fill_array(a, n);
	Show_array(a, length);
	Reverse_array(a, length);
	cout << "��תdouble����a��" << endl;
	Show_array(a, length);
	cout << "��תdouble����a�ĵ�2��������һ��ֵ��" << endl;
	Reverse_array(&a[1], length - 2);
	Show_array(a, length);
	return 0;
}
double * fill_array(double * begin, int limit){
	int i;
	double temp;
	for (i = 0; i < limit; i++){
		cout << "������doubleֵ#" << i + 1 << ";";
		cin >> temp;
		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			break;
		}
		else if (temp < 0)
			break;
		*(begin + i) = temp;
	}
	return (begin + i);
}
void show_array(double * begin, double * end){
	cout << "double�������������ֵ��";
	for (double* pd = begin; pd != end; pd++)
		cout << *pd << "\t";
	cout << endl;
}
void revalue(double r, double *begin, double *end){
	for (double *pd = begin; pd != end; pd++)
		*pd *= r;
}
int arrfun3(){
	const int Max = 100;
	double poperties[Max];
	double *begin = poperties, *end = NULL;
	cout << "����������100��double���֣��Է����ֽ�����" << endl;
	end = fill_array(begin, Max);
	show_array(begin, end);
	if (begin != end){
		cout << "�����������ֵ��";
		double factor;		
		while (!(cin >> factor)){
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "����������������룺";
		}
		revalue(factor, begin, end);
		show_array(begin, end);
	}
	cout << "��ɣ�" << endl;
	return 0;
}

void fill(double a[], int n){
	for (int i = 0; i < n; i++){
		cout << "������" << Snames[i] << "���Ŀ�֧��";
		cin >> a[i];
	}
	return;
}
void fill(expense &e){
	for (int i = 0; i < seasons; i++){
		cout << "������" << Snames[i] << "���Ŀ�֧��";
		cin >> e.a[i];
	}
	return;
}
void show(const double a[], int n){
	double total = 0.0;
	cout << "ÿ�����ȵĻ������£�" << endl;
	for (int i = 0; i < n; i++){
		cout << Snames[i] << "����\t" << a[i]<<"Ԫ"<<endl;
		total += a[i];
	}
	cout << "�ܻ�����\t" << total << endl;
	return;
}
void show(const expense e){
	double total = 0.0;
	cout << "ÿ�����ȵĻ������£�" << endl;
	for (int i = 0; i < seasons; i++){
		cout << Snames[i] << "����\t" << e.a[i] << "Ԫ" << endl;
		total += e.a[i];
	}
	cout << "�ܻ�����\t" << total << endl;
	return;
}
int arrobj(){
	
//	double a[seasons];
//	fill(a, seasons);
//	show(a, seasons);
	expense ex;
	fill(ex);
	show(ex);
	return 0;
}
int getinfo(student pa[], int n){
	int length = 0;
	cout << "�����벻����" << n << "��ѧ�������ƣ����ã�����ֵ�������������Ϣ���������룩\n";
	while (length<n){
		cout << "ѧ��" << length + 1 << "��������";
//		cin>> noskipws >> pa[length].fullname >> pa[length].hobby >> pa[length].ooplevel;
		cin.getline(pa[length].fullname, SLEN);
		if (pa[length].fullname[0] == '\0'){
			cin.clear();
			break;
		}
		cout << "ѧ��" << length + 1 << "�İ��ã�";
		cin.getline(pa[length].hobby, SLEN);
		cout << "ѧ��" << length + 1 << "������ֵ��";
		cin >> pa[length].ooplevel;	
		cin.get();
		length++;					
	}
	return length;
}
void display1(student st){
	cout << "ѧ����������" << st.fullname
		<< "\t���ã�" << st.hobby
		<< "\t����ֵ��" << st.ooplevel << endl;
	return;
}
void display2(const student *ps){
	cout << "ѧ����������" << ps->fullname 
		<< "\t���ã�" << (*ps).hobby 
		<< "\t����ֵ��" << ps->ooplevel << endl;
	return;
}
void display2(const student pa[], int n){
	for (int i = 0; i < n; i++){
		cout << "ѧ��"<<i+1<<"��������" << pa[i].fullname 
			<< "\t���ã�" << pa[i].hobby 
			<< "\t����ֵ��" << pa[i].ooplevel << endl;
	}
	return;
}
void test_student(){
	cout << "����༶������";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++){
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display2(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "���" << endl;
	return;
}
//�ú������ò�ͬ�ĺ���������a,b
double calculate(double a, double b, double(*pf)(double fa, double fb)){
	double fcal = (*pf)(a, b);
	return fcal;
}
double add(double x, double y){
	return x + y;
}
double mult(double x, double y){
	return x*y;
}
double maxdob(double x, double y){
	return x > y ? x : y;
}
int test_caldob(){
	cout << "����������double �������ǽ����в�ͬ�ļ���,����Ctrl+Z��������" << endl;
	double ad = 0, bd = 0,rsult[3];
	const char *namecal[] = { "��", "��", "ȡ���" };
	while (cin >> ad >> bd){
/*		rsult = calculate(ad, bd, add);
		cout << "�ӷ���������\t" << rsult << endl;
		rsult = calculate(ad, bd, mult);
		cout << "�˷���������\t" << rsult << endl;
		rsult = calculate(ad, bd, maxdob);
		cout << "���ֵΪ��\t" << rsult << endl;
		cout << "�����������������";*/
		double(*pf[3])(double, double) = { add, mult, maxdob };
		for (int i = 0; i < 3; i++){
			rsult[i] = calculate(ad, bd, pf[i]);
			cout<< namecal[i] << "����������\t" << rsult[i] << endl;
		}
		cout << "�������������룬����Ctrl+Z��";
	}
	
	return 0;
}