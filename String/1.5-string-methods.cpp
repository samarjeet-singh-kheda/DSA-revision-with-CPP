// getline, cin.getline, find, erase, strcpy, substr, strcmp, strlen, typeid

#include <bits/stdc++.h>
using namespace std;

int main()
{

    //  *********** GETLINE ***********

    //? char arr1[50] = "Test string";
    //? cin.getline(arr1, 50);
    //? cout << "For Char array: " << arr1 << "\n";

    //? string str1 = "Test string";
    //? getline(cin, str1);
    //? cout << "For string: " << str1 << "\n";

    // string name;
    // int id;

    // //!      Taking id as input
    // cout << "Please enter your id: \n";
    // cin >> id;

    // //!       Takes the empty character as input
    // cout << "Please enter your name: \n";
    // getline(cin, name);

    // //!       Prints id
    // cout << "Your id : " << id << "\n";

    // //!       Prints nothing in name field
    // //!       as "\n" is considered a valid string
    // cout << "Hello, " << name
    //      << " welcome to GfG !\n";

    //  *********** FIND ***********

    //? string str_f1 = "Yes, this is a test string";
    //? char str_f2[25] = "test";

    //? cout << str_f1.find(str_f2) << endl;
    //? cout << str_f1.find("his", 1) << endl;
    //? cout << str_f1.find("test", 5, 2) << endl;

    //? size_t found = str_f1.find("all");
    //? if (found != string::npos)
    //?     cout << "Substring found" << endl;
    //? else
    //?     cout << "Not found" << endl;

    // string str = "geeksforgeeks a computer science";
    // string str1 = "geeks";

    // //!  Find first occurrence of "geeks"
    // size_t found = str.find(str1);
    // if (found != string::npos)
    //     cout << "First occurrence is " << found << endl;

    // //!  Find next occurrence of "geeks".
    // //!  Note here we pass
    // //!  "geeks" as C style string.
    // char arr[] = "geeks";
    // found = str.find(arr, found + 1);
    // if (found != string::npos)
    //     cout << "Next occurrence is " << found << endl;

    //  *********** ERASE ***********

    //? string s3 = "This is a demo string";

    //? cout << "Size before erase: " << s3.size() << endl;

    // //? s3.erase(3, 6);
    // //? s3.erase(s3.begin() + 4);
    // //? s3.erase();
    //? s3.erase(1);
    //? cout << "String after erase: " << s3 << endl;
    //? cout << "Size after erase: " << s3.size() << endl;

    //  *********** STRCPY ***********
    //? char sc1[30] = "This is a demo string";
    //? char sc2[5] = "jojo";

    //? strcpy(sc1, sc2);
    //? cout << sc1 << endl;

    //? strcpy(sc1, "direct string in strcpy");
    //? cout << sc1 << endl;

    //? strcpy(sc1, "direct\tstring\0in strcpy");
    //? cout << sc1 << endl;

    //  *********** SUBSTR ***********
    string str420 = "This is a string for dummies";
    cout << str420.substr(10, 9) << endl;
    cout << str420.substr(10) << endl;
    cout << str420.substr(10, 20) << endl;
    cout << str420.substr(97, 1) << endl;

    //  *********** STRCMP ***********
    char str691[80] = "appla";
    char str692[80] = "applz";
    char str693[80] = "";

    // cout << strcmp(str691, str692) << endl;
    // cout << strcmp(str692, str691) << endl;
    // cout << strcmp(str692, str693) << endl;
    // cout << strcmp("", str693) << endl;
    cout << strcmp("micro", "microsoft") << endl;

    //  *********** STRLEN ***********
    //? char arr[100];
    //? cin.getline(arr, 90);
    //? cout << arr << endl;
    //? cout << strlen(arr) << endl;

    ///////////////////////////////////////////////////////////////////////////////////////

    // char s[50];

    // cin.getline(s, 50, '?');

    // cout<<s<<endl;

    // cout<<"Length of string: "<<strlen(s)<<endl;

    // char str1[26] = "Practice string", str2[20];

    // Copy string ---> //! strcpy(source, destination);
    // strcpy(str2, str1);

    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // cout<<strcmp("rst", "str2")<<endl;  //! OUTPUT --> -1
    // cout<<strcmp("str1", "str1")<<endl;  //! OUTPUT -->  0

    // string str1 = "This is a string";
    // string str2("It's here for test purposes");

    // cout << str1.find("a") << endl; //! OUTPUT --> 8 (it's index)

    // if (str1.find("that") == string::npos)
    //     cout << str1.find("that") << endl; //! OUTPUT --> string::npos

    // if (str2.find("that") == string::npos)
    //     cout << string::npos << endl; //! OUTPUT --> string::npos

    // string num = to_string(1234);

    // cout << num[2] << endl;
    // cout << num[1] << endl;

    // int a = 32;
    // string s = to_string(a);

    // cout << typeid(a).name() << endl;
    // cout << typeid(s).name() << endl;

    return 0;
}