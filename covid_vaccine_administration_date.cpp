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
        
    public:
        void Vaccine_details(){
            cout << "\nName of Vaccine: ";
            cin >> vaccine_name;
            cout << "\nManufacturer: ";
            cin >> manufacturer;
            cout << "\nDate of manufacturing(dd-mm-yyyy): ";
            cin >> date_of_manufacturing;
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
    void increase_date(int dd, int mm, int yyyy){
    int new_month, new_year, temp_month , total_date , actual_date , remaining_days;
    if ((mm==1)||(mm==3)||(mm==5)||(mm==7)||(mm==8)||(mm==10)||(mm==12)){
        total_date = dd + 28;
        if (total_date > 31){
            if (mm==1){
                actual_date = total_date - 28;
                if (actual_date > 28){
                    int new_date = actual_date - 2;
                    cout << "The next vaccine date is: " << new_date << "-" << mm+1 << "-" << yyyy << endl;
                }
                else if (actual_date == 31){
                    cout << "The next vaccination date is: 1-3-2021" << endl;
                }
            }
            else {
                actual_date = total_date - 31;
                cout << "The next vaccine date is: " << actual_date << "-" << mm+1 << "-" << yyyy << endl;
            }
        }
        else {
            cout << "The next date is: " << total_date << endl;
            cout << "The next vaccine date is: " << total_date << "-" << mm << "-" << yyyy << endl;
        }
    }
    else if ((mm==4)||(mm==6)||(mm==9)||(mm==11)){
        total_date = dd + 28;
        if (total_date > 30){
            actual_date = total_date - 30;
            cout << "The next date is: " << actual_date << endl;
            cout << "The next vaccine date is: " << actual_date << "-" << mm+1 << "-" << yyyy << endl;
        }
        else {
            cout << "The next date is: " << total_date << endl;
            cout << "The next vaccine date is: " << total_date << "-" << mm << "-" << yyyy << endl;
        }
    }
    else if (mm==2){
        total_date = dd + 28;
        if (total_date > 28){
            actual_date = total_date - 28;
            cout << "The next date is: " << actual_date << endl;
            cout << "The next vaccine date is: " << actual_date << "-" << mm+1 << "-" << yyyy << endl;
        }
        else {
            cout << "The next date is: " << total_date << endl;
            cout << "The next vaccine date is: " << total_date << "-" << mm << "-" << yyyy << endl;
        }
    }
}
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
    int dd, mm, yyyy;
    cout << "Date of administration: ";
    cin >> dd;
    cout << "Month of administration: ";
    cin >> mm;
    cout << "Year of administration: ";
    cin >> yyyy;
    increase_date(dd,mm,yyyy);
    return 0;
}
