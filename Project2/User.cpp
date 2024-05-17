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
		return "���� ������ �� ����� ���� ������";
	}

	if (password.empty())
	{
		return "���� ������ �� ����� ���� ������";
	}

	if (FileManager::userExists(filePath, username))
	{
		return "������������ � ����� ������ ��� ����������.";
	}

	if (password != confirmPassword)
	{
		return "������ �� ���������.";
	}

	if (username.length() < 4)
	{
		return "����� ������ ��������� �� ����� 4 ����";
	}

	if (password.length() <= 4 || !any_of(password.begin(), password.end(), ::isalpha))
	{
		return "������ ������ ���� ������ 4 �������� � ��������� ���� �� ���� �����.";
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