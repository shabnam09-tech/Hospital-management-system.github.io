#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <windows.h>

// Function Declaration

void menu();
void pascode();
void cpascode();

using namespace std;

// declaring class one

class one
{
public:
    virtual void get() = 0;
    virtual void show() = 0;
};

// class information


class info : public one
{
public:
    char name[50], time[50];
    int num, age;
    void get()
    {
        system("cls");
        cin.sync();
        cout <<"\n Enter The Patient name =";
        cin.getline(name, 50);
        cout << "\nEnter The Appointment Time =";
        cin.getline(time, 50);
        cout << "\nEnter Age =";
        cin >> age;
        cout << "\nEnter Appointment No =";
        cin >> num;
    }
    void show()
    {
        cout << "\nName =" << name;
        cout << "\nAge = " << age;
        cout << "\nNo = " << num;
        cout << "\nTime" << time;
    }
};

// class Rana

class rana : public info
{
public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Rana.txt", ios::app | ios::binary);
        a1.get();
        out.write((char *)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has Been Saved ";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("rana.txt");
        if (in==NULL)
        {

            cout << "\n\nNo Data In the File ";
            cout << "\n\n\t\tPress Any Key To Continue : ";
            getch();
            menu();
        }
        else
        {

            while (!in.eof())
            {
                in.read((char *)&a1, sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }
};

// class Dr Waqar

class waqar : public info
{
public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("waqar.txt", ios::app | ios::binary);
        a1.get();
        out.write((char *)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has Been Saved ";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("waqar.txt");
        if (in == NULL)
        {

            cout << "\n\nNo Data In the File ";
            cout << "\n\n\t\tPress Any Key To Continue : ";
            getch();
            menu();
        }
        else
        {

            while (!in.eof())
            {
                in.read((char *)&a1, sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }
};

// class Dr.Ahmad

class Ahmad : public info
{
public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Ahmad.txt", ios::app | ios::binary);
        a1.get();
        out.write((char *)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has Been Saved ";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("Ahmad.txt");
        if (in == NULL)
        {

            cout << "\n\nNo Data In the File ";
            cout << "\n\n\t\tPress Any Key To Continue : ";
            getch();
            menu();
        }
        else
        {

            while (!in.eof())
            {
                in.read((char *)&a1, sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }
};

class staff : public one
{
public:
    char all[999];
    char name[50], age[20], sal[30], pos[20];
    ;

    void get()
    {
        ofstream out("staff.txt", ios::app);
        {
            system("cls");
            cin.sync();
            cout << "\nEnter Name = ";
            cin.getline(name, 50);
            cout << "\nEnter Age = ";
            cin.getline(age, 20);
            cout << "\nEnter Salary = ";
            cin.getline(sal, 30);
            cout << "\nEnter Working Position =";
            cin.getline(pos, 20);
        }

        out << "\nName = " << name << "\nAge " << age << "\nSalary" << sal << "\nWorking Position\n"
            << pos;
        out.close();
        cout << "\n\nYour Information has been Saved :\n\t\t\tpress any key to continue  ";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("staff.txt");
        if (!in)
        {
            cout << "File open error";
        }
        while (!(in.eof()))
        {
            in.getline(all, 999);
            cout << all << endl;
        }
        in.close();
        cout << "\n\n\t\t\tPress Any Key To Continue : ";
        getch();
         menu();
    
    }
};

/////////////////////////////////////////////////////class information/////////////////////////////////////////////
class information
{
public:
    void drinfo()
    {
        system("cls");
        system("color F3");
        cout << "\n=============================================================================\n";
        cout << "\n\n\t\t(Three Doctor Available) \n\n \t\t[Information And Timing Are Given Below]\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "\t\tDr Available:\n";
        cout << "\t\tDr. Rana (skin specialist)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "\tMonday To Friday\t\t9AM TO 5PM\n";
        cout << "\tSaturday        \t\t9AM TO 1PM\n";
        cout << "\tSunday          \t\t Off\n";
        cout << "\n--------------------------------------------------------------------------------\n";
        cout << "\t\tDr. Waqar (child specialist)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "\tMonday To Friday\t\t2PM TO 10PM\n";
        cout << "\tSaturday        \t\t8AM TO 1PM\n";
        cout << "\tSunday          \t\t12PM TO 9PM\n";
        cout << "\n--------------------------------------------------------------------------------\n";
        cout << "\t\tDr. Ahmad (DVM)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "\tMonday To Friday\t\t8AM TO 5PM\n";
        cout << "\tSaturday        \t\t10AM TO 1PM\n";
        cout << "\tSunday          \t\t Off\n";
        cout << "\n--------------------------------------------------------------------------------\n";
        cout << "\nPress Any Key For Continue: ";
        getch();
        menu();
    }
};

void call_dr()
{
    system("cls");
    int choice;
    cout << "\n\n\t\t Press 1 for Dr Rana \n\n\t\t Press 2 for Dr Waqar \n\n\t\t Press 3 for Dr Ahmad ";
    cin >> choice;

    one *ptr;
    rana s3;
    waqar s4;
    Ahmad s5;
    if (choice == 1)
    {
        ptr = &s3;
        ptr->get();
    }
    if (choice == 2)
    {
        ptr = &s4;
        ptr->get();
    }
    if (choice == 3)
    {
        ptr = &s5;
        ptr->get();
    }
    else
    {
cout<<"Sorry invalid choice: ";
getch();
menu();
    }
}

void menu()
{
    system("cls");
    system("color FC");

    cout << "\n";
    cout << "\n";

    cout << "\t\t     |  +++++++++++++++++ MAIN MENU +++++++++++++++++  | \n";
    cout << "\t\t     |        Hospital Management System               |\n";
    cout << "\t\t     |=================================================|   \n";

    cout << "\n----------------------------------------------------------------------------------------------\n";
    cout << "\t\t                           Please Select Any Option                              \n  ";
    cout << "\n\n\t1-\t\tPress 1 For Available Doctor Information\n\n";
    cout << "\t2-\t\tPress 2 For Doctor Appointment\n\n";
    cout << "\t3-\t\tPress 3 For Saving Staff Information\n\n";
    cout << "\t4-\t\tPress 4 For Checking Staff Information Menu:\n\n ";
    cout << "\t5-\t\tPress 5 For Change Password or Create Password   :\n\n ";
    cout << "\t6-\t\t[          Press 6 For Logout        ]\n ";

    cout << "\n=============================================================================\n";
    cout << "\n\n\t\tPlease Enter Your Choice : ";
    information a1;
    one *ptr;
    staff a2;
    int a;
    cin >> a;
    if (a == 1)
    {
a1.drinfo();
    }
    else if (a == 2)
    {
    call_dr();
    }
    else if (a == 3)
    {
ptr = &a2;
ptr->get();
    }
   
    else if (a == 4)
    {
ptr = &a2;
ptr->show();
    }
else if (a == 5)
{
            cpascode();
}
else if (a == 6)
{
            pascode();
}
else
{
            cout << "Sorry Invalid Choice: ";
}
    }

    void pascode()
    {
system("cls");
char p1[50], p2[50], p3[50];
system("color Fc");
ifstream in("password.text");
{
            cin.sync();

            cout << "\n\n\n\n\n\n\n\t\tEnter The Password: ";
            cin.getline(p1, 50);
            cin.getline(p2, 50);
            if (strcmp(p2, p1) == 0)
            {

                menu();
            }
            else
            {
                cout << "\n\n\t\t\tIncorrect Password Try Again\n";
                Sleep(999);
                pascode();
            }
        }
            in.close();

    }
void cpascode()
{
            char n[50];
            system("cls");
            ofstream out("password.txt");
            {
                cin.sync();
                cout << "\n\n\n\t\t\tEnter The New Password ";
                cin.getline(n, 50);
                out << n;
            }
            out.close();
            cout << "\n\nYour Password has been saved : ";
            getch();
            menu();
}

            int main()
            {
                pascode();
                system("pause");
            }


