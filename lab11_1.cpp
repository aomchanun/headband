#include<iostream>
using namespace std;

int main(){
	char grade;
	int i=1;
	int count[5] = {};
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0'){
		    i--;
		    break;
		}
		if(grade == 'A'){
			count[0] += 1;
			i++;
		}else if(grade == 'B'){
			count[1] += 1;
			i++;
		}else if(grade == 'C'){
			count[2] += 1;
			i++;
		}else if(grade == 'D'){
			count[3] += 1;
			i++;
		}else if(grade == 'F'){
			count[4] += 1;
			i++;
		}else{
			cout << "Wrong input. Please input again." << endl;
		} 
		
	}while(true);
	
	
	cout << "In total " << i << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
