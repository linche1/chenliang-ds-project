#include<stdio.h>
#include<stdlib.h>
const int start_time=0; //运动会开始日期（名称暂定）
const int max_stu = 10000;//max amount of student
const int max_aca_stu=200;//max amount of student from one academy
/*
备注：
使用到的数据结构：链表
数据设定：
强制设定时段开始时间为整点，单位设定为书院

*/

struct attend_event {  //参加项目类
	char* name;
	char* location;
	int time_segment;   //比赛时间段
	/*
	int year;   //强制设定时段开始时间为整点，时间最好用另外的函数计算
	int month;
	int day;
	int hour;
	*/
	int rank;
	int score_second; //时间成绩
	int score_num;    //分数成绩
};

typedef struct  student { //运动员类（学生类）可改名为athlete
	char* name;
	int ID;  //学号
	char* sex;
	char* academy; //书院 
	struct attend_event attendence[3]; //参加的项目
	int nums ;//项目数量
	int total_score;
} Student;
Student All_student[max_stu];

struct academy {
	struct student athlete[max_aca_stu];
	int total_score;
}Academy[20];
char academy_name[20][40];

struct basic_stu {  //基础学生类，仅用于event类用于？？
	char* name;
	int rank;
	int score_second; //时间成绩
	int score_num;    //分数成绩
};

struct event {  //设定参赛人员30
	// int priority;
	char* name;
	int time_segment;   //比赛时间段
	struct basic_stu participant[30];//参赛人员
	int total_par;  //参赛人数，可直接使用 participant.size()得到
};

struct site {  //（暂定）场地类
	struct event All_event[50];
};
struct site All_site[20]; //总场地

//函数
void menu();
void save_info();  //录入运动员信息
void print_roster();//打印出花名册并在本地保存roster.txt文件
void set_grade();//设置成绩（建议外部表格读取）
void generate_grade();//生成比赛结果
void get_result();//获取比赛结果

int main() {
	return 0;
}

void menu() {
	int option; //选项
	printf("****************************************");
	printf("                    学校运动会管理系统");
	printf("请输入以下选项进行相应操作：\n1.录入运动会信息\n2.打印花名册\n3.设置比赛成绩\n4.生成比赛结果\n5.获取比赛结果");
	scanf("%d", &option);
	while(option>4 ||option<1)
	switch (option) {
	case 1:save_info(); break;
	case 2:print_roster(); break;
	case 3:set_grade(); break;
	case 4:get_result(); break;
	default:break;
	}
}

void generate_grade{
	
}

