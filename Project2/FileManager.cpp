#include "FileManager.h"
#include <fstream>

void FileManager::saveToFile(const string& filePath, const string& data)
{
	ofstream file(filePath, ios::app);
	if (file.is_open())
	{
		file << data << endl;
		file.close();
	}
	
}
