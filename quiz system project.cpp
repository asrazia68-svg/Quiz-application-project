#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
struct student{
	char name[20],rollno[20];
	int marks,random;
};
student st;
void cpp(){
int i=0,arr[7]; 
st.marks=0;
	char choice;
	while(i<6){
		back:
	st.random=rand()%7;
	for(int j=0;j<=6;j++){
		if(st.random==arr[j]){
		goto back;
	}
}
arr[i]=st.random;
	
	switch(st.random){
		case 0:
cout<<i+1<<")what is a correct syntax to output\'HELLO WORLD/'in c++?"<<endl;
cout<<"A.system,out.println(\'HELLO WORLD/');"<<endl;
cout<<"B.console.writeline(\'HELLO WORLD/');"<<endl;
cout<<"C.print(\'HELLO WORLD/');"<<endl;
cout<<"D.cout<<\'HELLO WORLD/';"<<endl;
cin>>choice;
if(choice=='d'||choice=='D'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is D"<<endl;
}
break;
case 1:
cout<<i+1<<")which of the following is called address operator?"<<endl;
cout<<"a)*"<<endl;
cout<<"b)&"<<endl;
cout<<"c)_"<<endl;
cout<<"d)%"<<endl;
cin>>choice;
if(choice=='b'||choice=='B'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is B"<<endl;
}
break;
case 2:
cout<<i+1<<")which of the following is used for comments in c++?"<<endl;
cout<<"a)//comments"<<endl;
cout<<"b)/*comment*/"<<endl;
cout<<"c)both //comment or /*comment*/"<<endl;
cout<<"d)//comment*/"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is C"<<endl;
}
break;
case 3:
cout<<i+1<<")who created C++?"<<endl;
cout<<"a)Bjarne stroustrup"<<endl;
cout<<"b)Dennis Ritchie"<<endl;
cout<<"c)Ken thompson"<<endl;
cout<<"d)Brian kernighan"<<endl;
cin>>choice;
if(choice=='a'||choice=='A'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is A"<<endl;
}
break;
case 4:
cout<<i+1<<")A language which has the capability to generate new data types are called"<<endl;
cout<<"a)Extensible"<<endl;
cout<<"b)Overloaded"<<endl;
cout<<"c)Encapsulated"<<endl;
cout<<"d)Reprehensible"<<endl;
cin>>choice;
if(choice=='a'||choice=='A'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is A"<<endl;
}
break;
case 5:
cout<<i+1<<")which of the following is called insertion operator?"<<endl;
cout<<"a)<"<<endl;
cout<<"b)>"<<endl;
cout<<"c)<<"<<endl;
cout<<"d)>>"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is C"<<endl;
}
break;
case 6:
cout<<i+1<<")which of the following is called extersion operator?"<<endl;
cout<<"a)<"<<endl;
cout<<"b)>"<<endl;
cout<<"c)<<"<<endl;
cout<<"d)>>"<<endl;
cin>>choice;
if(choice=='d'||choice=='D'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is D"<<endl;
}
break;
}
   i++;
}
}
void java(){
	int i=0,arr[7]; 
st.marks=0;
	char choice;
	while(i<6){
		back:
	st.random=rand()%7;
	for(int j=0;j<=6;j++){
		if(st.random==arr[j]){
		goto back;
	}
}
arr[i]=st.random;
	
	switch(st.random){
		case 0:
cout<<i+1<<")which keyword is used to create an object in java?"<<endl;
cout<<"a)object"<<endl;
cout<<"b)create"<<endl;
cout<<"c)new"<<endl;
cout<<"d)class"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is c"<<endl;
}
break;
case 1:
cout<<i+1<<")which operator is used for comparison in java?"<<endl;
cout<<"a)="<<endl;
cout<<"b)=="<<endl;
cout<<"c):="<<endl;
cout<<"d)!="<<endl;
cin>>choice;
if(choice=='b'||choice=='B'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is B"<<endl;
}
break;
case 2:
cout<<i+1<<")which type of data is used to store whole numbers in java?"<<endl;
cout<<"a)float"<<endl;
cout<<"b)double"<<endl;
cout<<"c)int"<<endl;
cout<<"d)char"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is C"<<endl;
}
break;
case 3:
cout<<i+1<<")which of the following is not a java keyword?"<<endl;
cout<<"a)static"<<endl;
cout<<"b)void"<<endl;
cout<<"c)main"<<endl;
cout<<"d)public"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is c"<<endl;
}
break;
case 4:
cout<<i+1<<")which method is the entry point of a java program?"<<endl;
cout<<"a)start()"<<endl;
cout<<"b)run()"<<endl;
cout<<"c)main()"<<endl;
cout<<"d)init()"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is c"<<endl;
}
break;
case 5:
cout<<i+1<<")which keyboard is used to define a class in java?"<<endl;
cout<<"a)class"<<endl;
cout<<"b)data"<<endl;
cout<<"c)define"<<endl;
cout<<"d)struct"<<endl;
cin>>choice;
if(choice=='a'||choice=='A'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is a"<<endl;
}
break;
case 6:
cout<<i+1<<")who developed java?"<<endl;
cout<<"a)Microsoft"<<endl;
cout<<"b)Apple"<<endl;
cout<<"c)Sun Microsystems"<<endl;
cout<<"d)Google"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is c"<<endl;
}
break;
}
   i++;
}
	
}
void html(){
	int i=0,arr[7]; 
st.marks=0;
	char choice;
	while(i<6){
		back:
	st.random=rand()%7;
	for(int j=0;j<=6;j++){
		if(st.random==arr[j]){
		goto back;
	}
}
arr[i]=st.random;
	
	switch(st.random){
		case 0:
cout<<i+1<<")which tag is used to display an image?"<<endl;
cout<<"a)href"<<endl;
cout<<"b)link"<<endl;
cout<<"c)src"<<endl;
cout<<"d)path"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is C"<<endl;
}
break;
case 1:
cout<<i+1<<")which attribute is used to specify the link address?"<<endl;
cout<<"a)src"<<endl;
cout<<"b)link"<<endl;
cout<<"c)href"<<endl;
cout<<"d)url"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is C"<<endl;
}
break;
case 2:
cout<<i+1<<")which tag is used to insert a line break?"<<endl;
cout<<"a)<lb"<<endl;
cout<<"b)<break>"<<endl;
cout<<"c)<br>"<<endl;
cout<<"d)<p>"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is C"<<endl;
}
break;
case 3:
cout<<i+1<<")which tag is used for the largest heading?"<<endl;
cout<<"a)<h6>"<<endl;
cout<<"b)<heading>"<<endl;
cout<<"c)<h1>"<<endl;
cout<<"d)<head>"<<endl;
cin>>choice;
if(choice=='c'||choice=='C'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is c"<<endl;
}
break;
case 4:
cout<<i+1<<")which tag is used to create a paragraph in HTML?"<<endl;
cout<<"a)<p>"<<endl;
cout<<"b)<h>"<<endl;
cout<<"c)<br>"<<endl;
cout<<"d)<para>"<<endl;
cin>>choice;
if(choice=='a'||choice=='A'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is A"<<endl;
}
break;
case 5:
cout<<i+1<<")HTML is used to?"<<endl;
cout<<"a)style web pages"<<endl;
cout<<"b)create web page structure"<<endl;
cout<<"c)program logic"<<endl;
cout<<"d)connect databases"<<endl;
cin>>choice;
if(choice=='b'||choice=='B'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is B"<<endl;
}
break;
case 6:
cout<<i+1<<")HTML stands for?"<<endl;
cout<<"a)Hyper text markup language"<<endl;
cout<<"b)High text machine language"<<endl;
cout<<"c)Hyperlink text markup language"<<endl;
cout<<"d)Home tool markup language"<<endl;
cin>>choice;
if(choice=='a'||choice=='A'){
	cout<<"your answer is correct"<<endl;
	st.marks++;
}
else{
	cout<<"Your answer is incorrect"<<endl;
	cout<<"Your correct answer is A"<<endl;
}
break;
}
   i++;
}
	 
}
void result(){
float percentage=0;
cout<<"Student Name:"<<st.name<<endl;
cout<<"Roll NO:"<<st.rollno<<endl;
cout<<"marks:"<<st.marks<<" out of 6"<<endl;
percentage=100*st.marks/6;
cout<<"percentage:"<<percentage<<"%"<<endl;
if(percentage>=50){
	cout<<"Status:Pass"<<endl;
}
else{
	cout<<"Status:Fail"<<endl;
}
}	
int main()
{
char press,select;
	do{  
		system("CLS");
		cout<<"\n\n\t\t***************"<<endl;
		cout<<"\t\t QUIZ SYSTEM"<<endl;
		cout<<"\t\t*****************"<<endl;
		cout<<"\t\tEnter name:";
		cin>>st.name;
		cout<<"\t\tEnter Roll no:";
		
		cin>>st.rollno;
		system("CLS");
		cout<<"\t\tMarks less than 50% will be fail"<<endl;
		cout<<"\n\nSelect option which subjects quiz you want to perform"<<endl;
		cout<<"1)C++"<<endl;
		cout<<"2)java"<<endl;
		cout<<"3)Html"<<endl;
		cin>>select;
		system("CLS");
		switch(select){
			case '1':
				cout<<"\t\tC++ Quiz"<<endl;
				cpp();
				system("CLS");
				cout<<"\t\tC++ Quiz Result"<<endl;
				result();
				break;
			case '2':
				cout<<"\t\tJava Quiz"<<endl;
				java();
				system("CLS");
				cout<<"\t\tJava Quiz"<<endl;
				result();
				break;
			case '3':
				cout<<"\t\tHtml Quiz"<<endl;
				html();
				system("CLS");
				cout<<"\t\tHTML Quiz"<<endl;
				result();
				break;
			default:
				cout<<"Invalid input"<<endl;
				break;
				
		}
		cout<<"press y to continue or any key to terminate"<<endl;
	    cin>>press;
	}while(press=='y'||press=='Y');
}
