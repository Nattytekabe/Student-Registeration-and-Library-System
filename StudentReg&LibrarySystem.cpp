#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<iomanip>
#include<time.h>
#include<fstream>
using namespace std;
struct sud{
	char name[20],id[20],de[20],sex[8],age[2];
}s;

struct library{
	char copy[5],bookID[10],subject[10],title[10],edition[10],author[20];
}l;
class SCHOOL{
	public:
void school();
void Sget();
void Sdisplay();
void Gsearch();
void Ssearch();
void Ssearchid();
void deel();
void sgh();
}S1;

class libex{
	public:
void Library();
void enter();
void display();
void search();
void seaarch();
void del();
int exit();
void idnoo();
}L1;

class extra{
public:
int color();
int Us();
}E;
int main(){
    char wish;
	system("cls");
     		cout<<"   ***************************************************************************"<<endl;
			cout<<"   *                           HOUSE OF STARK                                *"<<endl;
            cout<<"   *                                                                         *"<<endl;
            cout<<"   *                          \"nattytekabe.webflow.io\"                     *"<<endl;
            cout<<"   *                                                                         *"<<endl;
            cout<<"   ***************************************************************************"<<endl<<endl;	
    cout<<"Enter numbers from the provided menu:\n\n";
    cout<<"\t1.School registration menu\n";
    cout<<"\t2.School library menu\n";
    cout<<"\t3.About this Program and Us\n";
    cout<<"\t4.Change Background\n";
    cout<<"\t5.Exit\n->";
    cin>>wish;
    if(wish!=5){
	switch (wish){
    	case '1':
    		S1.school();
    		break;
    	case '2':
    		L1.Library();	
    		break;
    	case '3':
    		E.Us();		
    		break;
    	case '4':
    		 cout<<E.color();
    		break;
    	case '5':
    		break;
    	default:
    		cout<<"Exiting Program... "; 
			break;
    }}
    else
    getch();
    return 0;
    }   
