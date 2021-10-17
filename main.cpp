#include <iostream>
#include "Hospital.h"
using namespace std;

//made by Devdeep J. S. -202001150
//        Deep Shah     -202001129

int main()
{
    // default
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                      WELCOME TO                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                 COVID RESOURCE PORTAL                                 |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
    cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    system("pause");
    system("cls");
    int n;
    while(1)
    {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\t   COVID RESOURCE PORTAL \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

a:
cout<<"\t\t\t\t\t\tEnter your choice:";
cin>>n;
cout<<"\n\n\n";
if(n>2||n<1)
{
cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
cout<<"\t\t\t\t\t\tTry again...........\n\n";
goto a;
}

        switch(n)
        {
        case 1:
        {
            Hospital a;
            a.get_Patient_Detail();
            break;
        }
        case 2:
            goto end;
        }
    }
end:
    Hospital c;
    c.deQueue();

    return 0;
}
