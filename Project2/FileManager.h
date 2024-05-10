#pragma once
#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>

using namespace std;

class FileManager
{
public:
	static void saveToFile(const string& filePath, const string& data);
};

#endif //FILEMANAGER_H

