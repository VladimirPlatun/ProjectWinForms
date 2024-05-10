#include "User.h"
#include "FileManager.h"

User::User(string username, string password, string role) :
	username(username), password(password), role(role) {}

bool User::login(string username, string password)
{
	return this->username == username && this->password == password;
}

bool User::registerUser(string username, string password, string confirmPassword, string role)
{
	if (password == confirmPassword)
	{
		string userData = username + " " + password;
		string filePath = "users.txt";

		FileManager::saveToFile(filePath, userData);
		return true;
	}
	return false;	
}