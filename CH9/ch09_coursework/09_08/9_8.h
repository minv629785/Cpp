// Student class

#include <string>		// for string
using namespace std;
class Student {
public:
	Student(string fN, string mN, string sN, char sex, int yob, 
			string regNumber, string email) {

		// use set functions to initialize the data members ..
		setFirstName(fN);
		setMiddleName(mN);
		setSurName(sN);
		setSex(sex);
		setYearOfBirth(yob);
		setRegNumber(regNumber);
		setEmail(email);
	}

	void setFirstName(string firstName) {
		this->firstName = firstName;
	}

	void setMiddleName(string middleName) {
		this->middleName = middleName;
	}

	void setSurName(string surName) {
		this->surName = surName;
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

	string getFirstName() {
		return firstName;
	}
	string getMiddleName() {
		return middleName;
	}
	string getSurName(){
		return surName;
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
	std::string firstName;
	std::string middleName;
	std::string surName;
	char sex;
	int yearOfBirth;
	std::string regNumber;
	std::string email;
};
