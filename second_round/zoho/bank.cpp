#include<iostream>
#include<string>
using namespace std;
class bank{
	public:
		int cus_id;
	   double ac_no;
		string name;
		string psw;
		string eny_psw;
		string re_psw;
	double balance=10000;
	int count=0;
		static int ac_counter;
	    static int id_counter; 
		void getdata(string name,string eny_psw){
		
		  this->cus_id=id_counter;
		  this->ac_no=ac_counter;
		  this->name=name;
		  //this->balance=balance;
		  this->eny_psw=eny_psw;
		  ac_counter +=11011;
		  id_counter +=11;	
		}
		void display_data(){
		  cout<<cus_id<<"  ";
		  cout<<ac_no<<"  ";
		  cout<<name<<"  ";
		  cout<<balance<<"  ";
		  cout<<eny_psw<<"  "<<endl;	
		}
};
int  bank ::ac_counter=11011;
int bank:: id_counter=11;

int main(){
//	int n;
//	cout<<"enter N: ";
//	cin>>n;
	bank b[100];
	int c_id;
	double ac_no;
	string name;
	double balance;
	string eny_psw;
	int l1,l2;
    int choice;
    int count=0;
   while(1){
	cout<<"1.enter data:"<<endl;
	cout<<"2.add new data:"<<endl;
	cout<<"3.Display:"<<endl;
	cout<<"4.ATM withdraw:"<<endl;
	cout<<"5.Cash deposit:"<<endl;
	cout<<"6.Cash transfer:"<<endl;
	cout<<"7.Exit"<<endl;
   cout<<"enter your choice:";
   cin>>choice;
   switch(choice){
   	  case 1:{
   	  	    
		cout<<"enter name:";
		cin>>name;
//		cout<<"enter balance:";
//		cin>>balance;
		cout<<"enter encrypt psw:";
		cin>>eny_psw;
		b[count].getdata(name,eny_psw);
		count++;
	
		//b[i].display_data();
		cout<<endl;
	
			break;
		 }
	case 2:{
		string re_psw,psw;
		//count++;
		int flag=true;
		
		cout<<"enter name: ";
		cin>>name;
		cout<<"enter password:";
		cin>>psw;
		cout<<"Retype the password:";
		cin>>re_psw;
		eny_psw=psw;
		l1=psw.length();
		l2=re_psw.length();
		if(l1==l2)
		{
		   for(int i=0;i<l1;i++){
		   	if(psw[i]!=re_psw[i]){
		   		flag=false;
			   }
		   }
		   if(flag){
		   	cout<<"psw correct!";
	        b[count].getdata(name,eny_psw);
	        count++;
		    break;
		   }	
		}
		else{
			cout<<"password mis match!"<<endl;
		}
		
	}
	case 3:{
		for(int i=0;i<count;i++){
			b[i].display_data();
		}
		break;
	}
	
	case 4:{
		bool flag=false;
		double min_b=1000;
		double amt;
		string a,c;
		cout<<"name: ";
		cin>>a;
		cout<<"psw:";
		cin>>c;
		for(int i=0;i<count;i++){
//			cout<<a;
//			cout<<b[i].name;
          if(b[i].name==a && b[i].eny_psw==c ){
            //cout<<a;
        	cout<<"enter amt:";
        	cin>>amt;
        	int d,e;
        	d=b[i].balance;
        	if(amt < b[i].balance-min_b){
        		cout<<"success"<<endl;
                e=d-amt;
                cout<<e<<endl;
                b[i].balance=e;
			}
			else{
				cout<<"min balance 1000 required";
			}
			//break;
		 }
	}
		break;
	}
	
   case 5:{
   	  double amt;
		string a,c;
		cout<<"name: ";
		cin>>a;
		cout<<"psw:";
		cin>>c;
		for(int i=0;i<count;i++){
//			cout<<a;
//			cout<<b[i].name;
          if(b[i].name==a && b[i].eny_psw==c ){
            //cout<<a;
        	cout<<"enter amt:";
        	cin>>amt;
        	int d,e;
        	d=b[i].balance+amt;
        	cout<<d<<endl;
        		cout<<"success"<<endl;
        	 b[i].balance=d;
         }
			else{
				cout<<"min balance 1000 required!!";
			}
		
		break;
	}
	break;
   }
   case 6:{
		double amt;
		double min_b=1000;
		string a,c;
		cout<<"name: ";
		cin>>a;
		cout<<"psw:";
		cin>>c;
		 int to_id;
		for(int i=0;i<count;i++){
//			cout<<a;
//			cout<<b[i].name;
          if(b[i].name==a && b[i].eny_psw==c ){
            //cout<<a;
            
            cout<<"enter to which acc_id to transfer:";
            cin>>to_id;
        	cout<<"enter amt:";
        	cin>>amt;
        	int d,e;
        	d=b[i].balance;
        	if(amt < b[i].balance-min_b){
                
                cout<<"transfer success";
                for(int j=0;j<count;j++){
                	//cout<<b[j].cus_id<< " "<<to_id;

			    if(b[j].cus_id==to_id){
			    	//cout<<endl<<endl<<b[j].cus_id<< " "<<to_id<<endl<<endl;
				int z;
				z=b[j].balance+amt;
				b[j].balance=z;
				//cout<<b[i].balance;
			}
			
		}
		b[i].balance=b[i].balance-amt;
			}
			else{
				cout<<"min balance 1000 required";
			}
		}}
		
	
   break;
   }
   case 7:{
   	  cout<<"choice wrong!";
   	  exit;
	break;
   }
   
}
}
return 0;
}

