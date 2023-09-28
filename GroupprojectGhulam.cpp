// This is a class for employee that creates the fields of first name, last name, 
// street address, state, emergency contact, job title, marital status, user name, user password,
// employee ID, zip code, social security number, phone 1, phone 2, emergency contact phone, and salary. 
// It has getters and setter for each of the fields.  It creates three employees one a manager, a warehouse
// worker, and a office worker. Then it populates the appropriate vector with the employees information.
//
// The user can enter in a new employee, view an employee, remove an employee, edit an employee's information, and exit the program.
// 
#include <iostream>
//#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Employee // A class for holding all the employee information.
{
private:
	string firstName,
		lastName,
		streetAddress,
		state,
		emergencyContactFirstName,
		emergencyContactLastName,
		jobTitle,
		maritalStatus,
		newUserName,
		phone1,
		phone2,
		emergencyPhone,
		employeePassword;

	int empID,
		zipCode,
		socialSecurity,
		salary;

public:
	void setFirstName(string fname);
	void setLastName(string lname);
	void setAddress(string address);
	void setState(string st);
	void setEmergContactFirstName(string efname);
	void setEmergContactLastName(string elname);
	void setPhone1(string phone1);
	void setPhone2(string phone2);
	void setemergPhone(string ephone);
	void setJobTitle(string title);
	void setMaritalStatus(string marital);
	void setNewUserName(string un);
	void setEmpPassword(string epassword);

	void setEmpID(int id);
	void setZip(int zip);
	void setSocNum(int ssnum);
	void setSalary(int sal);

	string getFirstName();
	string getLastName();
	string getAddress();
	string getState();
	string getEmergContactFirstName();
	string getEmergContactLastName();
	string getPhone1();
	string getPhone2();
	string getemergPhone();
	string getJobTitle();
	string getMaritalStatus();
	string getNewUserName();
	string getEmpPassword();

	int getEmpID();
	int getZip();
	int getSocNum();
	int getSalary();

	Employee();

	Employee(int empID, int ssnum, string fname, string lname, string address, string st, int zip,
		string ph1, string ph2, string ename, string ephone, string marital, string title, int salary, string un, string epassword);

};


Employee::Employee() // Default constructor.
{

}

Employee::Employee(int empID, int ssnum, string fname, string lname, string address, string st, int zip, // Constructor with all the variables.
	string ph1, string ph2, string ename, string ephone, string marital, string title, int salary, string un, string epassword)
{

}

// Setters.
void Employee::setFirstName(string fname)
{
	firstName = fname;
}

void Employee::setLastName(string lname)
{
	lastName = lname;
}

void Employee::setAddress(string address)
{
	streetAddress = address;
}

void Employee::setState(string st)
{
	state = st;
}

void Employee::setEmergContactFirstName(string efname)
{
	emergencyContactFirstName = efname;
}

void Employee::setEmergContactLastName(string elname)
{
	emergencyContactFirstName = elname;
}

void Employee::setPhone1(string ph1)
{
	phone1 = ph1;
}

void Employee::setPhone2(string ph2)
{
	phone2 = ph2;
}

void Employee::setemergPhone(string ephone)
{
	emergencyPhone = ephone;
}

void Employee::setJobTitle(string title)
{
	jobTitle = title;
}

void Employee::setMaritalStatus(string marital)
{
	maritalStatus = marital;
}

void Employee::setNewUserName(string un)
{
	newUserName = un;
}

void Employee::setEmpPassword(string epassword)
{
	employeePassword = epassword;
}

void Employee::setEmpID(int id)
{
	empID = id;
}

void Employee::setZip(int zip)
{
	zipCode = zip;
}

void Employee::setSocNum(int ssnum)
{
	socialSecurity = ssnum;
}

void Employee::setSalary(int sal)
{
	salary = sal;
}
// Getters.

string Employee::getFirstName()
{
	return firstName;
}

string Employee::getLastName()
{
	return lastName;
}

string Employee::getAddress()
{
	return streetAddress;
}

string Employee::getState()
{
	return state;
}

string Employee::getEmergContactFirstName()
{
	return emergencyContactFirstName;
}

