#include <iostream>
#include <cstring>

char s[2048];
char key[64];
char encryptText(char s[], char key[])
{
    int arg = 0;
    for(int i=0; i<strlen(key); i++) arg += key[i];
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
        cout << "Commands:\nEncryption     1\nDecryption     2\nExit        0";
        cin >> commandNum;
        if(commandNum == 1)
        {
            encryptText(s, )
            //switch(encryptionKeyState)
            //{
                
            //}
        }
    }
    cout << endl << "Enter key: ";

    return 0;
}
