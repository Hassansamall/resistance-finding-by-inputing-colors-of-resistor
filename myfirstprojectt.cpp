#include <iostream>


#include <windows.h>
#include <cstring>
using namespace std;
struct three_band{
	int c_one ;
	int c_two ;
	int c_three ;
};
struct four_band{
	int c_one ;
	int c_two ;
	int c_three ;
	int tolerence ;
};
struct five_band{
	int c_one ;
	int c_two ;
	int c_three ;
	int c_four ;
	int tolerence ;
};
struct six_band{
	int c_one ;
	int c_two ;
	int c_three ;
	int c_four ;
	int tolerence ;
	int tcm ;
};
double three_band_find (three_band res1)
{
		cout<<endl<<res1.c_one<<res1.c_two;
	    
	for(int j=0;j<res1.c_three;j++){
		cout<<0;
	}
cout<<"ohm with +-20%";

}
double four_band_find (four_band res2){
	switch (res2.tolerence) {
		case 1 :
		cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1%";
		break;
		case 2 :
		cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
	}
		cout<<"ohm with +-2%";
		break;
		case 5 :
    	cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
	}
		cout<<"ohm with +-0.5%";
		break;
		case 6 :
		cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
	}
		cout<<"ohm with +-0.25%";
		break;
		case 7 :
		cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
	}	
		cout<<"ohm with +-0.1%";
		break;
		case 8 :
		cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
}
		cout<<"ohm with +-0.05%";
		break;
		case 10 :
		cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
	}
		cout<<"ohm +-5%";
		break;
		case 11 :
		cout<<res2.c_one<<res2.c_two;
			for(int j=0;j<res2.c_three;j++){
		cout<<0;
	}
		cout<<"ohm with +-10%";
		break;
		default :
		cout<<"u enterd wrong number ..";								
	}
}
double five_band_find (five_band res3){
	switch (res3.tolerence) {
		case 1 :
		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1%";
		break;
		case 2 :
		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2%";
		break;
		case 5 :
 		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5%";
		break;
		case 6 :
		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25%";
		break;
		case 7 :
		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1%";
		break;
		case 8 :
		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05%";
		break;
		case 10 :
		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5%";
		break;
		case 11 :
		cout<<res3.c_one<<res3.c_two<<res3.c_three;
			for(int j=0;j<res3.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10%";
		break;
		default :
		cout<<"u enterd wrong number ..";								
	}
}
double six_band_find (six_band res4){
if (res4.tolerence==1){
	if(res4.tcm==0){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 250ohms per 1c change .";
	}
	if(res4.tcm==1){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 100ohms per 1c change .";
	}	
	if(res4.tcm==2){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 50ohms per 1c change .";
	}
	if(res4.tcm==3){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 15ohms per 1c change .";
	}
	if(res4.tcm==4){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 25ohms per 1c change .";
	}
	if(res4.tcm==5){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 20ohms per 1c change .";
	}
	if(res4.tcm==6){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 10ohms per 1c change .";
	}
	if(res4.tcm==7){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 5ohms per 1c change .";
	}
	if(res4.tcm==8){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 1ohms per 1c change .";
	}
	if(res4.tcm==12){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-1% and it may inc. or dec. by 5ohms per 1c change .";
	}										
}	
if (res4.tolerence==2){
	if(res4.tcm==0){
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==1){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 100ohms per 1c change .";
	}	                                                                            
	if(res4.tcm==2){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 50ohms per 1c change .";
	}                                                                             
	if(res4.tcm==3){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 15ohms per 1c change .";
	}                                                                             
	if(res4.tcm==4){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 25ohms per 1c change .";
	}                                                                             
	if(res4.tcm==5){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 20ohms per 1c change .";
	}                                                                             
	if(res4.tcm==6){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 10ohms per 1c change .";
	}                                                                             
	if(res4.tcm==7){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 5ohms per 1c change .";
	}                                                                             
	if(res4.tcm==8){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 1ohms per 1c change .";
	}                                                                             
	if(res4.tcm==12){                                                             
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-2% and it may inc. or dec. by 5ohms per 1c change .";
	}										                                                            
}                                                                       
if (res4.tolerence==5){                                                 
	if(res4.tcm==0){                                                       
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==1){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 100ohms per 1c change .";
	}	                                                                            
	if(res4.tcm==2){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 50ohms per 1c change .";
	}                                                                             
	if(res4.tcm==3){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 15ohms per 1c change .";
	}                                                                             
	if(res4.tcm==4){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 25ohms per 1c change .";
	}                                                                             
	if(res4.tcm==5){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 20ohms per 1c change .";
	}                                                                             
	if(res4.tcm==6){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 10ohms per 1c change .";
	}                                                                             
	if(res4.tcm==7){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 5ohms per 1c change .";
	}                                                                             
	if(res4.tcm==8){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 1ohms per 1c change .";
	}                                                                             
	if(res4.tcm==12){                                                             
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.5% and it may inc. or dec. by 5ohms per 1c change .";
	}										                                                            
}                                                                       
if (res4.tolerence==6){                                                 
	if(res4.tcm==0){                                                       
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==1){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}	                                                                            
	if(res4.tcm==2){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==3){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==4){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==5){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==6){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==7){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==8){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==12){                                                             
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.25% and it may inc. or dec. by 250ohms per 1c change .";
	}										                                                            
}                                                                       
if (res4.tolerence==7){                                                 
	if(res4.tcm==0){                                                       
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==1){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 100ohms per 1c change .";
	}	                                                                            
	if(res4.tcm==2){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 50ohms per 1c change .";
	}                                                                             
	if(res4.tcm==3){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 15ohms per 1c change .";
	}                                                                             
	if(res4.tcm==4){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 25ohms per 1c change .";
	}                                                                             
	if(res4.tcm==5){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 20ohms per 1c change .";
	}                                                                             
	if(res4.tcm==6){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 10ohms per 1c change .";
	}                                                                             
	if(res4.tcm==7){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 5ohms per 1c change .";
	}                                                                             
	if(res4.tcm==8){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 1ohms per 1c change .";
	}                                                                             
	if(res4.tcm==12){                                                             
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.1% and it may inc. or dec. by 5ohms per 1c change .";
	}										                                                            
}                                                                       
if (res4.tolerence==8){                                                 
	if(res4.tcm==0){                                                       
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==1){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 100ohms per 1c change .";
	}	                                                                            
	if(res4.tcm==2){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 50ohms per 1c change .";
	}                                                                             
	if(res4.tcm==3){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 15ohms per 1c change .";
	}                                                                             
	if(res4.tcm==4){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 25ohms per 1c change .";
	}                                                                             
	if(res4.tcm==5){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 20ohms per 1c change .";
	}                                                                             
	if(res4.tcm==6){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 10ohms per 1c change .";
	}                                                                             
	if(res4.tcm==7){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 5ohms per 1c change .";
	}                                                                             
	if(res4.tcm==8){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 1ohms per 1c change .";
	}                                                                             
	if(res4.tcm==12){                                                             
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-0.05% and it may inc. or dec. by 5ohms per 1c change .";
	}										                                                            
}                                                                       
if (res4.tolerence==10){                                                
	if(res4.tcm==0){                                                       
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==1){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 100ohms per 1c change .";
	}	                                                                            
	if(res4.tcm==2){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 50ohms per 1c change .";
	}                                                                             
	if(res4.tcm==3){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 15ohms per 1c change .";
	}                                                                             
	if(res4.tcm==4){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 25ohms per 1c change .";
	}                                                                             
	if(res4.tcm==5){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 20ohms per 1c change .";
	}                                                                             
	if(res4.tcm==6){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 10ohms per 1c change .";
	}                                                                             
	if(res4.tcm==7){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 5ohms per 1c change .";
	}                                                                             
	if(res4.tcm==8){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 1ohms per 1c change .";
	}                                                                             
	if(res4.tcm==12){                                                             
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-5% and it may inc. or dec. by 5ohms per 1c change .";
	}										                                                            
}                                                                       
if (res4.tolerence==11){                                                
	if(res4.tcm==0){                                                       
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 250ohms per 1c change .";
	}                                                                             
	if(res4.tcm==1){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 100ohms per 1c change .";
	}	                                                                            
	if(res4.tcm==2){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 50ohms per 1c change .";
	}                                                                             
	if(res4.tcm==3){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 15ohms per 1c change .";
	}                                                                             
	if(res4.tcm==4){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 25ohms per 1c change .";
	}                                                                             
	if(res4.tcm==5){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 20ohms per 1c change .";
	}                                                                             
	if(res4.tcm==6){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 10ohms per 1c change .";
	}                                                                             
	if(res4.tcm==7){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 5ohms per 1c change .";
	}                                                                             
	if(res4.tcm==8){                                                              
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 1ohms per 1c change .";
	}                                                                             
	if(res4.tcm==12){                                                             
		cout<<res4.c_one<<res4.c_two<<res4.c_three;
			for(int j=0;j<res4.c_four;j++){
		cout<<0;
	}
	    cout<<"ohm with +-10% and it may inc. or dec. by 5ohms per 1c change .";
	}										                                                        
}	                                                                  
}                                                                   
int main (){                                                        
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);                        
	three_band res1;                                                   
	four_band res2;                                                    
	five_band res3;                                                    
	six_band res4;                                                     
	 char a;                                                                  
	int no_of_bands;                                                   
	cout<<" THE RESISTOR COLOR CALCULATOR "<<endl;                     
	cout<<" Firstly let me help u alittle :) "<<endl;                  
	SetConsoleTextAttribute(h, 7);                                     
	cout << "[0] Black "<<endl;                                        
    SetConsoleTextAttribute(h,6);
	cout << "[1] Brown "<<endl;
	SetConsoleTextAttribute(h, 12);
	cout << "[2] Red "<<endl;
	SetConsoleTextAttribute(h, 6);
	cout << "[3] Orange "<<endl;
	SetConsoleTextAttribute(h, 14);
	cout << "[4] Yellow "<<endl;
	SetConsoleTextAttribute(h, 10);
	cout << "[5] Green "<<endl;
	SetConsoleTextAttribute(h, 1);
	cout << "[6] blue "<<endl;
	SetConsoleTextAttribute(h, 5);
	cout << "[7] Violet or Purple "<<endl;
	SetConsoleTextAttribute(h, 8);
	cout << "[8] Grey "<<endl;
	SetConsoleTextAttribute(h, 15);
	cout << "[9] White "<<endl;
	SetConsoleTextAttribute(h, 126);
	cout << "[10] Gold "<<endl;
	SetConsoleTextAttribute(h, 7);
	cout << "[11] Silver "<<endl;
	SetConsoleTextAttribute(h, 13);
	cout << "[12] Pink "<<endl;	
	SetConsoleTextAttribute(h, 7);				
	cout<<" Now please enter how many bands u have :"<<endl;
	cin>>no_of_bands;
if (no_of_bands==3){
	cout<<" Now please enter the number of colors from left to right in order : "<<endl;
			    cin>>res1.c_one>>res1.c_two>>res1.c_three;
				cout<<endl; 
		        cout << "Loading ";
                 for (int i = 0; i < 10; i++) {
                    cout << ". ";
                        Sleep(200); 
                 	    }
                 cout<<endl<< three_band_find (res1);	
}
else if (no_of_bands==4){
	 cout<<" Now please enter the number of colors from left to right in order : "<<endl;
			    cin>>res2.c_one>>res2.c_two>>res2.c_three>>res2.tolerence;
		        cout << "Loading ";
                 for (int i = 0; i < 10; i++) {
                    cout << ". ";
                        Sleep(200); 
                 	    }
                cout<<endl<< four_band_find (res2);	
}
else if (no_of_bands==5){
	 cout<<" Now please enter the number of colors from left to right in order : "<<endl;
			    cin>>res3.c_one>>res3.c_two>>res3.c_three>>res3.c_four>>res3.tolerence;
		        cout << "Loading ";
                 for (int i = 0; i < 10; i++) {
                    cout << ". ";
                        Sleep(200); 
                 	    }
                cout<<endl<< five_band_find (res3);	
}
else if (no_of_bands==6){
	 cout<<" Now please enter the number of colors from left to right in order : "<<endl;
			    cin>>res4.c_one>>res4.c_two>>res4.c_three>>res4.c_four>>res4.tolerence>>res4.tcm;
		        cout << "Loading ";
                 for (int i = 0; i < 10; i++) {
                    cout << ". ";
                        Sleep(200); 
                 	    }
                cout<<endl<< six_band_find (res4);	
}
else {cout<<" enter valid number ... "<<endl;}
cin>>a;		
return 0;	
}

