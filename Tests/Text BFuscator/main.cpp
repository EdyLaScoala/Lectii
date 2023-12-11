#include <iostream>
#include <cstring>

char s[2048];
char key[64];

char encryptText(char s[], char key[] = "")
{
    int arg = 0;
    if(key != "") for(int i=0; i<strlen(key); i++) arg += key[i];
    for(int i=0; i<strlen(s); i++) s[i] += arg+1;
    cout << s;
    return *s;
}

using namespace std;

int main()
{
    unsigned short commandNum=0;
    unsigned short encryptionKeyState = 0;
    cout<<"Enter Text: ";
    cin.getline(s, 2048);
    while(true)
    {
        cout << "Commands:\nEncryption     1\nDecryption     2\nExit        0\n";
        cin >> commandNum;
        switch(commandNum)
        {
            case 1:
                encryptText(s);

            case 2:
                switch(encryptionKeyState)
                {
                    case 0:
                        cout << "Please enter an encryption key: ";
                        cin.getline(key, 64);

                }
        }
    }
    cout << endl << "Enter key: ";

    return 0;
}
