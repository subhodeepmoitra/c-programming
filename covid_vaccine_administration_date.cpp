#include<iostream>
using namespace std;
class Patient_details{
    protected:
         char patient_name[100];
         char patient_id[1000];
         char gender[2];
         int patient_age;
         char covid_history[2];
    public:
         void get_patient_info(){
             cout << "\nName: ";
             cin >> patient_name;
             cout << "\nID: ";
             cin >> patient_id;
             cout << "\nGender(M/F): ";
             cin >> gender;
             cout << "\nAge: ";
             cin >> patient_age;
             cout << "\nAny report of getting Covid positive(Y/N): ";
             cin >> covid_history;
         }
};
class Vaccination_details : virtual public Patient_details{
    protected:
        char vaccine_name[100];
        char manufacturer[100];
        char date_of_manufacturing[10];
        char date_of_administration[10];
    public:
        void Vaccine_details(){
            cout << "\nName of Vaccine: ";
            cin >> vaccine_name;
            cout << "\nManufacturer: ";
            cin >> manufacturer;
            cout << "\nDate of manufacturing(dd-mm-yyyy): ";
            cin >> date_of_manufacturing;
            cout << "\nDate of administration(dd-mm-yyyy): ";
            cin >> date_of_administration;
        }
};
class Administration_details : virtual public Patient_details{
    protected:
        char name_of_doctor[100];
        char place[100];
        char institute[100];
    public:
         void Other_necessary_details(){
             cout << "\nName of Doctor: ";
             cin >> name_of_doctor;
             cout << "\nPlace: ";
             cin >> place;
             cout << "\nInstitute: ";
             cin >> institute;
         }
};
class Print_details : public Administration_details , public Vaccination_details{
    public:
       void Display_data(){
           cout << "\nPatient ID: " << patient_id << endl;
           cout << "\nName of patient: " << patient_name << endl;
           cout << "\nAge of patient: " << patient_age << endl;
           cout << "\nVaccine candidate administered: " << vaccine_name << endl;
           cout << "\nName of person who administered: " << name_of_doctor << endl;
       }
};
int main(){
    Print_details obj;
    cout << "-------------- ENTER PATIENT DETAILS --------------\n";
    obj.get_patient_info();
    cout << "-------------- ENTER VACCINE DETAILS --------------\n";
    obj.Vaccine_details();
    cout << "-------------- FILLUP THE OTHER ADMINISTRATIVE DETAILS ---------------\n";
    obj.Other_necessary_details();
    cout << "--------------- DISPLAYING NECESSARY DETAILS ------------------\n";
    obj.Display_data();
    return 0;
}
