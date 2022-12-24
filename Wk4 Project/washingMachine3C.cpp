#include <iostream>
#include <string>
using namespace std;

// I created a class named Member and I added variables that will be displayed on screen.
class Member {
	// It has private attributes and get and set attributes.
private:
	string name;
	string phoneNum;
	string paymentInfo;
	string cycles;

public:
	Member(string name, string phoneNum, string paymentInfo, string cycles) {
		this->name = name;
		this->phoneNum = phoneNum;
		this->paymentInfo = paymentInfo;
		this->cycles = cycles;
	}
	void setName(string name) {
		this->name = name;
	}
	void setPhone(string phoneNum) {
		this->phoneNum;
	}
	void setPayment(string paymentInfo) {
		this->paymentInfo;
	}
	void setCycles(string cycles) {
		this->cycles;
	}
	string getName() {
		return name;
	}
	string getPhone() {
		return phoneNum;
	}
	string getPayment() {
		return paymentInfo;
	}
	string getCycles() {
		return cycles;
	}
	// When you call the print function it will display the info of the member.
	string print() {
		return "The member name is: " + getName() +
			" \nPhone number: " + getPhone() +
			" \nPayment on file: " + getPayment() + 
			" \nYou have this amount of cycles left: " + getCycles();
	}
};

int main() {

	// I called the Member class and created a member object.
	Member member(" Anthony Roman ", " 1234567890 ", " Credit ", " 10 ");
	// This is the print function that will print the member info on screen.
	cout << member.print();
	

	return 0;
}