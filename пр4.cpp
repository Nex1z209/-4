#include <iostream>
using namespace std;
int main() {
	int userNumber;
	int Multiplier = 1;
	int userAnswer;
	cout << "Enter a number:" << endl;
	cin >> userNumber;
	while (Multiplier <= 9) {
		cout << "Solve the example:" << userNumber << " * " << Multiplier << endl;
		cout << "Answer:";
		cin >> userAnswer;
		if (userAnswer == userNumber * Multiplier) {
			cout << "The answer is correct!" << endl;
			Multiplier++;
		}
		else {
		cout << "Answer is incorrect" << endl;
		return 0;
		}
		
	}
	
	
		    cout << "The examples are solved, congratulations!" << endl;
		return 0;
}
