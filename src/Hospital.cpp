#include "Hospital.h"
#include <bits/stdc++.h>

using namespace std;
patient h1,h2,h3,h4,h5; //here 5 objects are being made which represents 5 hospitals
queue<structure> Queue;
structure st;

void Hospital::get_Patient_Detail()
{
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    cout<<"\n\n\t\t\t\t\t\t\t\t\t"<< asctime (timeinfo);

end1:
    cout<<"Enter your name: ";
   cin>>name;
    cout<<"Enter your address: ";
    cin>>address;
    cout<<"Enter your contact number: ";
    cin>>contact;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your sex: ";
    cin>>sex;
    cout<<"Enter your blood group: ";
    cin>>blood_group;
    cout<<"Enter if you have any major disease in past: ";
    cin>>disease_past;
    my_location();
}
void Hospital::print_hospital_data(int l)
{
    int num;
    int c=0;
    cout<<"Enter your requirement: \n 1. Simple beds \n 2. Ventilator beds \n 3. Oxygen cylinder \n 4. Remdesivir \n 5. Vaccine \n 6. To exit \n ";
    while (1)
    {

        if (c>0)
        {
            cout<<"Enter your requirement: ";
        }
        cin>>num;
        switch(num)
        {
        case 1:
        {
            st.n=name;
            st.loc=l;
            st.q=1;
            st.s=1;
            Queue.push(st);
            break;
        }
        case 2:
        {
            st.n=name;
            st.loc=l;
            st.q=1;
            st.s=2;
            Queue.push(st);
            break;
        }
        case 3:
        {
            st.n=name;
            int n;
            cout<<"Enter the quantity : ";
            cin>>n;
            st.loc=l;
            st.q=n;
            st.s=3;
            Queue.push(st);
            break;
        }
        case 4:
        {
            st.n=name;
            int n;
            cout<<"Enter the quantity : ";
            cin>>n;
            st.loc=l;
            st.q=n;
            st.s=4;
            Queue.push(st);
            break;
        }
        case 5:
        {
            st.n=name;
            string aadhar_num;
            cout<<"Enter your Aadhar card number : ";
            cin>>aadhar_num;
            int n;
            cout<<"Enter the quantity : ";
            cin>>n;
            st.loc=l;
            st.q=n;
            st.s=5;
            Queue.push(st);
            break;
        }
        case 6:
        {
            cout<<"Thank you\n";
            goto end1;
        }
        default :
            cout<<"Invalid input. Please try again.\n";
        }
        c++;
    }
end1:
    return;
}
void Hospital::print_patient_data()
{
    cout<<name<<"\n ";
    cout<<address<<"\n ";
    cout<<contact<<"\n ";
    cout<<age<<"\n ";
    cout<<sex<<"\n ";
}
void Hospital::deQueue()
{
    while ( !Queue.empty())
    {
        if (Queue.front().loc==1)
        {
            switch(Queue.front().s)
            {
            case 1:
            {
                if ( Queue.front().q <= h1.obj.bed )
                {
                    h1.obj.bed-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }
            case 2:
            {
                if (Queue.front().q <= h1.obj.ventilator )
                {
                    h1.obj.ventilator-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }
            case 3:
            {
                if (Queue.front().q <= h1.obj.oxygen_cylinder)
                {
                    h1.obj.oxygen_cylinder-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h1.obj.oxygen_cylinder)
                    {
                        cout<<"We have "<<h1.obj.oxygen_cylinder<<" number of oxygen cylinder available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have oxygen cylinder available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 4:
            {
                if (Queue.front().q <= h1.obj.Remdesivir)
                {
                    h1.obj.Remdesivir-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h1.obj.Remdesivir)
                    {
                        cout<<"We have "<<h1.obj.Remdesivir<<" number of Remdesivir available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have Remdesivir available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 5:
            {
                if (Queue.front().q <= h1.obj.vaccine)
                {
                    h1.obj.vaccine-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h1.obj.vaccine)
                    {
                        cout<<"We have "<<h1.obj.vaccine<<" number of vaccine available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have vaccine available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            }
            cout <<"\nMr./Mrs. "<<Queue.front().n<<" your requirement is full-filled.\n";
            cout<<"We have the following resources available at Hospital 1:\n";
            cout<<"Simple beds : " << h1.obj.bed<<"\n";
            cout<<"Ventilator bed : " << h1.obj.ventilator<<"\n";
            cout<<"Oxygen cylinder : " << h1.obj.oxygen_cylinder<<"\n";
            cout<<"Remdesivir: " << h1.obj.Remdesivir<<"\n";
            cout<<"Vaccine : " << h1.obj.vaccine<<"\n\n";
            Queue.pop();
        }
        if (Queue.front().loc==2)
        {

            switch(Queue.front().s)
            {
            case 1:
            {
                if ( Queue.front().q <= h2.obj.bed )
                {
                    h2.obj.bed-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }

            case 2:
            {
                if (Queue.front().q <= h2.obj.ventilator )
                {
                    h2.obj.ventilator-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }
            case 3:
            {
                if (Queue.front().q <= h2.obj.oxygen_cylinder)
                {
                    h2.obj.oxygen_cylinder-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h2.obj.oxygen_cylinder)
                    {
                        cout<<"We have "<<h2.obj.oxygen_cylinder<<" number of oxygen cylinder available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have oxygen cylinder available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 4:
            {
                if (Queue.front().q <= h2.obj.Remdesivir)
                {
                    h2.obj.Remdesivir-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h2.obj.Remdesivir)
                    {
                        cout<<"We have "<<h2.obj.Remdesivir<<" number of Remdesivir available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have Remdesivir available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 5:
            {
                if (Queue.front().q <= h2.obj.vaccine)
                {
                    h2.obj.vaccine-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h2.obj.vaccine)
                    {
                        cout<<"We have "<<h2.obj.vaccine<<" number of vaccine available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have vaccine available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            }
            cout <<"\nMr./Mrs. "<<Queue.front().n<<" your requirement is full-filled.\n";
            cout<<"We have the following resources available Hospital 2:\n";
            cout<<"Simple beds : " << h2.obj.bed<<"\n";
            cout<<"Ventilator bed : " << h2.obj.ventilator<<"\n";
            cout<<"Oxygen cylinder : " << h2.obj.oxygen_cylinder<<"\n";
            cout<<"Remdesivir: " << h2.obj.Remdesivir<<"\n";
            cout<<"Vaccine : " << h2.obj.vaccine<<"\n\n";
            Queue.pop();
        }
        if (Queue.front().loc==3)
        {
            switch(Queue.front().s)
            {
            case 1:
            {
                if ( Queue.front().q <= h3.obj.bed )
                {
                    h3.obj.bed-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }

            case 2:
            {
                if (Queue.front().q <= h3.obj.ventilator )
                {
                    h3.obj.ventilator-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }
            case 3:
            {
                if (Queue.front().q <= h3.obj.oxygen_cylinder)
                {
                    h3.obj.oxygen_cylinder-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q >h3.obj.oxygen_cylinder  )
                    {
                        cout<<"We have "<<h3.obj.oxygen_cylinder<<" number of oxygen cylinder available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have oxygen cylinder available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 4:
            {
                if (Queue.front().q <= h3.obj.Remdesivir)
                {
                    h3.obj.Remdesivir-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h3.obj.Remdesivir)
                    {
                        cout<<"We have "<<h3.obj.Remdesivir<<" number of Remdesivir available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have Remdesivir available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 5:
            {
                if (Queue.front().q <= h3.obj.vaccine)
                {
                    h3.obj.vaccine-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h3.obj.vaccine)
                    {
                        cout<<"We have "<<h3.obj.vaccine<<" number of vaccine available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have vaccine available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            }
            cout <<"\nMr./Mrs. "<<Queue.front().n<<" your requirement is full-filled.\n";
            cout<<"We have the following resources available Hospital 3:\n";
            cout<<"Simple beds : " << h3.obj.bed<<"\n";
            cout<<"Ventilator bed : " << h3.obj.ventilator<<"\n";
            cout<<"Oxygen cylinder : " << h3.obj.oxygen_cylinder<<"\n";
            cout<<"Remdesivir: " << h3.obj.Remdesivir<<"\n";
            cout<<"Vaccine : " << h3.obj.vaccine<<"\n\n";
            Queue.pop();
        }
        if (Queue.front().loc==4)
        {
            switch(Queue.front().s)
            {
            case 1:
            {
                if ( Queue.front().q <= h4.obj.bed )
                {
                    h4.obj.bed-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }

            case 2:
            {
                if (Queue.front().q <= h4.obj.ventilator )
                {
                    h4.obj.ventilator-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }
            case 3:
            {
                if (Queue.front().q <= h4.obj.oxygen_cylinder)
                {
                    h4.obj.oxygen_cylinder-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h4.obj.oxygen_cylinder)
                    {
                        cout<<"We have "<<h4.obj.oxygen_cylinder<<" number of oxygen cylinder available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have oxygen cylinder available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 4:
            {
                if (Queue.front().q <= h4.obj.Remdesivir)
                {
                    h4.obj.Remdesivir-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h4.obj.Remdesivir)
                    {
                        cout<<"We have "<<h4.obj.Remdesivir<<" number of Remdesivir available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have Remdesivir available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 5:
            {
                if (Queue.front().q <= h4.obj.vaccine)
                {
                    h4.obj.vaccine-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h4.obj.vaccine)
                    {
                        cout<<"We have "<<h4.obj.vaccine<<" number of vaccine available only\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have vaccine available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            }
            cout <<"\nMr./Mrs. "<<Queue.front().n<<" your requirement is full-filled.\n";
            cout<<"We have the following resources available Hospital 4:\n";
            cout<<"Simple beds : " << h4.obj.bed<<"\n";
            cout<<"Ventilator bed : " << h4.obj.ventilator<<"\n";
            cout<<"Oxygen cylinder : " << h4.obj.oxygen_cylinder<<"\n";
            cout<<"Remdesivir: " << h4.obj.Remdesivir<<"\n";
            cout<<"Vaccine : " << h4.obj.vaccine<<"\n\n";
            Queue.pop();
        }
        if (Queue.front().loc==5)
        {
            switch(Queue.front().s)
            {
            case 1:
            {
                if ( Queue.front().q <= h5.obj.bed )
                {
                    h5.obj.bed-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }
            case 2:
            {
                if (Queue.front().q <= h5.obj.ventilator )
                {
                    h5.obj.ventilator-=Queue.front().q;
                }
                else
                {
                    cout<<"Sorry, we don't have it available here.\nPlease try at another location.\n";
                    my_location();
                }
                break;
            }
            case 3:
            {
                if (Queue.front().q <= h5.obj.oxygen_cylinder)
                {
                    h5.obj.oxygen_cylinder-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h5.obj.oxygen_cylinder)
                    {
                        cout<<"We have "<<h5.obj.oxygen_cylinder<<" number of oxygen cylinder available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have oxygen cylinder available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 4:
            {
                if (Queue.front().q <= h5.obj.Remdesivir)
                {
                    h5.obj.Remdesivir-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h5.obj.Remdesivir)
                    {
                        cout<<"We have "<<h5.obj.Remdesivir<<" number of Rendesivir available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have Remdesivir available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            case 5:
            {
                if (Queue.front().q <= h5.obj.vaccine)
                {
                    h5.obj.vaccine-=Queue.front().q;
                }
                else
                {
                    if (Queue.front().q > h5.obj.vaccine)
                    {
                        cout<<"We have "<<h5.obj.vaccine<<" number of vaccine available only.\nPlease try at another location.\n";
                    }
                    else
                    {
                        cout<<"Sorry, we don't have vaccine available here.\nPlease try at another location.\n";
                    }
                    my_location();
                }
                break;
            }
            cout <<"\nMr./Mrs. "<<Queue.front().n<<" your requirement is full-filled.\n";
            cout<<"We have the following resources available Hospital 5:\n";
            cout<<"Simple beds : " << h5.obj.bed<<"\n";
            cout<<"Ventilator bed : " << h5.obj.ventilator<<"\n";
            cout<<"Oxygen cylinder : " << h5.obj.oxygen_cylinder<<"\n";
            cout<<"Remdesivir: " << h5.obj.Remdesivir<<"\n";
            cout<<"Vaccine : " << h5.obj.vaccine<<"\n\n";
            Queue.pop();
            }
        }
    }
}
void Hospital::my_location()
{
    cout<<"Enter your location: \n 1. north \n 2. south \n 3. east \n 4. west \n 5. center\n";
a:
    cin>>location;
    if(location>5||location<1)
    {
        cout<<"Invalid Choice. Try again. \n";
        goto a;
    }
    cout<<"Information Saved Successfully\n\n";
    st.n=name;
    print_hospital_data(location);
}

