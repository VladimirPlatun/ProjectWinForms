#pragma once
#ifndef USER_H
#define USER_H

#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

class User
{
public:
	string username;
	string password;
	string role;

	User();
	User(string username, string password, string role = "client");

	bool login(string username, string password);
	string registerUser(string username, string password, string confirmPassword, string role);

};

#endif // USER_H