int extra::Us(){
	system("cls");
	system("color 93");
	cout<<"\t \t \n___________________________________________________________\n\t\t\t***All Rights Claimed by***\n___________________________________________________________\n"<<endl;
	cout<<" Nathnael Tekabe\t Designer and Developer\t find me at nattytekabe.webflow.io"<<endl;
	cout<<"     This program shows the school registrantion and library system with predifined lists.\nI tried to acquire all the things that we have learned so far starting from programming I\nupto programming II  such as Class,Structure,Functions,Loops,if-else statment,Switch,Files and Others too.\n\n\n\n";
	
	cout<<"press \"1\" to goto main menu..."<<endl;
	cout<<"press \"2\" to acknowleadge more About Us...\n->";
	int y;
	der:
	cin>>y;
	if(y==1)
	main();
	else if(y==2)
	cout<<"\tVisit more about me in ==> \"www.nattytekabe.webflow.io\""<<endl;

	else{
	cout<<"You are suppose toenter 1 or 2: \nTry again ->";
    goto der;
	 }
}
int extra::color(){
	system("cls");
	cout<<"   ***************************************************************************"<<endl;
	cout<<"   *                                                                         *"<<endl;
	cout<<"   *    Go ahead and press 1-9 to change the background and 0 to quit        *"<<endl;
	cout<<"   *                                                                         *"<<endl;
	cout<<"   ***************************************************************************"<<endl;
	 int changeColor;
	 
	 p:
	 	cout<<"->";
     cin>>changeColor;
 switch(changeColor){
            case 1:
                 system("color 07");
                 break;
            case 2:
                 system("color 57");
                 break;
            case 3:
                 system("color 02");
                 break;
            case 4:
                 system("color 2f");
                 break;
            case 5:
                 system("color 1f");
                 break;
            case 6:
                 system("color 97");
                 break;
            case 7:
                 system("color 87");
                 break;
            case 8:
                 system("color 52");
                 break;
            case 9:
                 system("color 2f");
                 break;
            case 0:
                main();
                 break;
            default:
                cout<<"invalid choice.please insert numbers 1-6\n";
                return 1;
            }
            goto p;
            return 2;
            }
    void SCHOOL::school(){
    	m:
    	system("cls");
		cout<<"   ***************************************************************************"<<endl;
		cout<<"   *                                School                                   *"<<endl;
		cout<<"   *                                                                         *"<<endl;
		cout<<"   *                              Registration                               *"<<endl;
		cout<<"   *                                                                         *"<<endl;
		cout<<"   ***************************************************************************"<<endl;
		cout<<"Follow with the leading numbers below :\n"<<endl;	
	int ch;
	cout<<"\t1. For Registration"<<endl;
	cout<<"\t2. For Display"<<endl;
	cout<<"\t3. For Search"<<endl;
	cout<<"\t4. For delete"<<endl;
	cout<<"\t5. To return main menu"<<endl;
	cout<<"->";
	cin>>ch;
	switch (ch){
	case 1:
			Sget();
			break;
		case 2:
			Sdisplay();
			break;
		case 3:
			Gsearch();
			break;	
		case 4:
			deel();
			case 5:
				main();
				break;
		default:
		cout<<"Wrong entry try again"<<endl;	
	}
	cout<<"*****Where do u wish to go?*****\n\n1.To School Registration menu\n2.To Main menu\n->";
	int yes;
	cin>>yes;
	if(yes==1)
	goto m;
	else
	main();
}        
void SCHOOL::Sget(){
    int n,age,c=0;
    ofstream fout;
    srand(time(0));
    cout<<"\t\t\t*****Registration*****"<<endl;
    cout<<"Enter how many student you want to register :\n->";
    cin>>n;
    	fout.open("p.txt",ios::out|ios::binary|ios::app);
	if(fout){	
    for(int i=0;i<n;i++){
    	cout<<"Enter your name "<<i+1<<" : "<<endl;
    	cin>>s.name;
		sgh();
    	//cout<<"Enter your id "<<i+1<<" : "<<endl;
    	//cin>>s.id;
    
       //   for(int i=1;i<6;i++){
         // 	   s.hdi=1+(rand()%6);

	cout<<"Enter your age "<<i+1<<" : "<<endl;
	cin>>s.age;
	
	age=atoi(s.age);
	if(age<18){
	
		cout<<"This program only accepts members above 18 year "<<endl;
		break;
	}
	cout<<" Enter your department"<<i+1<<" : "<<endl;
	cin>>s.de;
	cout<<" enter your sex"<<i+1<<" : "<<endl;
	cin>>s.sex;
	if(s.sex=="male"){
		c++;
	}
		fout.write(s.name,sizeof(s.name));
    	fout.write(s.id,sizeof(s.id));
    //	fout<<s.hdi;	
		fout.write(s.age,sizeof(s.age));
    	fout.write(s.de,sizeof(s.de));
        fout.write(s.sex,sizeof(s.sex));		
	}
	fout.close();
	}
else 
	cout<<"no "<<endl;
}

void SCHOOL::Sdisplay(){
ifstream fin;
	int pos,n,size;
fin.open("p.txt",ios::in|ios::binary);
	if(fin){
		fin.seekg(0,ios::end);
		pos=fin.tellg();
		size=sizeof(sud);
		n=pos/size;
		fin.seekg(0);
		cout<<"*****Display*****\n";
		cout<<">"<<n<<"members are saved\n\n";
    cout<<"============================================================================================"<<endl;
    cout<<"***name***"<<"\t"<<"***id***"<<"\t"<<"***age***"<<"\t"<<"***department***"<<"\t"<<"***sex***"<<"\t"<<endl;
    cout<<"============================================================================================"<<endl<<endl;
        for(int i=0;i<n;i++){
        		fin.read(s.name,sizeof(s.name));
        		fin.read(s.id,sizeof(s.id));
        	//	fin>>s.hdi;
        		fin.read(s.age,sizeof(s.age));
        		fin.read(s.de,sizeof(s.de));
        		fin.read(s.sex,sizeof(s.sex));
        		cout<<">"<<i+1<<". "<<s.name<<" \t"<<s.id<<"\t\t"<<s.age<<"\t\t"<<s.de<<"\t\t\t"<<s.sex<<"\t"<<endl;
		}	
	cout<<endl<<endl;
	}
      else{
 cout<<"no"<<endl;
}}

void SCHOOL::Gsearch(){
	cout<<"\t\t\t*****Search*****\n";
	cout<<"choose how you want to search\n 1.By name\n 2.By Idno\n->";
	int s;
	cin>>s;
		switch(s){
			case 1:
				Ssearch();
				break;
			case 2:
				Ssearchid();
				break;
			case 3:
				S1.school();
				break;
			default:
				cout<<"try again\n";
		}}

