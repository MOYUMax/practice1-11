#include "stdafx.h"
#include "practice6-7.h"


int change(){
	char ch;
	cout << "�������ַ�"<<endl;
	while ((ch = cin.get()) != '@'){
		if (isupper(ch) && tolower(ch))
			cout << ch;
		else if (islower(ch) && toupper(ch))
			cout << ch;
	}
	cout << endl;
	return 0;
}

int donation(){
	array<double, 10> don;
	double avg = 0;
	int i, count = 0;
	cout << "������10����������donation����";
	for (i = 0; i < 10; i++){
		if (!(cin >> don[i]))
			break;
		avg += don[i];
	}
	avg /= i;
	for (int j = 0; j < i; j++){
		if (don[j] > avg)
			count++;
	}
	cout << "ƽ��ֵ�ǣ�" << avg << "\nһ����" << count << "�����ִ���ƽ��ֵ" << endl;
	return 0;
}

int fakemenu(){
	char ch;
	char choose[4][20] = { "carnivore", "pianist", "tree", "game" };
	cout << "��������ĸѡ�������ĸ�ѡ�" << endl
		<< "c) carnivore\t\t" << "p) pianist" << endl
		<< "t) tree\t\t" << "g) game" << endl << "f" << endl;
	cout << "������ c,p,t, or gѡ��:";
	while (cin>>ch){
		switch (ch){
		case 'c':cout << "A maple is a " << choose[0] << ".\n"; break;
		case 'p':cout << "A maple is a " << choose[1] << ".\n"; break;
		case 't':cout << "A maple is a " << choose[2] << ".\n"; break;
		case 'g':cout << "A maple is a " << choose[3] << ".\n"; break;
		default:cout << "����������������롣" << endl;
		}
		cout << "������ c,p,t, or gѡ��:";
	}

	return 0;
}

int BOP(){
	array<bop,strsize> abop;
	abop[0] = { "MaxWang", "Tutor", "MOYUMax", 0 };
	abop[1] = { "LiWang", "Programer", "LMIS", 1 }; 
	abop[2] = { "Max Li", "Graduate", "MXL", 0 };
	abop[3] = { "XinDong", "Junior", "XDJ", 2 };
	abop[4] = { "Tinna", "LOOPY", "TLP", 2 };
	char ch;
	
	cout << "��������ĸѡ�������ĸ�ѡ�" << endl
		<< "a) display by name\t\t" << "b) display by title" << endl
		<< "c) display by bopname\t\t" << "d) display by preference" << endl << "q) quit" << endl;
	int length = 5;
	cout << "������ a,b,c,d��qѡ��:";
	while(cin >> ch){
		switch (ch){
		case'a':for (int i = 0; i < length; i++){ cout << "Display by name��" << abop[i].fullname << endl; }cout ; break;
		case'b':for (int i = 0; i < length; i++){ cout << "Display by title��" << abop[i].title << endl; }cout; break;
		case'c':for (int i = 0; i < length; i++){ cout << "Display by bopname��" << abop[i].bopname << endl; } cout; break;
		case'd':for (int i = 0; i < length; i++){
			if (abop[i].preference==0)
				cout << "Display by name��" << abop[i].fullname << endl;
			else if (abop[i].preference==1)
				cout << "Display by title��" << abop[i].title << endl;
			else if (abop[i].preference == 2)
				cout << "Display by bopname��" << abop[i].bopname << endl;
			else
				cout<<"Error fo preference."<<endl;
			
		}cout << "��һ����"; break;
		case'q':cout << "Bye!" << endl; return 0;
		}
		cout << "������ a,b,c,d��qѡ��:";
	}

	return 0;
}

