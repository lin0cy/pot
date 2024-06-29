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
	int i;	//遍历变量 
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
	if ((fp1=fopen("学院编码.txt","rt"))==NULL) {
		cout << "打开文件\"学院编码.txt\"失败" <<endl; 
	}	
	if ((fp2=fopen("专业代码.txt","rt"))==NULL) {
		cout << "打开文件\"专业代码.txt\"失败" <<endl; 
	}
	//判断学院编码 
	for (i=0;i<COLLEDGE_NUM;i++) {
			if (n1==collegeCode[i]) break;
	}
	if (i==COLLEDGE_NUM) {
		printf("学号的学院编码有误！\n");
		return 0;
	}
//	else printf("学员编号无误\n");
	
	//判断入学年份 
	if (n2!=23) {
		printf("学号非今年年份！\n");
		return 0;
	}
//	else printf("学号年份无误");
	char *s;
	fgets(s,1024,fp1);
	//判断专业代码
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
