#include <iostream>
#include <string>
using namespace std;
//Question 1
//int main(){
//	int num;
//	//asking user to enter number
//	cout<<"enter number: ";
//	cin>>num;
//	//using for loop and if statement to find and display multiple factors
//    for (int i = 1; i <= num; ++i) {
//        if (num % i == 0) {
//            cout << i << " "; }
//    }
//    cout << std::endl;
//    return 0;	
//}

//Question 3
//int main(){
//	int num;
//	bool range;
//
//	cout<<"enter num :";
//	cin>>num;
//	if (num>10 && num<=20){
//		cout<<1;
//	}
//	else{
//			cout<<0;
//	}
//
//	return 0;
//}


//Question 4
//int main(){ int N, i, j;
//bool isyes=false;
//cout<<"Enter Number : "; cin>>N;
//i=N;
//while(i>1){
//j=i-1; isyes=false; while(j>1){
//if(i%j==0){
////	cout<<i<<" "<<j<<endl;
//isyes=false; break;
//}
//else if(i%j==1){
//isyes=true;
//}
//j--;
//}
//
// if(isyes==true){
//cout<<"Largest Prime Number under "<<N<<" is: "<<i; break;
//
//}
//i--;
//}
//}
// 

//Question 5
//int main() {
//    string string1, string2;
//    int len2,i;
//    string reverse2;
//    //inputting strings
//    cout << "Enter string 1: ";
//    cin >> string1;
//    cout << "Enter string 2: ";
//    cin >> string2;
//    //checking if they are equal and reversing them accordingly
//    if(string1==string2)
//    {
//    	len2 = string2.length();
//    	for( i=len2 - 1; i>=0; i--)
//    	{
//    		reverse2 += string2[i];
//		}
//		
//		cout<<"The strings are equal so ";
//		cout<<"the first string is : "<<string1<<endl;
//		cout<<"the second string now is : "<<reverse2;
//    	
//	}
//	else
//	{
//		cout<<"The strings unequal";
//	}
//return 0;
//}



//Question 6


//int main(){
//int dividend=0, divisor=1, remainder, qoutient, result, count; while(divisor>dividend){
//cout<<"Dividend Must be Greater than the Divisor!"<<endl; cout<<"Enter the Dividend: ";
//cin>>dividend; cout<<"Enter the Divisor: "; cin>>divisor;
//}
//for(count=1; count<=dividend; count++){ remainder=dividend%divisor; result=(divisor*count)+remainder; if(result==dividend){
//qoutient=count; break;
//}
//}
//cout<<dividend<<" / "<<divisor<<" = "<<qoutient<<endl; if(remainder>0)
//{
//cout<<"The Remainder is: "<<remainder;
//}
//return 0;
//}

//Question 7

//
//int main(){
//string letter, uletter; int len, count, count2;
//cout<<"Please Enter a Word: "; cin>>letter;
//uletter=letter;
//for(count=0; count<letter.length(); count++){ tolower(letter[count]);
//for(count2=count+1; count2<=letter.length(); count2++ ){ if(letter[count]==letter[count2]){
//letter[count]=' '; letter[count2]=' ';
//
//}
//}
//}
//uletter="";
//for(count=0; count<letter.length(); count++){ if(isspace(letter[count])){
//continue;
// 
//}
//else{
//
//}
//}
// 
//
//
//uletter += letter[count];
// 
//cout<<"New Word is: "<<uletter<<endl;
//}

//Question 8
//int main(){
//	int i,j,k;
//	k=8;
//	//initialzing array biger than 5 elements
//	int a[k]={1,2,3,4,5,6,7,8};
//	//outputting values of extended array
//cout<<"values of extended array are: ";
//	for (j=0;j<8;j++){
//		cout<<a[j]<<" ";
//	}
//	
//}

//Question 9
//int main(){ int arr[10];
//int X, inp=0, size, i=0; 
//bool flag=false;
//
// while(inp != -1){
//cout<<"Enter a Value for Array, Press -1 to Quit!"; 
//cin>>inp;
//if(inp==-1){
//break;
//}
//else{
//arr[i]=inp;
// i++;
//
//}
//}
// //asking user for triplet number
//cout<<"Enter Number for Which Triplet is Required: "; 
//cin>>X;
//size=sizeof(arr)/sizeof(arr[0]);
// for (i = 0; i < size - 2; ++i) {
//     for (int j = i + 1; j < size - 1; ++j) { 
//	    for (int k = j + 1; k < size; ++k) {
//if (arr[i] + arr[j] + arr[k] == X) {
//cout << "Triplet: " << arr[i] << " " << arr[j] << " " << arr[k] << endl; flag=true;
//}
//}
//}
//}
//if(flag==false){
//cout<<"Triplet not Found!";
//}
//
//}

//Question 10
//int main()
//{int i,j,k,z,temp;
//int num[6];
////entering elements in array
//for(k=0;k<6;k++){
//	cout<<"enter element in array"<<endl;
//	cin>>num[k];
//}
////bubble sorting using for loops
//for(i=0;i<6;i++){
//	for (j=0;j<6;j++){
//		if (num[j]>num[j+1]){
//		
//			temp=num[j];
//			num[j]=num[j+1];
//			num[j+1]=temp;}
//			else{continue;
//			}	
//		
//	}
//	
//}
////displayimg sorted results
//cout<<"sorted elements in array are: "<<endl;
//	for(z=0;z<6;z++){
//		cout<<num[z]<<endl;
//	}
//
//}





 


 




