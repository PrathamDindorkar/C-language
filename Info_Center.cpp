#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class teacher{
private:
    // Private attribute
    char q[50];
    float xp;

  public:
    // Setter
    void setExp(float Exp) {
     xp = Exp;
    }
    void setqualification(char qualification[50]){  
      cout<<"Qualification is: "<<qualification<<endl;
    }
    // Getter
    int getExp() {
      return xp;
    }
   char getqualification(){
      return q[1];
    }
};
class visiting{
private:
    // Private attribute
    int hours;
    int days;

  public:
    // Setter
    void setno_of_days(int no_of_days) {
     days = no_of_days;
    }
    void setno_of_hours(int no_of_hours){
      hours = no_of_hours;
    }
    // Getter
    int getno_of_days() {
      return days;
    }
    int getno_of_hours(){
      return hours;
    }
};
class regular{
private:
    // Private attribute
    int p;

  public:
    // Setter
    void setpub(int pub) {
     p = pub;
    }
    
    // Getter
    int getpub() {
      return p;
    }
   
};
class officer{
private:
    // Private attribute
    char g;

  public:
    // Setter
    void setgrade(char grade) {
     g = grade;
    }
    
    // Getter
    char getgrade() {
      return g;
    }
};
class staff{
private:
    // Private attribute
    int age;
    char name[50];
    char id[50];

  public:
    // Setter
    void setnm(char nm[50]) {
     name[50] = nm[50];
    }
    void setAg(int Ag){
      age = Ag;
    }
    void setId(char Id[50]){
      id[50] = Id[50];
    }
    // Getter
    int getAg() {
      return age;
    }
    char getnm(){
      return name[50];
    }
    char getId(){
      return id[50];
    }
};
int main(){
  teacher T;
  visiting V;
  regular R;
  officer O;
  staff S;

  for(int j=0;j<5;j++){
  int i;

  cout<<"What you want to do?"<<endl;
  cout<<"1. Add Teacher's info\n2. Add Staff's info\n3. Add Visiting info\n4. Add Regular Books info\n5. Add Officer's info\n6. Get info of teacher\n7. Get info of Staff"<<endl;
  cout<<"8. Get info of Visiting\n9. Get info of Regular books and publications\n10. Get Officer's info"<<endl;
  cin>>i;
  if(i==1){
  int ep;
  char qualification[50];
  cout<<"Enter Experince in years: "<<endl;
  cin>>ep;
  cout<<"Enter the Qualification: "<<endl;
  cin>>qualification;
  T.setExp(ep);
  T.setqualification(qualification);
  /*cout<<"Experience: "<< T.getExp()<<endl;
  cout<<"Qualification: "<< T.getQual()<<endl;*/
  }
  else if(i==2){
    char n[50];
    char d[50];
    cout<<"Enter Staff name: "<<endl;
    cin>>n;
  S.setnm(n);
  int old;
  cout<<"Enter Age:"<<endl;
  cin>>old;
  S.setAg(old);
  cout<<"Enter Id: "<<endl;
  cin>>d;
  S.setId(d);
  /*cout<<"Staff Name: "<< S.getnm()<<endl;
  cout<<"Staff Age: "<< S.getAg()<<endl;*/
  }
  else if(i==3){
  int nod,noh;
  cout<<"Enter the number of days:"<<endl;
  cin>>nod;
  cout<<"Enter the number of hours:"<<endl;
  cin>>noh;
  V.setno_of_days(nod);
  V.setno_of_hours(noh);
  /*cout<<"Visiting Days: "<<V.getno_of_days()<<endl;
  cout<<"Visiting Hours: "<<V.getno_of_hours()<<endl;*/
  }
  else if(i==4){
  int nop;
  cout<<"Enter the number of publishers: "<<endl;
  cin>>nop;
  R.setpub(nop);
  //cout<<"Regular Publishings: "<<R.getpub()<<endl;
  }
  else if(i==5){
  char g;
  cout<<"Enter the Grade: "<<endl;
  cin>>g;
  O.setgrade(g);
  //cout<<"Officer's Grade: "<<O.getgrade()<<endl;
  }
  else if(i==6){                                                                                      // TEACHER OUTPUT
  cout<<"Experience: "<< T.getExp()<<endl;        
  cout<<"Qualification: "<< T.getqualification()<<endl;
  }
  else if(i==7){                                                                                     // STAFF OUTPUT
  cout<<"Staff Name: "<< S.getnm()<<endl;
  cout<<"Staff Age: "<< S.getAg()<<endl;
  cout<<"Staff Id: "<< S.getId()<<endl;
  }
  else if(i==8){                                                                                    // VISITING OUTPUT
  cout<<"Visiting Days: "<<V.getno_of_days()<<endl;
  cout<<"Visiting Hours: "<<V.getno_of_hours()<<endl;
  }
  else if(i==9){                                                                                    // REGULAR OUTPUT
    cout<<"Regular Publishings: "<<R.getpub()<<endl;
  }
  else if(i==10){                                                                                  // OFFICER OUTPUT
    cout<<"Officer's Grade: "<<O.getgrade()<<endl;
  }
  else{
    cout<<"Invalid Entry!"<<endl;
  }
  }
return 0;
}
 
 
 
 /*cout << T.getExp()<<endl;
  cout <<"Number of days: " <<V.getno_of_days()<<endl;
  cout <<"Number of hours: " <<V.getno_of_hours()<<endl;
  cout <<"Number of Publications: "<<R.getpub()<<endl;
  cout <<"Grade of Officer is: "<<O.getgrade()<<endl;
  cout <<"Name of Staff is: "<<S.getnm()<<endl;
  cout <<"Age of Staff is: "<<S.getAg()<<endl;*/