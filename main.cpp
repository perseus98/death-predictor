#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Person{
 	string name;
 	int age;
 	int life_exp;
 	public:
 		Person(string str,int a){
 			name = str;
 			age=a;
 			life_exp=100-a;
 		}
 		void show(){
 			cout<<"\nName           : "<<name<<endl;
 			cout<<"\nAge  		 : "<<age<<endl;
 			cout<<"\nLife Expendency: "<<life_exp<<endl;
 		}
 		int getLifeExp(){
 			return life_exp;
		 }
		void calculate(int val){
			life_exp+=val;
		}
	};
int showMainMenu(){
	int choice;
	cout<<"\n ===========================================";
	cout<<"\n ===============  Main Menu  ===============";
	cout<<"\n  1) Start ";
	cout<<"\n  2) Exit ";
	cout<<"\n  choose b/w (1/2) =>  ";
	cin>>choice;
	cout<<"\n ===========================================";
	return choice;
}
void start(){
	system("cls");
	int i;
	cout<<"Enter val >";
	cin>>i;
	cout<<"\n "<<calculate(i)<<" === "<<calculate(-i);
	
}
int main(){
	bool end = false;
	while(end!=true){
	switch(showMainMenu()){
		case 1:start();
				end = true;
				 break;
		case 2:cout<<"\n\n Thanks for playing";
				end = true;
				 break;
		default:cout<<"INVALID CHOICE";
	}	
	}
//  Person obj("prashant",20);
//  obj.show();
  return 0;
}


