#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <fstream>
#include <iomanip>

using namespace std;

bool A(void);
bool E(void);
bool O(void);
bool P(void);
bool U(void);
bool I(void);
bool C(void);
bool L(void);
bool D(void);
string s, d, f, g, w;
int x = 0, i = 0, y = 0, a = 0, b = 0, z = 0;

int main()
{
    ifstream infile;
    infile.open("input.txt");
    cout<<"\nC++: \n\n";
    while (infile>>s)
    {
        d=s;
        w=s;
        cout<<"The string \""<<s<<"\" ";;

        if (A() == true)
        {
            cout<<"-IS- in the language\n";
            a=0;
            b=0;
        }
        else
        {
            cout<<"-IS NOT- in the language\n";
            a=0;
            b=0;
        }
    }
    cout<<"\n\n";
    system("pause");
    return 0;
}

bool A(void)
{


    if (I())
    {
        if (s[0] == '=')
        {
            s = s.substr(1);

            if (E())
            {
                if (s.length() == 0)
                {
                    if ( a == b)
                    {
                        return true;
                    }
                }
            }
        }
    }
    s=d;
    if (E())
    {
        if (s.length() == 0)
        {
            if ( a == b)
            {
                return true;
            }
        }
    }
        return false;
}

bool E(void)
{
    f=s;
    if (P())
    {
        if (O())
        {
            if (P())
            {
                return true;
            }
        }
    }
    s=f;
    if (P())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool O(void)/////////
{
    if (s[0] == '+')
    {
        s = s.substr(1);
        return true;
    }
    else if (s[0] == '-')
    {
        s = s.substr(1);
        return true;
    }
    else if (s[0] == '*' && s[1] != '*')
    {
        s = s.substr(1);
        return true;
    }
    else if (s[0] == '/')
    {
        s = s.substr(1);
        return true;
    }
    else if (s[0] == '*')
    {
        s = s.substr(1);
        if (s[0] == '*')
        {
            s = s.substr(1);
            return true;
        }
    }
    else
    {
        return false;
    }
}

bool P(void)
{

    if (I())
    {
        return true;
    }
    else if(L())
    {
        return true;
    }
    else if(U())
    {
        if (I())
        {
            return true;
        }
        else if (L())
        {
            return true;
        }
    }
    else if (s[0] == '(')
    {
        while (i < w.length())
        {
            if (w[i] == '(')
            {
                a++;
            }
            if (w[i] == ')')
            {
                b++;
            }
            w = w.substr(1);
        }
        g=s;
        s = s.substr(1);
        if (E())
        {
            if (s[0] == ')')
            {
                f=g;

                if (s[1] == ')')
                {
                    while (s[0] == ')')
                    {
                        s = s.substr(1);
                    }
                    return true;
                }
                else
                {
                    s = s.substr(1);
                    return true;
                }
            }
        }
    }

    else
    {
        return false;
    }
}

bool U(void)
{
    if (s[0] == '+')
    {
        s = s.substr(1);
        return true;
    }
    else if (s[0] == '-')
    {
        s = s.substr(1);
        return true;
    }
    else if (s[0] == '!')
    {
        s = s.substr(1);
        return true;
    }
    else
    {
        return false;
    }
}

bool I(void)
{
    if (C())
    {
        while (C() == true)
        {
            C();
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool C(void)
{
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s = s.substr(1);
        return true;
    }
    else
    {
        return false;
    }
}

bool L(void)
{
    if (D())
    {
        while (D() == true)
        {
         D();
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool D(void)
{
    if (s[0] >= '0' && s[0] <= '9')
    {
        s = s.substr(1);
        return true;
    }
    else
    {
        return false;
    }
}