int tax(){
	double rate[4] = { 0, 0.1, 0.15, 0.20 };
	double income = 0, tax = 0;
	cout << "������������루tvarp����";
	while (cin>>income && income >= 0){
		double temp = 0;
		if (income <= 5000)
			tax = 0;
		else if (income <= 15000){
			tax = (income - 5000)*rate[1];
		}
		else if (income <= 35000){
			temp = income - 15000;
			tax = temp*rate[2] + 10000 * rate[1];
		}
		else{
			temp = income - 35000;
			tax = temp*rate[3] + 20000 * rate[2] + 10000 * rate[1];
		}
		cout << "���˰����" << tax << endl << "������������루tvarp����";
	}
	cout << "�����ˡ�������" << endl;
	return 0;
}
int showdonation(){
	cout << "�������������Ŀ��";
	int n,count = 0;
	cin >> n;
	cout << fixed;
	patrons *listpatrons = new patrons[n];
	for (int i = 0; i < n ; i++){
		cin.get();
		cout << "����������ߵ�����:";
		getline(cin,listpatrons[i].namepats);
		cout << "����������ߵĽ��:";
		cin>> listpatrons[i].donation;
	}
	cout << "\tGrand Patrons" << endl;
	for (int i = 0; i < n; i++){
		double tempdona = listpatrons[i].donation;
		if (tempdona >= 10000){
			cout << "Name:" << listpatrons[i].namepats << "\tDonation:" << tempdona << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "none" << endl;
	cout << "\tPatrons" << endl;
	if (count < n){
		for (int i = 0; i < n; i++){
			double tempdona = listpatrons[i].donation;
			if (tempdona < 10000){
				cout << "Name:" << listpatrons[i].namepats << "\tDonation:" << tempdona << endl;
			}
		}
	}
	else
		cout << "none" << endl;
	delete [] listpatrons;
	return 0;
}
int vowAndcon(){
	cout << "�����뵥�ʣ��ÿո��������q��������";
	char word[100];
	int vowcount = 0,concount = 0;
	while (cin>>word && strcmp(word, "q")!=0){
		if (isalpha(word[0])){
			char temp = word[0];
			if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' ||
				temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U'){
				vowcount++;
			}
			else
				concount++;
		}
		cin.get();
	}
	cout << vowcount << " ��������Ԫ����ĸ��ͷ�ġ�" << endl;
	cout << concount << " �������Ǹ�����ĸ��ͷ�ġ�" << endl;

	return 0;
}
int showfile(){
	char *file = "./temp/data.txt";
	ifstream rf(file,ios::in);
	if (!rf){
		cerr << "���ļ�data.txt����" << endl;
		return -1;
	}
	char ch;
	int countchar = 0;
	while (rf.get(ch)){
		cout << ch;
		countchar++;
	}
	cout << endl << "һ����" << countchar << "���ַ���" << endl;
	rf.close();
	return 0;
}

int donationfile(){
	ifstream file("./temp/donationfile.txt");
	if (!file){
		cerr << "���ļ�donationfile.txt����" << endl;
		return -1;
	}
	int n = 0,count = 0;//n = ��������Ŀ��count = ������
	file >> n;
	file.get();//ע�⣬���к��ȡ
	patrons *mypat = new patrons[n];//�����߽ṹ������
	for (int i = 0; i < n; i++){	//��ȡ�ļ�����������mypat
		getline(file, mypat[i].namepats);
		file >> mypat[i].donation;
		file.get();//ע�⣬���к��ȡ
	}
	cout << "\tGrand Patrons" << endl;//������>10000��Grand Patrons
	for (int i = 0; i < n; i++){
		double tempdona = mypat[i].donation;
		if (tempdona >= 10000){
			cout << "Name:" << mypat[i].namepats << "\tDonation:" << tempdona << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "none" << endl;
	cout << "\tPatrons" << endl;//������<10000��Patrons
	if (count < n){
		for (int i = 0; i < n; i++){
			double tempdona = mypat[i].donation;
			if (tempdona < 10000){
				cout << "Name:" << mypat[i].namepats << "\tDonation:" << tempdona << endl;
			}
		}
	}
	else
		cout << "none" << endl;
	delete[] mypat;
	return 0;
}
