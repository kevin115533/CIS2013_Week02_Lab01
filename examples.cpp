#include <iostream>
using namespace std;

int main(){
	int room_length = 5;
	int room_width = 10;
	float room_radius = 10.0;
	float room_circle_area = (room_radius * room_radius) * 3.14;
	bool keep_running = true;
	char question = 'y';

	while(keep_running){;
	
	cout << "Enter your length number: ";
	cin >> room_length;

	cout << "Enter your width number: ";
	cin >> room_width;

	if(room_length == room_width){
	cout << "Length is greater than width" << endl;
	} else {
	cout << "Length and Width are not the same" << endl;
	}
	cout << "Run again? (y/n): ";
	cin >> question;
	
	if(question != 'y') {keep_running = false;}
	}
	
	return 0;
}