void  SCHOOL::Ssearch(){
	ifstream fin;
	char name[20];
	int pos,n,size,c=0;
		fin.open("p.txt",ios::in|ios::binary|ios::ate);
	if(fin){
	cout<<"Enter name:"<<endl;
	cin>>name;
		fin.seekg(0,ios::end);
		pos=fin.tellg();
		size=sizeof(sud);
		n=pos/size;
		fin.seekg(0);
	for(int i=0;i<=n;i+70){
		fin.read(s.name,sizeof(s.name));
		fin.read(s.id,sizeof(s.id));
		fin.read(s.age,sizeof(s.age));
		fin.read(s.de,sizeof(s.de));
		fin.read(s.sex,sizeof(s.sex));
	for(int i=0;i<=n;i++){
		if(strcmp(s.name,name)==0){
			c++;
		if(c==1){
			cout<<"******************************************************"<<endl;
       		cout<<"name"<<"\t"<<"id"<<"\t"<<"age"<<"\t"<<"de"<<"\t"<<"sex"<<"\t\n******************************************************"<<endl;
			cout<<s.name<<"\t"<<s.id<<"\t"<<s.age<<"\t"<<s.de<<"\t"<<s.sex<<"\t"<<endl;
		
	}}}}}}
void  SCHOOL::Ssearchid(){
	ifstream fin;
	char id[20];
	int pos,n,size,c=0;
	cout<<"\t\t\t*****search*****\n";
		fin.open("p.txt",ios::in|ios::binary|ios::ate);
	if(fin){
	cout<<"Enter IDno:"<<endl;
	cin>>id;
		fin.seekg(0,ios::end);
		pos=fin.tellg();
		size=sizeof(sud);
		n=pos/size;
		fin.seekg(0);
	for(int i=0;i<=n;i+70){
		fin.read(s.name,sizeof(s.name));
		fin.read(s.id,sizeof(s.id));
		fin.read(s.age,sizeof(s.age));
		fin.read(s.de,sizeof(s.de));
		fin.read(s.sex,sizeof(s.sex));
	for(int i=0;i<=n;i++){
		if(strcmp(s.id,id)==0){
			c++;
		if(c==1){
			cout<<"******************************************************"<<endl;
       		cout<<"name"<<"\t"<<"id"<<"\t"<<"age"<<"\t"<<"de"<<"\t"<<"sex"<<"\t\n******************************************************"<<endl;
			cout<<s.name<<"\t"<<s.id<<"\t"<<s.age<<"\t"<<s.de<<"\t"<<s.sex<<"\t"<<endl;
		
	}}}}}}
	void SCHOOL::deel(){
	cout<<"*****************delete menu*****************\n";
ifstream fin;
	fin.open("p.txt",ios::out|ios::binary);
ofstream fout;
	fout.open("newp.txt",ios::out|ios::binary);  
	if(fout&&fin){	
	char id[12];
cout<<"Enter name:\n->";
		cin>>id;
		int a,b,c,d=0;
		fin.seekg(0,ios::end);
		a=fin.tellg();
		b=sizeof(library);
		c=a/b;
		fin.seekg(0,ios::beg);
	for(int i=0;i<c;i++){	
fin.read(s.name,sizeof(s.name));
fin.read(s.id,sizeof(s.id));
fin.read(s.de,sizeof(s.de));
fin.read(s.sex,sizeof(s.sex));
fin.read(s.age,sizeof(s.age));
	if(strcmp(s.name,id)!=0){
		fout.write(s.name,sizeof(s.name));
		fout.write(s.id,sizeof(s.id));
		fout.write(s.de,sizeof(s.de));
		fout.write(s.sex,sizeof(s.sex));
		fout.write(s.age,sizeof(s.age));
	}
		else
		++d;
	}
	if(d==0)
	cout<<"no such name found...\n";
	else
	cout<<"User Deleted\n";
	fout.close();
	fin.close();
	remove("p.txt");
	rename("newp.txt","p.txt");
	}
	else
	cout<<"error";
}
void SCHOOL::sgh(){
	ifstream fin;
	char ty[20];
     cout<<"enter id"<<endl;
	 cin>>ty;	
	int pos,size,n,c=0;
	fin.open("p.txt",ios::in|ios::binary);
	fin.seekg(0,ios::end);
		pos=fin.tellg();
		size=sizeof(sud);
		n=pos/size;
		fin.seekg(0);
		for(int i=0;i<=n;i+70){
		fin.read(s.name,sizeof(s.name));
		fin.read(s.id,sizeof(s.id));
		fin.read(s.age,sizeof(s.age));
		fin.read(s.de,sizeof(s.de));
		fin.read(s.sex,sizeof(s.sex));
		for(int i=0;i<=n;i++){
		if(strcmp(s.id,ty)==0){
			c++;
		}
		if(c==1){
			cout<<"******************************************************"<<endl;
       		cout<<"name"<<"\t"<<"id"<<"\t"<<"age"<<"\t"<<"de"<<"\t"<<"sex"<<"\t\n******************************************************"<<endl;
	         cout<<"no"<<endl;
	}
	}}
 
fin.close();

}
		
