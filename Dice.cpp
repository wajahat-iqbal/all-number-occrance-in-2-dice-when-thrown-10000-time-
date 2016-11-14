#include<iostream>
#include<stdlib.h>
using namespace std;
main() 
{  
    int i ,sum,dice1, dice2, number[i];
	for(i=0 ;i<=12 ; i++){
    number[i]=0;
}
	for(i=1; i<=100000 ; i++){
		dice1 =rand() % 6 + 1 ;
	    dice2 =rand() % 6 + 1 ;
        sum=0;
		sum=dice1 +dice2 ;
		number[sum]=number[sum] + 1 ; 
}
     for(i=2; i<=12 ; i++){
    	cout<<"number of occrance of "<<i<<"   : "<<number[i]<<endl;
	 }	
}