string Employee::getEmergContactLastName()
{
	return emergencyContactLastName;
}

string Employee::getPhone1()
{
	return phone1;
}

string Employee::getPhone2()
{
	return phone2;
}

string Employee::getemergPhone()
{
	return emergencyPhone;
}

string Employee::getJobTitle()
{
	return jobTitle;
}

string Employee::getMaritalStatus()
{
	return maritalStatus;
}

string Employee::getNewUserName()
{
	return newUserName;
}

string Employee::getEmpPassword()
{
	return employeePassword;
}

int Employee::getEmpID()
{
	return empID;
}

int Employee::getZip()
{
	return zipCode;
}

int Employee::getSocNum()
{
	return socialSecurity;
}

int Employee::getSalary()
{
	return salary;
}

// Constants for menu choices.
const int MAINMENUADD = 1,
MAINMENUREMOVE = 2,
MAINMENUEDIT = 3,
MAINMENUVIEW = 4,
MAINMENUQUIT = 5;
// Constants for employee editing menu.
const int FIRSTNAME = 1,
LASTNAME = 2,
STREETADDRESS = 3,
STATE = 4,
ZIPCODE = 5,
MOBILEPHONE = 6,
HOMEPHONE = 7,
EMERGENCYPHONE = 8,
MARITALSTATUS = 9,
EMERGENCYCONTACTFIRST = 10,
EMERGENCYCONTACTLAST = 11,
SOCIALSECURITY = 12,
JOBTITLE = 13,
SALARY = 14,
EMPLOYEEID = 15,
POSITITON = 16;
// Constants for positions menus.
const int MANAGERS = 1,
WAREHOUSE = 2,
OFFICE = 3,
securityGuard = 4;

