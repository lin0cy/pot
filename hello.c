#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <ctype.h>
#include <locale>  
#include <conio.h>


using namespace std; 
int checkStudentId(string id) {
	string s1,s2,s3,s4,s5;
	int n1,n2,n3,n4,n5;
	int i;	//�������� 
	s1=id.substr(0,2);
	s2=id.substr(2,2);
	s3=id.substr(4,2);
	s4=id.substr(6,1);
	s5=id.substr(7,2);
	n1=stoi(s1);
	n2=stoi(s2);
	n3=stoi(s3);
	n4=stoi(s4);
	n5=stoi(s5);
	
	FILE *fp1;
	FILE *fp2;
	if ((fp1=fopen("ѧԺ����.txt","rt"))==NULL) {
		cout << "���ļ�\"ѧԺ����.txt\"ʧ��" <<endl; 
	}	
	if ((fp2=fopen("רҵ����.txt","rt"))==NULL) {
		cout << "���ļ�\"רҵ����.txt\"ʧ��" <<endl; 
	}
	//�ж�ѧԺ���� 
	for (i=0;i<COLLEDGE_NUM;i++) {
			if (n1==collegeCode[i]) break;
	}
	if (i==COLLEDGE_NUM) {
		printf("ѧ�ŵ�ѧԺ��������\n");
		return 0;
	}
//	else printf("ѧԱ�������\n");
	
	//�ж���ѧ��� 
	if (n2!=23) {
		printf("ѧ�ŷǽ�����ݣ�\n");
		return 0;
	}
//	else printf("ѧ���������");
	char *s;
	fgets(s,1024,fp1);
	//�ж�רҵ����
	char *str;
//	while ((str=strtok(s," "))!=NULL) {
//		cout << "str=" << str <<endl;
//	}
	cout << "s=" << s <<endl;
//	cout << "s3=" << s3 <<endl;
//	cout << "s4=" << s4 <<endl;
//	cout << "s5=" << s5 <<endl;
}
int main() {
	string id="102300412";
	checkStudentId(id);
return 0;
}
