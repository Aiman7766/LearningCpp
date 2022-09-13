#include <iostream>
#include <regex>
using namespace std;

// Function to check the email id
// is valid or not
bool isValid(const string& email)
{

	// Regular expression definition
	const regex pattern(
		"(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

	// Match the string pattern
	// with regular expression
	return regex_match(email, pattern);
}

// Driver Code
int main()
{
	// Given string email
	string email;
	cout<<"Enter your email to check whether it is valid or not.\n";
	cin>>email;


	// Function Call
	bool ans = isValid(email);

	// Print the result
	if (ans) {
		cout << email << " : "
			<< "valid" << endl;
	}
	else {
		cout << email << " : "
			<< "invalid" << endl;
	}
}
