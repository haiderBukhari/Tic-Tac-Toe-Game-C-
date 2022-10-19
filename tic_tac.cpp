#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void newftn()
{
    for (int i = 1; i <= 9; i++)
    {
        if (i == 1 || i == 2 || i == 4 || i == 5 || i == 7 || i == 8)
        {
            cout << i << " | ";
        }

        else if (i == 3 || i == 6 || i == 9)
        {
            cout << i;
            cout << endl;
            cout << "----------";
            cout << endl;
        }
    }
}

int main()
{
    int count = 1;

    newftn();

    srand(time(0));
    char alpha = ' ', alpha1 = ' ', alpha2 = ' ', alpha3 = ' ', alpha4 = ' ', alpha5 = ' ', alpha6 = ' ', alpha7 = ' ', alpha8 = ' ', alph = ' ', alph1 = ' ', alph2 = ' ', alph3 = ' ', alph4 = ' ', alph5 = ' ', alph6 = ' ', alph7 = ' ', alph8 = ' ';
    int ai, pi;
    char dam = ' ', a = ' ', cam = ' ', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', g = ' ', z = ' ', y = ' ';

    string name, name1;
    cout << "Enter the first player name: ";
    cin >> name;

    cout << "Enter the Second player name: ";
    cin >> name1;
    for (int i = 1; i <= count; i++)
    {
        count++;
        if (count <= 9)
        {

            int j;
            string h;
            cout << endl
                 << "(\"X\")   " << name << " Turns : ";
            cin >> j;
            cout << name << " chooses block number " << j << endl;
            if (j == 1)
            {
                alpha = 'a';

                a = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 2)
            {
                alpha1 = 'b';
                b = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 3)
            {
                alpha2 = 'c';
                c = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 4)
            {
                alpha3 = 'd';
                d = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 5)
            {
                alpha4 = 'e';
                e = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 6)
            {
                alpha5 = 'f';
                f = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 7)
            {
                alpha6 = 'g';
                g = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 8)
            {
                alpha7 = 'h';
                y = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }

            else if (j == 9)
            {
                alpha8 = 'i';
                z = 'X';
                cout << endl
                     << a << " | " << b << " | " << c << endl
                     << "---------" << endl
                     << d << " | " << e << " | " << f << endl
                     << "---------" << endl
                     << g << " | " << y << " | " << z << endl;
            }
            if ((alpha == 'a' && alpha1 == 'b' && alpha2 == 'c') || (alpha == 'a' && alpha3 == 'd' && alpha6 == 'g') || (alpha2 == c && alpha5 == 'f' && alpha8 == 'i') || (alpha6 == 'g' && alpha7 == 'h' && alpha8 == 'i') || (alpha == 'a' && alpha4 == 'e' && alpha8 == 'i') || (alpha2 == 'c' && alpha4 == 'e' && alpha6 == 'g'))
            {
                cout << endl
                     << endl
                     << name << " wins! Great" << endl;
                break;
            }
            cout << endl;
            cout << endl
                 << "(\"0\")   " << name1 << " Your Turns :  ";
            cin >> ai;
            cout << endl
                 << name1 << " chooses block number " << ai << endl;

            if (ai == 1)
            {

                if (alpha != 'a')
                {

                    alph = 'a';

                    a = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 2)
            {
                if (alpha1 != 'b')
                {
                    alph1 = 'b';
                    b = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 3)
            {
                if (alpha2 != 'c')
                {
                    alph2 = 'c';
                    c = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 4)
            {
                if (alpha3 != 'd')
                {
                    alph3 = 'd';
                    d = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 5)
            {
                if (alpha4 != 'e')
                {
                    alph4 = 'e';
                    e = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 6)
            {
                if (alpha5 != 'f')
                {
                    alph5 = 'f';
                    f = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 7)
            {
                if (alpha6 != 'g')
                {
                    alph6 = 'g';
                    g = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 8)
            {
                if (alpha7 != 'h')
                {
                    alph7 = 'h';
                    y = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            else if (ai == 9)
            {
                if (alpha8 != 'i')
                {
                    alph8 = 'i';
                    z = '0';
                    cout << endl
                         << a << " | " << b << " | " << c << endl
                         << "---------" << endl
                         << d << " | " << e << " | " << f << endl
                         << "---------" << endl
                         << g << " | " << y << " | " << z << endl;
                }
                else
                {
                    cout << endl
                         << "You are found of cheating\nCanont Overwrite the already existing array";
                    break;
                }
            }

            if (((alph == 'a' && (alph1 == 'b' && alph2 == 'c')) || (alph == 'a' && (alph3 == 'd' && alph6 == 'g')) || (alph2 == 'c' && (alph5 == 'f' && alph8 == 'i')) || (alph6 == 'g' && (alph7 == 'h' && alph8 == 'i')) || (alph == 'a' && (alph4 == 'e' && alph8 == 'i')) || (alph2 == 'c' && (alph4 == 'e' && alph6 == 'g'))))
            {
                cout << endl
                     << endl
                     << name1 << " wins! Great" << endl;
                break;
            }
            
        }
    }
}
