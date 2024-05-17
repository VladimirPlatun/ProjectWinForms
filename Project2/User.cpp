#include "User.h"

User::User() :username(""), password(""), role("client") {}

User::User(string username, string password, string role) :
	username(username), password(password), role(role) {}

bool User::login(string username, string password)
{
	return this->username == username && this->password == password;
}

string User::registerUser(const std::string& username, const std::string& password, const std::string& confirmPassword, const std::string& role)
{
	string filePath = role == "admin" ? "admins.txt" : "clients.txt";

	if (username.empty())
	{
		return "Поле логина не может быть пустым";
	}

	if (password.empty())
	{
		return "Поле пароля не может быть пустым";
	}

	if (FileManager::userExists(filePath, username))
	{
		return "Пользователь с таким именем уже существует.";
	}

	if (password != confirmPassword)
	{
		return "Пароли не совпадают.";
	}

	if (username.length() < 4)
	{
		return "Логин должен содержать не менее 4 букв";
	}

	if (password.length() <= 4 || !any_of(password.begin(), password.end(), ::isalpha))
	{
		return "Пароль должен быть длинее 4 символов и содержать хотя бы одну букву.";
	}

	string userData = trim(username) + " " + trim(password);
	FileManager::saveToFile(filePath, userData);
	return "success";
}

string User::trim(const string& str)
{
	auto start = str.find_first_not_of(" \t");
	auto end = str.find_last_not_of(" \t");

	return str.substr(start, (end - start + 1));
}