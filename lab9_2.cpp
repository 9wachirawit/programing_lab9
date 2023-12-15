#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int y,int x){
	int i = 0,j = 0;
	if(x > 0 && y > 0)
	while(i < y){
		while(j < x){
			cout << "O";
		j += 1;
		}
		cout << "\n";
		j = 0;
		i += 1;
	}
	else{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