int main()
{
	// Variables used throughout the program.
	string firstName,
		lastName,
		streetAddress,
		state,
		emergencyContactFirstName,
		emergencyContactLastName,
		jobTitle,
		maritalStatus,
		newUserName,
		userName,
		phone1,
		phone2,
		emergencyPhone,
		employeePassword,
		password = "",
		position = "";

	int empID = 0,
		zipCode,
		socialSecurity,
		salary,
		removeElement,
		userChoiceAdd = 0,
		userChoiceRemove = 0,
		userChoiceEdit = 0,
		userChoiceView = 0,
		exit = 0,
		numOfNewEmp = 0;

	// Make some vectors.
	vector<Employee> managers;
	vector<Employee> warehouse;
	vector<Employee> office;
	vector<Employee> securityguard;

	// Make a couple of new employees.
	Employee tedSmith;
	Employee rodHack;
	Employee bettyLint;
	Employee boblogan;

	// Creating default employees for each vector.
	// Ted is the CEO.
	tedSmith.setFirstName("Ted");
	tedSmith.setLastName("Smith");
	tedSmith.setEmpID(100);
	tedSmith.setNewUserName("tsmith");
	tedSmith.setEmpPassword("iownthisplace");
	tedSmith.setSalary(550000);
	tedSmith.setJobTitle("CEO");
	tedSmith.setMaritalStatus("M");
	tedSmith.setSocNum(5555555);
	tedSmith.setState("Iowa");
	tedSmith.setAddress("1409 NE 25th ST");
	tedSmith.setZip(50023);
	tedSmith.setPhone1("515-477-7777");
	tedSmith.setPhone2("515-466-6666");
	tedSmith.setEmergContactFirstName("Mary");
	tedSmith.setEmergContactLastName("Smith");
	tedSmith.setemergPhone("515-456-7891");

	managers.push_back(tedSmith); // Open a space for Ted in the vector.

	// Rod is a warehouse worker.
	rodHack.setFirstName("Rod");
	rodHack.setLastName("Hack");
	rodHack.setEmpID(101);
	rodHack.setNewUserName("rhack");
	rodHack.setEmpPassword("iwishownedthisplace");
	rodHack.setSalary(300);
	rodHack.setJobTitle("Warehouse Worker");
	rodHack.setMaritalStatus("M");
	rodHack.setSocNum(5333555);
	rodHack.setState("Iowa");
	rodHack.setAddress("1833 NW 10th ST");
	rodHack.setZip(50024);
	rodHack.setPhone1("515-667-7677");
	rodHack.setPhone2("515-465-6556");
	rodHack.setEmergContactFirstName("Barry");
	rodHack.setEmergContactLastName("Hack");
	rodHack.setemergPhone("515-455-7855");

	warehouse.push_back(rodHack); // Open a spot for Rod in the vector.

	// Betty is a office worker.
	bettyLint.setFirstName("Betty");
	bettyLint.setLastName("Lint");
	bettyLint.setEmpID(102);
	bettyLint.setNewUserName("blint");
	bettyLint.setEmpPassword("officelifesuxz");
	bettyLint.setSalary(90000);
	bettyLint.setJobTitle("Office Worker");
	bettyLint.setMaritalStatus("M");
	bettyLint.setSocNum(5544555);
	bettyLint.setState("Iowa");
	bettyLint.setAddress("1411 SW 23rd ST");
	bettyLint.setZip(50023);
	bettyLint.setPhone1("515-467-7757");
	bettyLint.setPhone2("515-455-6226");
	bettyLint.setEmergContactFirstName("Larry");
	bettyLint.setEmergContactLastName("Lint");
	bettyLint.setemergPhone("515-556-788");

	office.push_back(bettyLint); // Open a spot for Betty in the vector.

	boblogan.setFirstName("Bob");
	boblogan.setLastName("Logan");
	boblogan.setEmpID(103);
	boblogan.setNewUserName("log");
	boblogan.setEmpPassword("logbob324");
	boblogan.setSalary(60000);
	boblogan.setJobTitle("security Guard");
	boblogan.setMaritalStatus("M");
	boblogan.setSocNum(7543432);
	boblogan.setState("Iowa");
	boblogan.setAddress("106 NE 66rd ST");
	boblogan.setZip(50432);
	boblogan.setPhone1("515-434-9534");
	boblogan.setPhone2("515-434-5234");
	boblogan.setEmergContactFirstName("John");
	boblogan.setEmergContactLastName("Devid");
	boblogan.setemergPhone("515-512-6234");

	securityguard.push_back(boblogan); // Open a spot for Betty in the vector

	/*__________Begin UI_________*/
	cout << "Managers: " << managers[0].getFirstName() << " " << managers[0].getLastName() << endl; // Print each worker.
	cout << "Warehouse: " << warehouse[0].getFirstName() << " " << warehouse[0].getLastName() << endl;
	cout << "Office: " << office[0].getFirstName() << " " << office[0].getLastName() << endl;
	cout << "SecurityGuard: " << securityguard[0].getFirstName() << " " << securityguard[0].getLastName() << endl;
	cout << endl; // Space for the output.

	cout << "Welcome to the employee database!" << endl;
	cout << "Username: ";
	cin >> userName;
	cout << "Password: ";
	cin >> password;

	if (userName == "admin" && password == "password")
	{
		do
		{
			cout << endl; // Space for the output..
			cout << "Welcome " << userName << " please select what you'd like to choose." << endl;
			cout << "1. Add user" << endl;
			cout << "2. Remove user" << endl;
			cout << "3. Edit user" << endl;
			cout << "4. Lookup user" << endl;
			cout << "5. Quit" << endl;
			cout << endl;
			cin >> userChoiceAdd;
			cout << endl;

			Employee newEmployee; // Creates new employee to use for entering info.
			switch (userChoiceAdd)
			{
			case MAINMENUADD: // CASE ADD -------------------------------------------------------------------------------------------------------------------------
				cout << "Enter new employee's first name." << endl;
				cin >> firstName;
				newEmployee.setFirstName(firstName); // This is how you set attributes.

				cout << "Enter new employee's last name." << endl;
				cin >> lastName;
				newEmployee.setLastName(lastName);

				cout << "Enter a new employee's ID." << endl;
				cin >> empID;
				newEmployee.setEmpID(empID);

				cout << "Enter new employee's user name." << endl;
				cin >> newUserName;
				getline(cin, newUserName);
				newEmployee.setNewUserName(newUserName);

				cout << "Enter a new employee's employee password." << endl;
				cin >> employeePassword;
				newEmployee.setEmpPassword(employeePassword);

				cout << "Enter a new employee's salary." << endl;
				cin >> salary;
				newEmployee.setSalary(salary);

				cout << "Enter a new employee's job title." << endl;
				cin >> jobTitle;
				getline(cin, jobTitle);
				newEmployee.setJobTitle(jobTitle);

				cout << "Enter a new employee's marital status (S, M)." << endl;
				cin >> maritalStatus;
				newEmployee.setMaritalStatus(maritalStatus);

				cout << "Enter a new employee's social security." << endl;
				cin >> socialSecurity;
				newEmployee.setSocNum(socialSecurity);

				cout << "Enter a new employee's state." << endl;
				cin >> state;
				newEmployee.setState(state);

				cout << "Enter a new employee's street address." << endl;
				cin >> streetAddress;
				getline(cin, streetAddress);
				newEmployee.setAddress(streetAddress);

				cout << "Enter a new employee's zip code." << endl;
				cin >> zipCode;
				newEmployee.setZip(zipCode);

				cout << "Enter a new employee's mobile phone (Example: 515-431-1232)." << endl;
				cin >> phone1;
				newEmployee.setPhone1(phone1);

				cout << "Enter a new employee's home phone (Example: 515-431-1232)." << endl;
				cin >> phone2;
				newEmployee.setPhone2(phone2);

				cout << "Enter a new employee's emergency phone (Example: 515-431-1232)." << endl;
				cin >> emergencyPhone;
				newEmployee.setemergPhone(emergencyPhone);

				cout << "Enter a new employee's marital status (S, M)." << endl;
				cin >> maritalStatus;
				newEmployee.setMaritalStatus(maritalStatus);

				cout << "Enter a new employee's emergency contact's first name." << endl;
				cin >> emergencyContactFirstName;
				newEmployee.setEmergContactFirstName(emergencyContactFirstName);

				cout << "Enter a new employee's emergency contact's last name." << endl;
				cin >> emergencyContactLastName;
				newEmployee.setEmergContactLastName(emergencyContactLastName);

				cout << "Enter a new employee's social security." << endl;
				cin >> socialSecurity;
				newEmployee.setSocNum(socialSecurity);

				cout << "Enter a new employee's job title." << endl;
				cin >> jobTitle;
				newEmployee.setJobTitle(jobTitle);

				cout << "Enter a new employee's salary." << endl;
				cin >> salary;
				newEmployee.setSalary(salary);

				cout << "Enter a new employee's ID." << endl;
				cin >> empID;
				newEmployee.setEmpID(empID);

				cout << endl;
				cout << "What position is the employee in: " << endl;
				cout << "1. Managers" << endl;
				cout << "2. Warehouse" << endl;
				cout << "3. Office" << endl;
				cout << "4.Securityguard" << endl;
				cout << endl;
				cin >> userChoiceAdd;
				cout << endl;
				switch (userChoiceAdd)
				{
				case MANAGERS:
					for (int i = 0; i < managers.size() - 1; i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << managers[i].getFirstName() << " " << managers[i].getLastName();
					}
					break;
				case WAREHOUSE:
					for (int i = 0; i < warehouse.size() - 1; i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << warehouse[i].getFirstName() << " " << warehouse[i].getLastName();
					}
					break;
				case OFFICE:
					for (int i = 0; i < office.size() - 1; i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << office[i].getFirstName() << " " << office[i].getLastName();
					}
					break;
				case securityGuard:
					for (int i = 0; i < securityguard.size() - 1; i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << securityguard[i].getFirstName() << " " << securityguard[i].getLastName();
					}
				}
				cout << endl; // Space for the output.
				break;

			case MAINMENUREMOVE: // CASE REMOVE -------------------------------------------------------------------------------------------------------------------------
				cout << endl;
				cout << "What position is the employee in: " << endl;
				cout << "1. Managers" << endl;
				cout << "2. Warehouse" << endl;
				cout << "3. Office" << endl;
				cout << "4.securityGuard" << endl;
				cout << endl;
				cin >> userChoiceRemove;
				cout << endl;
				switch (userChoiceRemove)
				{
				case MANAGERS:
					for (int i = 0; i < managers.size(); i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << managers[i].getFirstName() << " " << managers[i].getLastName() << endl;
					}
					break;
				case WAREHOUSE:
					for (int i = 0; i < warehouse.size(); i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << warehouse[i].getFirstName() << " " << warehouse[i].getLastName() << endl;
					}
					break;
				case OFFICE:
					for (int i = 0; i < office.size(); i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << office[i].getFirstName() << " " << office[i].getLastName() << endl;
					}
					break;
				case securityGuard:
					for (int i = 0; i < securityguard.size(); i++)
					{
						cout << i + 1 << ". " << securityguard[i].getFirstName() << " " << securityguard[i].getLastName() << endl;
					}
				}
				break;
			
				cout << endl;
				cout << "Which employee would you like to remove: " << endl;
				cin >> removeElement;
				if (userChoiceRemove == MANAGERS) // Remove an element from managers.
				{
					if (removeElement > 1) // If it isn't the default element.
					{
						managers.erase(managers.begin() + removeElement);
					}
					else if (removeElement == 1) // Default element.
					{
						managers.erase(managers.begin());
					}
				}
				if (userChoiceRemove == WAREHOUSE) // Remove an element from warehouse.
				{
					if (removeElement > 1)
					{
						warehouse.erase(warehouse.begin() + removeElement);
					}
					else if (removeElement == 1) // Default element.
					{
						warehouse.erase(warehouse.begin());
					}
				}
				if (userChoiceRemove == OFFICE) // Remove an element from office.
				{
					if (removeElement > 1)
					{
						office.erase(office.begin() + removeElement);
					}
					else if (removeElement == 1) // Default element.
					{
						office.erase(office.begin());
					}
				}
				if (userChoiceRemove == securityGuard) // Remove an element from office.
				{
					if (removeElement > 1)
					{
						securityguard.erase(securityguard.begin() + removeElement);
					}
					else if (removeElement == 1) // Default element.
					{
						securityguard.erase(securityguard.begin());
					}
				}
				break;
				
			case MAINMENUEDIT: // CASE EDIT -------------------------------------------------------------------------------------------------------------------------
				cout << "" << endl;
				cout << "Enter the employee's current position: " << endl;
				cout << "1. Managers" << endl;
				cout << "2. Warehouse" << endl;
				cout << "3. Office" << endl;
				cout << "4. SecurityGuard" << endl;
				cout << "" << endl;
				cin >> userChoiceEdit;
				cout << endl;

				switch (userChoiceEdit)
				{
				case MANAGERS:
					managers.emplace_back(newEmployee);
					for (int i = 0; i < managers.size() - 1; i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << managers[i].getFirstName() << " " << managers[i].getLastName();
					}
					break;
				case WAREHOUSE:
					warehouse.emplace_back(newEmployee);

					for (int i = 0; i < warehouse.size() - 1; i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << warehouse[i].getFirstName() << " " << warehouse[i].getLastName();
					}
					break;
				case OFFICE:
					office.emplace_back(newEmployee);

					for (int i = 0; i < office.size() - 1; i++) // For loop to print the employees information.
					{
						cout << i + 1 << ". " << warehouse[i].getFirstName() << " " << warehouse[i].getLastName();
					}
					break;
				case securityGuard:
					securityguard.emplace_back(newEmployee);
					for (int i = 0; i < securityguard.size() - 1; i++)
					{
						cout << i + 1 << ". " << securityguard[i].getFirstName() << " " << securityguard[i].getLastName();

					}
					break;
				}
				//TODO Jordan: Individual Employee Selection
				do
				{
					cout << "" << endl;
					cout << "Please select what to edit." << endl;
					cout << "1. First name" << endl;
					cout << "2. Last name" << endl;
					cout << "3. Street Address" << endl;
					cout << "4. State" << endl;
					cout << "5. Zip code" << endl;
					cout << "6. Mobile phone" << endl;
					cout << "7. Home phone" << endl;
					cout << "8. Emergency phone" << endl;
					cout << "9. Marital status" << endl;
					cout << "10. Emergency contact first name" << endl;
					cout << "11. Emergency contact last name" << endl;
					cout << "12. Social Security" << endl;
					cout << "13. Job Title" << endl;
					cout << "14. Salary" << endl;
					cout << "15. Employee ID" << endl;
					cout << "16. Position" << endl;
					cout << "" << endl;

					cin >> userChoiceEdit;
					//TODO Jordan: Replace newEmployee with current employee
					switch (userChoiceEdit)
					{
					case FIRSTNAME:
						cout << "Enter " << "" << "'s new first name." << endl;
						cin >> firstName;
						newEmployee.setFirstName(firstName);
						break;
					case LASTNAME:
						cout << "Enter " << "" << "'s new last name." << endl;
						cin >> lastName;
						newEmployee.setLastName(lastName);
						break;
					case STREETADDRESS:
						cout << "Enter " << "" << "'s new street address." << endl;
						cin >> streetAddress;
						getline(cin, streetAddress);
						newEmployee.setAddress(streetAddress);
						break;
					case STATE:
						cout << "Enter " << "" << "'s new state." << endl;
						cin >> state;
						newEmployee.setState(state);
						break;
					case ZIPCODE:
						cout << "Enter " << "" << "'s new zip code." << endl;
						cin >> zipCode;
						newEmployee.setZip(zipCode);
						break;
					case MOBILEPHONE:
						cout << "Enter " << "" << "'s new mobile phone (Example: 515-431-1232)." << endl;
						cin >> phone1;
						newEmployee.setPhone1(phone1);
						break;
					case HOMEPHONE:
						cout << "Enter " << "" << "'s new home phone (Example: 515-431-1232)." << endl;
						cin >> phone2;
						newEmployee.setPhone2(phone2);
						break;
					case EMERGENCYPHONE:
						cout << "Enter " << "" << "'s new emergency phone (Example: 515-431-1232)." << endl;
						cin >> emergencyPhone;
						newEmployee.setemergPhone(emergencyPhone);
						break;
					case MARITALSTATUS:
						cout << "Enter " << "" << "'s new marital status (S, M)." << endl;
						cin >> maritalStatus;
						newEmployee.setMaritalStatus(maritalStatus);
						break;
					case EMERGENCYCONTACTFIRST:
						cout << "Enter " << "" << "'s new emergency contact's first name." << endl;
						cin >> emergencyContactFirstName;
						newEmployee.setEmergContactFirstName(emergencyContactFirstName);
						break;
					case EMERGENCYCONTACTLAST:
						cout << "Enter " << "" << "'s new emergency contact's last name." << endl;
						cin >> emergencyContactLastName;
						newEmployee.setEmergContactLastName(emergencyContactLastName);
						break;
					case SOCIALSECURITY:
						cout << "Enter " << "" << "'s new social security." << endl;
						cin >> socialSecurity;
						newEmployee.setSocNum(socialSecurity);
						break;
					case JOBTITLE:
						cout << "Enter " << "" << "'s new job title." << endl;
						cin >> jobTitle;
						newEmployee.setJobTitle(jobTitle);
						break;
					case SALARY:
						cout << "Enter " << "" << "'s new salary." << endl;
						cin >> salary;
						newEmployee.setSalary(salary);
						break;
					case EMPLOYEEID:
						cout << "Enter " << "" << "'s new ID." << endl;
						cin >> empID;
						newEmployee.setEmpID(empID);
						break;
					case POSITITON:
						//TODO Jordan: Make work for edit
						cout << "What is " << "" << "'s position (Choices: managers, warehouse, office)?" << endl;
						cin >> position;
						cout << endl; // Space for the output.
						if (position == "managers")
						{
							managers.emplace_back(newEmployee);

							for (int i = 0; i < managers.size(); i++) // For loop to print vector contents' first and last names.
							{
								cout << "Current Managers: " << managers[i].getFirstName() << " " << managers[i].getLastName() << endl;
							}
						}
						if (position == "warehouse")
						{
							warehouse.emplace_back(newEmployee);

							for (int i = 0; i < warehouse.size(); i++)
							{
								cout << "Current Warehouse Workers: " << warehouse[i].getFirstName() << " " << warehouse[i].getLastName() << endl;
							}
						}
						if (position == "office")
						{
							office.emplace_back(newEmployee);

							for (int i = 0; i < office.size(); i++)
							{
								cout << "Current Office Workers: " << office[i].getFirstName() << " " << office[i].getLastName() << endl;
							}
						}
						if (position == "securityGard")
							securityguard.emplace_back(newEmployee);
						for (int i = 0; i < securityguard.size(); i++)
						{
							cout << "Current Office Workers: " << securityguard[i].getFirstName() << " " << securityguard[i].getLastName() << endl;
						}
					}
					cout << endl; // Space for the output.
					break;

					cout << "Do you want to exit? (1 - yes or 2 - no)" << endl; // Temperary exit.
					cin >> exit;
				} while (exit == 1);
				break;
			case MAINMENUVIEW: // CASE VIEW -------------------------------------------------------------------------------------------------------------------------
				cout << "What position is the employee in: " << endl;
				cout << "1. Managers" << endl;
				cout << "2. Warehouse" << endl;
				cout << "3. Office" << endl;
				cout << "4. secuityGard" << endl;
				cout << endl;
				cin >> userChoiceView;
				cout << endl; // Space for the output.

				switch (userChoiceView)
				{
				case MANAGERS:
					cout << "----------------------------------------------------------" << endl;
					if (!managers.empty())
					{
						for (int i = 0; i < managers.size(); i++) // For loop to print the managers information.
						{
							cout << managers[i].getFirstName() << " " << managers[i].getLastName() << "'s information: " << endl;
							cout << "Employee Work Infomation- " << endl;
							cout << "ID: " << managers[i].getEmpID() << endl;
							cout << "Username: " << managers[i].getNewUserName() << endl;
							cout << "Password: " << managers[i].getEmpPassword() << endl;
							cout << "Salary: " << managers[i].getSalary() << endl;
							cout << "Job Title: " << managers[i].getJobTitle() << endl;
							cout << "Emplyee Personal information- " << endl;
							cout << "Marital Status: " << managers[i].getMaritalStatus() << endl;
							cout << "Social Secuirty Number: " << managers[i].getSocNum() << endl;
							cout << "State: " << managers[i].getState() << endl;
							cout << "Address: " << managers[i].getAddress() << endl;
							cout << "Zip: " << managers[i].getZip() << endl;
							cout << "Phone 1: " << managers[i].getPhone1() << endl;
							cout << "Phone 2: " << managers[i].getPhone2() << endl;
							cout << "Emergancy Contact: " << managers[i].getEmergContactFirstName() << " " << managers[i].getEmergContactLastName() << endl;
							cout << "Emergancy Phone: " << managers[i].getemergPhone() << endl;
							cout << "----------------------------------------------------------" << endl;
						}
					}
					else
					{
						cout << "There are currently no managers." << endl;
						cout << "----------------------------------------------------------" << endl;
					}
					break;
				case WAREHOUSE:
					cout << "----------------------------------------------------------" << endl;
					if (!warehouse.empty())
					{
						for (int i = 0; i < warehouse.size(); i++) // For loop to print the warehouse workers information.
						{
							cout << warehouse[i].getFirstName() << " " << warehouse[i].getLastName() << "'s information: " << endl;
							cout << "Employee Work Infomation- " << endl;
							cout << "ID: " << warehouse[i].getEmpID() << endl;
							cout << "Username: " << warehouse[i].getNewUserName() << endl;
							cout << "Password: " << warehouse[i].getEmpPassword() << endl;
							cout << "Salary: " << warehouse[i].getSalary() << endl;
							cout << "Job Title: " << warehouse[i].getJobTitle() << endl;
							cout << "Emplyee Personal information- " << endl;
							cout << "Marital Status: " << warehouse[i].getMaritalStatus() << endl;
							cout << "Social Secuirty Number: " << warehouse[i].getSocNum() << endl;
							cout << "State: " << warehouse[i].getState() << endl;
							cout << "Address: " << warehouse[i].getAddress() << endl;
							cout << "Zip: " << warehouse[i].getZip() << endl;
							cout << "Phone 1: " << warehouse[i].getPhone1() << endl;
							cout << "Phone 2: " << warehouse[i].getPhone2() << endl;
							cout << "Emergancy Contact: " << warehouse[i].getEmergContactFirstName() + " " + warehouse[i].getEmergContactLastName() << endl;
							cout << "Emergancy Phone: " << warehouse[i].getemergPhone() << endl;
							cout << "----------------------------------------------------------" << endl;
						}
					}
					else
					{
						cout << "There are currently no warehouse workers." << endl;
						cout << "----------------------------------------------------------" << endl;
					}
					break;
				case OFFICE:
					cout << "----------------------------------------------------------" << endl;
					if (!office.empty())
					{
						for (int i = 0; i < office.size(); i++) // For loop to print the office workers information.
						{
							cout << office[i].getFirstName() << " " << office[i].getLastName() << "'s information: " << endl;
							cout << "Employee Work Infomation- " << endl;
							cout << "ID: " << office[i].getEmpID() << endl;
							cout << "Username: " << office[i].getNewUserName() << endl;
							cout << "Password: " << office[i].getEmpPassword() << endl;
							cout << "Salary: " << office[i].getSalary() << endl;
							cout << "Job Title: " << office[i].getJobTitle() << endl;
							cout << "Emplyee Personal information: " << endl;
							cout << "Marital Status: " << office[i].getMaritalStatus() << endl;
							cout << "Social Secuirty Number- " << office[i].getSocNum() << endl;
							cout << "State: " << office[i].getState() << endl;
							cout << "Address: " << office[i].getAddress() << endl;
							cout << "Zip: " << office[i].getZip() << endl;
							cout << "Phone 1: " << office[i].getPhone1() << endl;
							cout << "Phone 2: " << office[i].getPhone2() << endl;
							cout << "Emergancy Contact: " << office[i].getEmergContactFirstName() + " " + office[i].getEmergContactLastName() << endl;
							cout << "Emergancy Phone: " << office[i].getemergPhone() << endl;
							cout << "----------------------------------------------------------" << endl;
						}
					}
					else
					{
						cout << "There are currently no office workers." << endl;
						cout << "----------------------------------------------------------" << endl;
					}
	
					break;
				case securityGuard:
					cout << "----------------------------------------------------------" << endl;
					if (!securityguard.empty())
					{
						for (int i = 0; i < securityguard.size(); i++)
						{
							cout << securityguard[i].getFirstName() << " " << securityguard[i].getLastName() << "'s information: " << endl;
							cout << "Employee Work Infomation- " << endl;
							cout << "ID: " << securityguard[i].getEmpID() << endl;
							cout << "Username: " << securityguard[i].getNewUserName() << endl;
							cout << "Password: " << securityguard[i].getEmpPassword() << endl;
							cout << "Salary: " << securityguard[i].getSalary() << endl;
							cout << "Job Title: " << securityguard[i].getJobTitle() << endl;
							cout << "Emplyee Personal information- " << endl;
							cout << "Marital Status: " << securityguard[i].getMaritalStatus() << endl;
							cout << "Social Secuirty Number: " << securityguard[i].getSocNum() << endl;
							cout << "State: " << securityguard[i].getState() << endl;
							cout << "Address: " << securityguard[i].getAddress() << endl;
							cout << "Zip: " << securityguard[i].getZip() << endl;
							cout << "Phone 1: " << securityguard[i].getPhone1() << endl;
							cout << "Phone 2: " << securityguard[i].getPhone2() << endl;
							cout << "Emergancy Contact: " << securityguard[i].getEmergContactFirstName() << " " << securityguard[i].getEmergContactLastName() << endl;
							cout << "Emergancy Phone: " << securityguard[i].getemergPhone() << endl;
							cout << "----------------------------------------------------------" << endl;
						}
					}
					else
					{
						cout << "There are currently no managers." << endl;
						cout << "----------------------------------------------------------" << endl;
					}
				}
				break;
			}
		} while (userChoiceAdd != MAINMENUQUIT);
		return 0;
	}
}