void libex::enter(){
cout<<"*************enter book info**************\n";
int lim;
cout<<"enter how many u want\n->";
cin>>lim;
	ofstream mine;
	mine.open("libraary.txt",ios::out|ios::binary|ios::app);
for(int i=1;i<=lim;i++){
cout<<"enter subject name "<<i<<"\n->";
cin>>l.subject;
cout<<"enter title "<<i<<"\n->";
cin>>l.title;	
cout<<"enter bookid  "<<i<<"\n->";
cin>>l.bookID;
	cout<<"enter edition  "<<i<<"\n->";
cin>>l.edition;	
cout<<"enter author name "<<i<<"\n->";
cin>>l.author;	
cout<<"enter no of copy "<<i<<"\n->";
cin>>l.copy;
mine.write(l.title,sizeof(l.title));
mine.write(l.bookID,sizeof(l.bookID));
mine.write(l.subject,sizeof(l.subject));
mine.write(l.edition,sizeof(l.edition));
mine.write(l.author,sizeof(l.author));
mine.write(l.copy,sizeof(l.copy));		
}
mine.close();
}
void libex::display(){
	cout<<"************display***************\n";
	ifstream mine;
	mine.open("libraary.txt",ios::in|ios::binary);
	mine.seekg(0,ios::end);
	int h=mine.tellg();
	int d=sizeof(library);
	int k=h/d;
	mine.seekg(0);
cout<<"======================================================================================================"<<endl;
cout<<"***subject name***    ***title***    ***id no***    ***edition***    ***author***    ***no of copy***"<<endl;
cout<<"======================================================================================================"<<endl;
	for(int i=1;i<=k;i++){
	mine.read(l.title,sizeof(l.title));
		mine.read(l.bookID,sizeof(l.bookID));
mine.read(l.subject,sizeof(l.subject));
mine.read(l.edition,sizeof(l.edition));
mine.read(l.author,sizeof(l.author));
mine.read(l.copy,sizeof(l.copy));		
	cout<<l.subject<<"\t\t\t"<<l.title<<"\t\t"<<l.bookID<<"\t\t"<<l.edition<<"\t\t"<<l.author<<"\t\t"<<l.copy<<"\n";

}cout<<"\n\n";
	cout<<k<<" books are saved\n";
	
	mine.close();
}
void libex::search(){
	cout<<"******************search*******************\n";
	char a;
	cout<<"enter choice\n";
	cout<<"1. to search by title\n";
	cout<<"2. to search by idno\n";
	cin>>a;
	switch(a){
		case '1':
			L1.seaarch();
			break;
			case '2':
				L1.idnoo();
				break;
	}}
void libex::seaarch(){
	ifstream mine;
	mine.open("libraary.txt",ios::in|ios::binary|ios::ate);
	mine.seekg(0,ios::end);
	int h=mine.tellg();
	int d=sizeof(library);
	int k=h/d;
	mine.seekg(0);
	char ser[10];
	cout<<"enter book title to search\n->";
	cin>>ser;
	int c=0;
	for(int i=0;i<=k;i+65){	
mine.read(l.title,sizeof(l.title));
mine.read(l.bookID,sizeof(l.bookID));
mine.read(l.subject,sizeof(l.subject));
mine.read(l.edition,sizeof(l.edition));
mine.read(l.author,sizeof(l.author));
mine.read(l.copy,sizeof(l.copy));
for(int j=0;j<=k;j++){
	if(strcmp(l.title,ser)==0){
	c++;
	if(c==1){
		cout<<"book title\tsubject name\tbook id\t\tedition\t\tauthor\t\tno of copy\n";
		cout<<"******************************************************************************************\n";
	cout<<l.subject<<"\t\t"<<l.title<<"\t\t"<<l.bookID<<"\t\t"<<l.edition<<"\t\t"<<l.author<<"\t\t"<<l.copy<<"\n";
}}
}
}}

