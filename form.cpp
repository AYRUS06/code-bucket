#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int name_check(string n)
{
    int c = 0;

    for (int i = 0; i < n.length(); i++)
    {
        int k = int(n[i]);
        if (k == 32 || (k < 91 && k > 64) || (k < 123 && k > 96))
            c = 1;
        else
            break;
    }
    return c;
}
int phn_check(string k)
{
    int l = k.length();
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        if ((l != 10) || ((k[i] < 48) || (k[i] > 57)))
            return 0;
    }

    return 1;
}
int email_check(string e)
{
    int l = e.length();
    int k = 0;
    int r = 2;
    for (int i = 0; i< l; i++)
    {
        if (e[i] == '@')
            k = i;
    }
    if ((e[l - 1] == '.') || (e[k + 1] == '.') || (e[0] == '.'))
        r = 0;
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (e[i] == '.')
            {
                r = 0;
                break;
            }
        }
        if (r != 0)
        {
            for (int i = k; i < l; i++)
            {
                if (e[i] == '.' && e[i + 1] != '.')
                {
                    r = 1;
                    break;
                }
            }
        }
    }
    return r;
}
int password_check(string p1, string p2)
{
    int c = 1;
    if (p1.length() == p2.length())
    {
        for (int i = 0; i < p1.length(); i++)
        {
            if (p1[i] != p2[i])
            {
                c = 0;
                break;
            }
        }
    }
    else
        return 0;

    return c;
}

int main()
{
    string name, password1, password2, emailid, n;

    cout << "enter name " << endl;
    cin >> name;
    while (1)
    {
        try
        {
            if (name_check(name) != 1)
            {
                throw "Field is filled incorrectly , Please renter field :";
            }
            else
                break;
        }
        catch (const char *k)
        {
            cout << k << endl;
            cin >> name;
        }
    }
    cout << "ENTER PHONE NUMBER " << endl;
    cin >> n;
    while (1)
    {
        try
        {
            if (phn_check(n) != 1)
            {
                throw "Field is filled incorrectly , Filed must only contain numerics . Renter the field details ";
            }
            else
                break;
        }
        catch (const char *e)
        {
            cout << e << '\n';
            cin >> n;
        }

       
    }
     cout << "ENTER EMAIL ID " << endl;
        cin >> emailid;
    while (1)
    {
        try
        {
            if (email_check(emailid) != 1)
                throw "Incorrect Email . Renter the Email";
            else
                break;
        }
        catch (const char *e)
        {
            cout << e << '\n';
            cin >> emailid;
        }
    }
    cout << " ENTER PASSWORD " << endl;
    cin >> password1 >> password2;
    while (1)
    {
        try
        {
            if (password_check(password1, password2) != 1)
                throw "Both passwords don't match . Renter the second password";
            else
                break;
        }
        catch (const char *e)
        {
            cout << e << '\n';
            cin >> password1 >> password2;
        }
    }
    cout << "FORM SUCCESSFULLY FILLED AND SUBMITTED.      THANK YOU ";

    return 0;
}