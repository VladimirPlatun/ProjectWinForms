#pragma once
#ifndef USER_H
#define USER_H


#include <string>
using namespace std;

class User
{
public:
	string username;
	string password;
	string role;

	User(string username, string password, string role = "client");

	bool login(string username, string password);
	bool registerUser(string username, string password, string confirmPassword, string role);

};

#endif // USER_H