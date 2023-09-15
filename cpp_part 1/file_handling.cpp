#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;

const int SIZE=20;
class Stud_Data
{
	int std_rno;
	char std_nm[20],address[20];
	char division;
	
	public:
		Stud_Data()
		{
			
		}
		Stud_Data(int std_rno, char std_nm[SIZE],char division ,char address[SIZE])
		{
			strcpy(this->std_nm,std_nm);
			strcpy(this->address,address);
			this->std_rno = std_rno;
			this->division = division;
		}
		
		int getStd_rno()
		{
			return std_rno;
		}
		void displayRecord()
		{
			cout<<endl<<setw(5)<<std_rno<<setw(20)<<std_nm<<setw(5)<<division<<setw(10)<<address;
		}
};

//= = = = = = = = = = = = = = = File opereation = = = = = = = = = = = = = = = 
class FileOperations
{
	fstream file;
	public:
		
		FileOperartions(char*filestd_nm)
		{
			file.open(filestd_nm, ios::in|ios::out|ios::ate|ios::binary);
		}
		
		void insertRecord(int std_rno, char std_nm[SIZE],char division, char address[SIZE])

{
	Stud_Data s1(std_rno, std_nm, division , address);
	file.seekp(0, ios::end);
	file.write((char *)&s1,sizeof(Stud_Data));
	file.clear();
}
void displayAll()
{
	Stud_Data s1;
	file.seekg(0, ios::beg);
	while(file.read((char *)&s1, sizeof(Stud_Data)))
	{
		s1.displayRecord();
	}
	file.clear();
}
void displayRecord(int std_rno)
{
	Stud_Data s1;
	file.seekg(0, ios::beg);
	bool flag=false;
	while(file.read((char*)&s1, sizeof(Stud_Data)))
	{
		if(s1.getStd_rno()==std_rno)
		{
			s1.displayRecord();
			flag=true;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"\n Record of"<<std_rno<<"is not present.\n";
	}
	file.clear();
}
void deleteRecord(int std_rno)
{
	ofstream outFile("new.dat", ios::binary);
	file.seekg(0, ios::beg);
	bool flag=false;
	Stud_Data s1;
	
	while(file.read((char *)& s1,sizeof(Stud_Data)))
	{
		if(s1.getStd_rno()==std_rno)
		{
			flag = true;
			continue;
		}
		outFile.write((char *)& s1,sizeof(Stud_Data));
	}
	if(!flag)
	{
		cout<<"\n Record of"<<std_rno<<"is not present.\n";
	}
	file.close();
	outFile.close();
	remove("Stud_Records.dat");
	rename("new.dat","Stud_Records.dat");
	
	file.open("Stud_Records.dat", ios::in|ios::out|ios::ate|ios::binary);
	cout<<"\n Record Deleted";
}
~FileOperations()
{
	file.close();
	cout<<"\n File Closed.";
}
};

int main()
{
	ofstream newFile("Stud_Records.dat", ios::app|ios::binary);
	newFile.close();
	
   FileOperations file((char*)"Stud_Records_dat");	
	int std_rno, choice=0;
	char division;
	char std_nm[SIZE], address[SIZE];
	while(choice!=5)
	{
		//clrscr();
		
		cout<<"\n *****Student Records*****\n";
		cout<<"1) Add News Records\n";
		cout<<"2) Display All Records\n";
		cout<<"3) Search by Roll no\n";
		cout<<"4) Delete a Record\n";
		cout<<"5) Exit\n";
		cout<<"\n Select your option :";
		cin>>choice;
		switch(choice)
		{
			case 1://New Record
			cout<<endl<<"Enter roll number , nmae , division and address :";
			cin>>std_rno>>std_nm>>division>>address;
			file.insertRecord(std_rno , std_nm, division , address);
			cout<<"\n Record Inserted.";
			break;
			
			case 2:
			cout<<endl<<setw(5)<<"ROLL"<<setw(20)<<"STD_NM"<<setw(5)<<"DIVISION"<<setw(10)<<"ADDRESS";
			file.displayAll();
			break;
			
			case 3:
			cout<<"Eter Roll Number to search :";
			cin>>std_rno;
			file.displayRecord(std_rno);
			break;
			
			case 4:
			cout<<"Enter roll number to delete :";
			cin>>std_rno;
			file.deleteRecord(std_rno);
			break;
			
			case 5: break;
				
		}
	}
	return 0;
}

