#include<iostream>
#include<vector>
using namespace std;
const int start_time; //运动会开始日期（名称暂定）

/*
备注：
使用到的数据结构：链表
数据设定：强制设定时段开始时间为整点，单位设定为书院
*/

struct attend_event {  //参加项目类
	string name;
	string location;
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

struct  student { // 运动员类（学生类）可改名为athlete
	string name;
	int ID;  //学号
	string sex;
	string academy; //书院 
	vector<attend_event> attendence; //参加的项目
	int total_score;
};

struct academy {
	vector<student> athlete;
	int total_score;
};

struct basic_stu {  //基础学生类，仅用于event类用于？？
	string name;
	int rank;
	int score_second; //时间成绩
	int score_num;    //分数成绩
};

struct event {
	// int priority;
	string name;
	int time_segment;   //比赛时间段
	vector<basic_stu> participant;//参赛人员
	int total_par;  //参赛人数，可直接使用 participant.size()得到
};

struct site {  //（暂定）场地类
	vector<event> events;
};
vector<site> all_site; //总场地

//函数
void menu();



int main() {
	return 0;;
}

void menu() {

}