void libex::idnoo(){
	ifstream mine;
	mine.open("libraary.txt",ios::in|ios::binary|ios::ate);
	mine.seekg(0,ios::end);
	int h=mine.tellg();
	int d=sizeof(library);
	int k=h/d;
	mine.seekg(0);
	char id[10];
	cout<<"enter book idno to search\n->";
	cin>>id;
	int c=0;
	
	for(int i=1;i<=k;i+65){	
mine.read(l.title,sizeof(l.title));
mine.read(l.bookID,sizeof(l.bookID));
mine.read(l.subject,sizeof(l.subject));
mine.read(l.edition,sizeof(l.edition));
mine.read(l.author,sizeof(l.author));
mine.read(l.copy,sizeof(l.copy));
for(int j=0;j<=k;j++){

	if(strcmp(l.bookID,id)==0){
	c++;
	if(c==1){
		cout<<"book title\tsubject name\tbook id\t\tedition\t\tauthor\t\tno of copy\n";
		cout<<"******************************************************************************************\n";
	cout<<l.subject<<"\t\t"<<l.title<<"\t\t"<<l.bookID<<"\t\t"<<l.edition<<"\t\t"<<l.author<<"\t\t"<<l.copy<<"\n";
}}}}}
int libex::exit(){
	cout<<"exit";
}
void libex::Library(){
hh:	
system("cls");
		cout<<"   ***************************************************************************"<<endl;
		cout<<"   *                             Library Menu                                *"<<endl;
		cout<<"   *                                                                         *"<<endl;
		cout<<"   *                           \"READ TO CHANGE\"                              *"<<endl;
		cout<<"   *                                                                         *"<<endl;
		cout<<"   ***************************************************************************"<<endl;	
	char ch;		
	cout<<"Follow by the numbers below:\n\n";
	cout<<"\t1. To enter information\n";
	cout<<"\t2. To display information\n";
	cout<<"\t3. To search information\n";
	cout<<"\t4. To delete information\n";
	cout<<"\t5. Go back to main menu\n\n->";
	cin>>ch;
	switch(ch){
		case '1':
			L1.enter();
			break;
		case '2':
			L1.display();
			break;
		case '3':
			L1.search();
			break;
		case '4':
			L1.del();
			break;
		case '5':
			main();
			break;	
			default:
				cout<<"invalid input\n";
	}
	cout<<"*****Where do u wish to go?*****\n\n1.To Library menu\n2.To Main menu\n->";
	int yes;
	cin>>yes;
	if(yes==1)
	goto hh;
	else
	main();
}

void libex::del(){
	cout<<"*****************delete menu*****************\n";
ifstream fin;
	fin.open("libraary.txt",ios::out|ios::binary);
ofstream fout;
	fout.open("newlibraary.txt",ios::out|ios::binary);  
	if(fout&&fin){	
	char id[12];
cout<<"Enter book title:\n->";
		cin>>id;
		int a,b,c,d=0;
		fin.seekg(0,ios::end);
		a=fin.tellg();
		b=sizeof(library);
		c=a/b;
		fin.seekg(0,ios::beg);
	for(int i=0;i<c;i++){	
fin.read(l.title,sizeof(l.title));
fin.read(l.subject,sizeof(l.subject));
fin.read(l.bookID,sizeof(l.bookID));
fin.read(l.edition,sizeof(l.edition));
fin.read(l.author,sizeof(l.author));
fin.read(l.copy,sizeof(l.copy));
	if(strcmp(l.title,id)!=0){
		fout.write(l.title,sizeof(l.title));
		fout.write(l.subject,sizeof(l.subject));
		fout.write(l.bookID,sizeof(l.bookID));
		fout.write(l.edition,sizeof(l.edition));
		fout.write(l.author,sizeof(l.author));
		fout.write(l.copy,sizeof(l.copy));
	}
		else
		++d;
	}
	if(d==0)
	cout<<"no such ID found...\n";
	else
	cout<<"Book Deleted\n";
	fout.close();
	fin.close();
	remove("libraary.txt");
	rename("newlibraary.txt","libraary.txt");
	}
	else
	cout<<"error";
}
