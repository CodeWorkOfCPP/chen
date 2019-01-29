#include <iostream>
#include <string>
using namespace std;
class  Student
{
public:
	Student();
	Student(string a,int c,int m,int e):name(a),c_language(c),math(m),english(e){}
	void set_data();
	void show_data();
private:
	string name;
	int c_language;
	int math;
	int english;
	float aver;
};

Student::Student(){
	name="None";
	c_language=0;
	math=0;
	english=0;
}

void Student::set_data(){
	cin>>name;
	cin>>c_language;
	cin>>math;
	cin>>english;
}

void Student::show_data(){//according to the score and credit,calculate the aver. 
	aver=(c_language*5+math*4.5+english*4)/(5+4.5+4);
	cout<<name<<' '<<c_language<<' '<<math<<' '<<english<<' '<<aver<<endl;
}

int main(){
	Student s1("fox",100,80,90);
	s1.show_data();
	
	Student s2;
	s2.set_data();
	s2.show_data();
	
	return 0;
}
