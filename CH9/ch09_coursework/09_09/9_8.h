// Student class

#include <string>		// for string
using namespace std;
class Name{
	public:
	
	explicit Name(string = "Shac", string = "O", string = "Neal");
	
	void setFirstName(string firstName) {
		this->firstName = firstName;
	}

	void setMiddleName(string middleName) {
		this->middleName = middleName;
	}

	void setSurName(string surName) {
		this->surName = surName;
	}
	string getFirstName() {
		return firstName;
	}
	string getMiddleName() {
		return middleName;
	}
	string getSurName(){
		return surName;
	}

	private:
		string firstName;
		string middleName;
		string surName;

};

class Student {
public:
	Student( char sex, int yob, 
			string regNumber, string email) {

		// use set functions to initialize the data members ..

		setSex(sex);
		setYearOfBirth(yob);
		setRegNumber(regNumber);
		setEmail(email);
	}

	

	void setSex(char sex) {
		this->sex = sex;
	}

	void setYearOfBirth(int yearOfBirth) {
		this->yearOfBirth = yearOfBirth;
	}

	void setRegNumber(string regNumber) {
		
		this->regNumber = regNumber;
	}

	void setEmail(string email) {
		
		this->email = email;
	}



	char getSex() {
		return sex;
	}

	int getYearOfBirth(int yearOfBirth) {
		return yearOfBirth;
	}

	string getRegNumber() {
		return regNumber;
	}

	string getEmail() {
		return email;
	}

private:
	char sex;
	int yearOfBirth;
	std::string regNumber;
	std::string email;
};
