#include "User.h"
#include "FileManager.h"

User::User() :username(""), password(""), role("client") {}

User::User(string username, string password, string role) :
	username(username), password(password), role(role) {}

bool User::login(string username, string password)
{
	return this->username == username && this->password == password;
}

string User::registerUser(string username, string password, string confirmPassword, string role)
{
	string filePath = "users.txt";

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

	string userData = username + " " + password;
	FileManager::saveToFile(filePath, userData);
	return "success";
}