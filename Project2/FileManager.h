#pragma once
#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class FileManager
{
public:
	static void saveToFile(const string& filePath, const string& data);
	static bool userExists(const string& filePath, const string& username);
	static bool validateUserCredentials(const string& filePath, const string& username, const string& password);

};

#endif //FILEMANAGER_H

