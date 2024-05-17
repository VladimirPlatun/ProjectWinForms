#pragma once
#ifndef USER_H
#define USER_H

#include "FileManager.h"

#include <string>
#include <cctype>
#include <algorithm>
#include <functional>

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
	string registerUser(const std::string& username, const std::string& password, const std::string& confirmPassword, const std::string& role);
	string trim(const string& str);

};

#endif // USER_H