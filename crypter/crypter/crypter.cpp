#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;


string xorCrypt(string keyword)
{
	char key[3] = { 'C','Q','D' };
	string output = keyword;

	for (int i = 0; i < keyword.size(); i++)
		output[i] = keyword[i] ^ key[i % sizeof(key) / sizeof(char)];

	return output;

	
}

int main()
{
	string word;
	cout << "------XOR CRYPTER-------"<<endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "\n";
	}
	cout << "Owner[!] : SuperNova"<<"\n";
	for (int i = 0; i < 2; i++)
	{
		cout << "\n";
	}
	cout << "Enter a word : ";
	cin >> word;

	string encrypt = xorCrypt(word);

	cout << "Encrypt : " << encrypt<<endl;
	cout << "Decrypt : " << word;
	

	return 0;
}