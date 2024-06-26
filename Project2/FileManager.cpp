#include "FileManager.h"


void FileManager::saveToFile(const string& filePath, const string& data)
{
	ofstream file(filePath, ios::app);
	if (file.is_open())
	{
		file << data << endl;
		file.close();
	}
	
}

bool FileManager::userExists(const string& filePath, const string& username)
{
	ifstream file(filePath);
	string line;
	while (getline(file, line))
	{
		stringstream ss(line);
		string existingUsername;
		getline(ss, existingUsername, ' ');
		if (existingUsername == username)
		{
			return true;
		}
	}
	return false;
}

bool FileManager::validateUserCredentials(const string& filePath, const string& username, const string& password)
{
	ifstream file(filePath);
	string line;
	while (getline(file, line))
	{
		stringstream ss(line);
		string storedUsername, storedPassword;
		ss >> storedUsername >> storedPassword;
		if (storedUsername == username && storedPassword == password)
		{
			file.close();
			return true;
		}
	}
	file.close();
	return false;
}