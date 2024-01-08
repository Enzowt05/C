#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
//This is a code for transcribing messages by entering a key
int main(int argc, string argv[])
{
    string key = argv[1];
    int length = strlen(key);
    bool upper = true;
    char conversion[26];
    char lowercon[26];
    int same[26];
    for (int i = 0; i < length; i++)
    {
        same[i] = 0;
        conversion[i] = argv[1][i];
        lowercon[i] = conversion[i];
    }

    if (argc != 2 || argv[1][0] == ' ')
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (length != 26)
    {
        printf("Key must contain 26 characteres\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        if (!isalpha(conversion[i]))
        {
            printf("Key must contain 26 alphabetic characteres\n");
            return 1;
        }
        if (!isupper(conversion[i]))
        {
            if (!islower(conversion[i]))
            {
                printf("All characters must be in uppercase\n");
                return 1;
            }
            upper = true;
        }
        else if (!islower(conversion[i]))
        {
            if (!isupper(conversion[i]))
            {
                printf("All characters must be in lowercase\n");
                return 1;
            }
            upper = false;
        }
    }
    for (int i = 0; i < length; i++)
    {
        same[i] = 0;
        for (int j = 0; j < length; j++)
        {
            if (conversion[i] == conversion[j])
            {
                same[i] = same[j] + 1;
            }
            if (same[j] > 1)
            {
                printf("All characters must be unique\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (isupper(conversion[i]))
        {
            lowercon[i] = (tolower(lowercon[i]));
        }
        else
        {
            lowercon[i] = (toupper(lowercon[i]));
        }
    }

    string plaintext = get_string("plaintext: ");
    int length_text = strlen(plaintext);
    char plain[length_text];
    printf("ciphertext: ");
    for (int i = 0; i < length_text; i++)
    {
        plain[i] = plaintext[i];

        if (isalpha(plain[i]))
        {

            if (isupper(plain[i]))
            {
                if (upper == false)
                {
                    switch (plain[i])
                    {
                        case 65:
                            printf("%c", conversion[0]);
                            break;
                        case 66:
                            printf("%c", conversion[1]);
                            break;
                        case 67:
                            printf("%c", conversion[2]);
                            break;
                        case 68:
                            printf("%c", conversion[3]);
                            break;
                        case 69:
                            printf("%c", conversion[4]);
                            break;
                        case 70:
                            printf("%c", conversion[5]);
                            break;
                        case 71:
                            printf("%c", conversion[6]);
                            break;
                        case 72:
                            printf("%c", conversion[7]);
                            break;
                        case 73:
                            printf("%c", conversion[8]);
                            break;
                        case 74:
                            printf("%c", conversion[9]);
                            break;
                        case 75:
                            printf("%c", conversion[10]);
                            break;
                        case 76:
                            printf("%c", conversion[11]);
                            break;
                        case 77:
                            printf("%c", conversion[12]);
                            break;
                        case 78:
                            printf("%c", conversion[13]);
                            break;
                        case 79:
                            printf("%c", conversion[14]);
                            break;
                        case 80:
                            printf("%c", conversion[15]);
                            break;
                        case 81:
                            printf("%c", conversion[16]);
                            break;
                        case 82:
                            printf("%c", conversion[17]);
                            break;
                        case 83:
                            printf("%c", conversion[18]);
                            break;
                        case 84:
                            printf("%c", conversion[19]);
                            break;
                        case 85:
                            printf("%c", conversion[20]);
                            break;
                        case 86:
                            printf("%c", conversion[21]);
                            break;
                        case 87:
                            printf("%c", conversion[22]);
                            break;
                        case 88:
                            printf("%c", conversion[23]);
                            break;
                        case 89:
                            printf("%c", conversion[24]);
                            break;
                        case 90:
                            printf("%c", conversion[25]);
                            break;
                    }
                }
                else
                {
                    switch (plain[i])
                    {
                        case 65:
                            printf("%c", lowercon[0]);
                            break;
                        case 66:
                            printf("%c", lowercon[1]);
                            break;
                        case 67:
                            printf("%c", lowercon[2]);
                            break;
                        case 68:
                            printf("%c", lowercon[3]);
                            break;
                        case 69:
                            printf("%c", lowercon[4]);
                            break;
                        case 70:
                            printf("%c", lowercon[5]);
                            break;
                        case 71:
                            printf("%c", lowercon[6]);
                            break;
                        case 72:
                            printf("%c", lowercon[7]);
                            break;
                        case 73:
                            printf("%c", lowercon[8]);
                            break;
                        case 74:
                            printf("%c", lowercon[9]);
                            break;
                        case 75:
                            printf("%c", lowercon[10]);
                            break;
                        case 76:
                            printf("%c", lowercon[11]);
                            break;
                        case 77:
                            printf("%c", lowercon[12]);
                            break;
                        case 78:
                            printf("%c", lowercon[13]);
                            break;
                        case 79:
                            printf("%c", lowercon[14]);
                            break;
                        case 80:
                            printf("%c", lowercon[15]);
                            break;
                        case 81:
                            printf("%c", lowercon[16]);
                            break;
                        case 82:
                            printf("%c", lowercon[17]);
                            break;
                        case 83:
                            printf("%c", lowercon[18]);
                            break;
                        case 84:
                            printf("%c", lowercon[19]);
                            break;
                        case 85:
                            printf("%c", lowercon[20]);
                            break;
                        case 86:
                            printf("%c", lowercon[21]);
                            break;
                        case 87:
                            printf("%c", lowercon[22]);
                            break;
                        case 88:
                            printf("%c", lowercon[23]);
                            break;
                        case 89:
                            printf("%c", lowercon[24]);
                            break;
                        case 90:
                            printf("%c", lowercon[25]);
                            break;
                    }
                }
            }
            else
            {
                if (upper == false)
                {
                    switch (plain[i])
                    {
                        case 97:
                            printf("%c", lowercon[0]);
                            break;
                        case 98:
                            printf("%c", lowercon[1]);
                            break;
                        case 99:
                            printf("%c", lowercon[2]);
                            break;
                        case 100:
                            printf("%c", lowercon[3]);
                            break;
                        case 101:
                            printf("%c", lowercon[4]);
                            break;
                        case 102:
                            printf("%c", lowercon[5]);
                            break;
                        case 103:
                            printf("%c", lowercon[6]);
                            break;
                        case 104:
                            printf("%c", lowercon[7]);
                            break;
                        case 105:
                            printf("%c", lowercon[8]);
                            break;
                        case 106:
                            printf("%c", lowercon[9]);
                            break;
                        case 107:
                            printf("%c", lowercon[10]);
                            break;
                        case 108:
                            printf("%c", lowercon[11]);
                            break;
                        case 109:
                            printf("%c", lowercon[12]);
                            break;
                        case 110:
                            printf("%c", lowercon[13]);
                            break;
                        case 111:
                            printf("%c", lowercon[14]);
                            break;
                        case 112:
                            printf("%c", lowercon[15]);
                            break;
                        case 113:
                            printf("%c", lowercon[16]);
                            break;
                        case 114:
                            printf("%c", lowercon[17]);
                            break;
                        case 115:
                            printf("%c", lowercon[18]);
                            break;
                        case 116:
                            printf("%c", lowercon[19]);
                            break;
                        case 117:
                            printf("%c", lowercon[20]);
                            break;
                        case 118:
                            printf("%c", lowercon[21]);
                            break;
                        case 119:
                            printf("%c", lowercon[22]);
                            break;
                        case 120:
                            printf("%c", lowercon[23]);
                            break;
                        case 121:
                            printf("%c", lowercon[24]);
                            break;
                        case 122:
                            printf("%c", lowercon[25]);
                            break;
                    }
                }
                else
                {
                    switch (plain[i])
                    {
                        case 97:
                            printf("%c", conversion[0]);
                            break;
                        case 98:
                            printf("%c", conversion[1]);
                            break;
                        case 99:
                            printf("%c", conversion[2]);
                            break;
                        case 100:
                            printf("%c", conversion[3]);
                            break;
                        case 101:
                            printf("%c", conversion[4]);
                            break;
                        case 102:
                            printf("%c", conversion[5]);
                            break;
                        case 103:
                            printf("%c", conversion[6]);
                            break;
                        case 104:
                            printf("%c", conversion[7]);
                            break;
                        case 105:
                            printf("%c", conversion[8]);
                            break;
                        case 106:
                            printf("%c", conversion[9]);
                            break;
                        case 107:
                            printf("%c", conversion[10]);
                            break;
                        case 108:
                            printf("%c", conversion[11]);
                            break;
                        case 109:
                            printf("%c", conversion[12]);
                            break;
                        case 110:
                            printf("%c", conversion[13]);
                            break;
                        case 111:
                            printf("%c", conversion[14]);
                            break;
                        case 112:
                            printf("%c", conversion[15]);
                            break;
                        case 113:
                            printf("%c", conversion[16]);
                            break;
                        case 114:
                            printf("%c", conversion[17]);
                            break;
                        case 115:
                            printf("%c", conversion[18]);
                            break;
                        case 116:
                            printf("%c", conversion[19]);
                            break;
                        case 117:
                            printf("%c", conversion[20]);
                            break;
                        case 118:
                            printf("%c", conversion[21]);
                            break;
                        case 119:
                            printf("%c", conversion[22]);
                            break;
                        case 120:
                            printf("%c", conversion[23]);
                            break;
                        case 121:
                            printf("%c", conversion[24]);
                            break;
                        case 122:
                            printf("%c", conversion[25]);
                            break;
                    }
                }
            }
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");

    return 0;
}
