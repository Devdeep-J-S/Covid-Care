#include<bits/stdc++.h>
#include "patient.h"
#ifndef HOSPITAL_H
#define HOSPITAL_H

using namespace std;

struct structure
{
    string n;
    int loc;
    int q;
    int s;
};

class Hospital:public patient
{
private:
    string name;
    string address;
    string contact;
    string age;
    string sex;
    string blood_group;
    string disease_past;
    int location;
public:
    void get_Patient_Detail();
    void print_hospital_data(int l);
    void print_patient_data();
    void deQueue();
void my_location();

};
#endif // HOSPITAL_H
