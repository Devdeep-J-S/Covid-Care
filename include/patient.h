#ifndef PATIENT_H
#define PATIENT_H

struct s
{
    int bed;
    int ventilator;
    int oxygen_cylinder;
    int Remdesivir;
    int vaccine;
};
class patient
{
    public:
   s obj;
   patient();

};

#endif // PATIENT_H
