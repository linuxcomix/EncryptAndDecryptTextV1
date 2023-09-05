#include <iostream>
#include <string>
using namespace std;

string ReadNumber(string Text)
{
	string Name;

	cout << Text << ": ";
	getline(cin, Name);

	return Name;
}

short SelectOption()
{
	short Selection;

	cout << "\nSelect Option\n";
	cout << "(1) Encryption\n";
	cout << "(2) Decryption\n";

	do
	{
		cout << "\nEnter: ";
		cin >> Selection;

	} while (Selection < 1 || Selection >2);
	
	return Selection;
}

string Encryption(string Name, short EncryptionKey)
{
	for (int x = 0; x <= Name.length(); x++)
	{
		Name[x] = char((int)Name[x] + EncryptionKey);
	}
	return Name;
}

string Decryption(string Name, short EncryptionKey)
{
	for (int x = 0; x <= Name.length(); x++)
	{
		Name[x] = char((int)Name[x] - EncryptionKey);
	}
	return Name;
}



int main()
{
	short EncryptionKey = 2; //You Can Modify The Number as You Like.

	string ReadFunction = ReadNumber("Enter The Name");
	string EncryptionText = Encryption(ReadFunction, EncryptionKey);
	string DecryptionText = Decryption(ReadFunction, EncryptionKey);

	if (SelectOption() == 1)
		cout << endl << EncryptionText << endl;
	else
		cout << endl << DecryptionText << endl;

}
